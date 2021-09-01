// Black hole plugin Ver 1.0
// Created by Leonardo Gabriel de Lima
// Git Hub:https://github.com/leonardodesigner

#include "BlackHoleSource.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Vector.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
ABlackHoleSource::ABlackHoleSource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Base mesh Configurations
	BlackHoleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BlackHoleMesh"));
	BlackHoleMesh -> SetCollisionProfileName("NoCollision");
	BlackHoleMesh -> SetupAttachment(RootComponent);
	BlackHoleMesh -> SetRelativeLocation(FVector(0.0f,0.0f,-0.0f),false);
	BlackHoleMesh -> SetRelativeScale3D(FVector(1.0f,1.0f,1.0f));

	// Particle Configuration
	BlackHoleParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	BlackHoleParticleEffect -> SetupAttachment(BlackHoleMesh);
	BlackHoleParticleEffect -> SetRelativeLocation(FVector(0.0f,0.0f,-0.0f),false);
	BlackHoleParticleEffect -> SetRelativeScale3D(FVector(1.0f,1.0f,1.0f));

	//Sound Configuration
	BlackHoleSound = CreateDefaultSubobject<USoundBase>(TEXT("SoundComponent"));
	
}

// Called when the game starts or when spawned
void ABlackHoleSource::BeginPlay()
{
	Super::BeginPlay();

	// Play black hole base sound
	UGameplayStatics::PlaySound2D(this,BlackHoleSound);
	
}

void ABlackHoleSource::PlayEffect(AActor * SuctedActor)
{

	// Play Particle Effects
	UGameplayStatics::SpawnEmitterAtLocation(this,SuctionEffect,SuctedActor->GetActorLocation());
	// Play Sounds
	UGameplayStatics::PlaySound2D(this,SuctionSound);
	
}

// Called every frame
void ABlackHoleSource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// start and end locations
	const FVector SweepStart = GetActorLocation();
	const FVector SweepEnd   = GetActorLocation();

	
	
	// Add Owner Actor to Ignore
	ActorsToIgnore.Add(GetOwner());

	// create T array for multiple hit results
	TArray <FHitResult> HitArray;

	// Create a sphere trace 
	const bool Hit = UKismetSystemLibrary::SphereTraceMultiForObjects(GetWorld(),SweepStart,SweepEnd,HoleRadius, ObjectsAffected ,false,ActorsToIgnore, DrawDebug ,HitArray,true,FLinearColor::Red,FLinearColor::Green);

	//Verify if black hole trace has hit objects in level 
	if (Hit)
	{
		// Loop 
		for (const FHitResult HitResult: HitArray)
		{
			if (GEngine)
			{
				if (HitResult.Actor .IsValid())
					
				{
					const FVector Dist     = HitResult.Actor -> GetActorLocation() - GetActorLocation(); // Distance between actors
						
					const float DistLength = Dist.Size(); // Get Distance Length

					// For projectiles components
					
					UProjectileMovementComponent* Projectile = Cast< UProjectileMovementComponent >(HitResult.Actor->FindComponentByClass(UProjectileMovementComponent::StaticClass()));
				
					if (Projectile != nullptr )
					{
						auto * HitActor= Cast<AActor>(HitResult.Actor );
						Projectile -> StopMovementImmediately();       // Stop projectile movement when is range of black hole
						Projectile -> Deactivate();                    // Deactivate projectile movement after is stoped 
						const FVector ObjLocations = UKismetMathLibrary::VInterpTo (HitActor -> GetActorLocation(),GetActorLocation(),DeltaTime,SuctionVelocity/10.0f);
						const FVector DistProj     = HitActor -> GetActorLocation() - GetActorLocation(); // Distance between actors
						const float DistProjLength = DistProj.Size(); // Get Distance Length

				
						if (HitResult.Component ->IsSimulatingPhysics())
						{
							

							// Math Expression to suction Impulse of Black hole
						
							const FRotator RotDirection = UKismetMathLibrary::FindLookAtRotation(HitActor -> GetActorLocation(),GetActorLocation()); // Get the direction using Find look at rotation

							const FVector Direction =  UKismetMathLibrary::GetForwardVector(RotDirection); // Create the Direction using Forward Vector

							const FVector HoleForce = (Direction * DistProjLength)*SuctionVelocity; // Create Force 
						
							HitResult.Component -> AddForce(HoleForce,NAME_Name,true);
							
						}
						else
						{
							HitResult.Actor -> SetActorLocation(ObjLocations);
						}

						// Destroy actor based in minimum radius
						if (DistLength <= DestroyDistance)
						{

							
							if (GetLocalRole() == ROLE_Authority)
							{
								PlayEffect(HitActor);          // Play Effects
								OnDestroyActor(HitActor);      // Active on destroy actor event before destroy actor permanently
								HitActor -> Destroy();         // Destroy Actor Permanently	
							}  
						}

						
					
					}

					

					// For Simulated Physics Objects
					if (HitResult.Component.IsValid())
					{
						if (HitResult.Component ->IsSimulatingPhysics())
						{
							auto * HitActor= Cast<AActor>(HitResult.Actor );
							// Math Expression to suction Impulse of Black hole
						
							const FRotator RotDirection = UKismetMathLibrary::FindLookAtRotation(HitActor -> GetActorLocation(),GetActorLocation()); // Get the direction using Find look at rotation

							const FVector Direction =  UKismetMathLibrary::GetForwardVector(RotDirection); // Create the Direction using Forward Vector

							const FVector HoleForce = (Direction * DistLength)*SuctionVelocity; // Create Force 
						
							HitResult.Component -> AddForce(HoleForce,NAME_Name,true);
                        

						
							// Destroy objects in based minimum radius
							if (DistLength <= DestroyDistance)
							{
								if (GetLocalRole() == ROLE_Authority)
								{

									PlayEffect(HitActor);          // Play Effects
									OnDestroyActor(HitActor);      // Active on destroy actor event before destroy actor permanently
									HitActor-> Destroy(); 	       // Destroy Actor Permanently
								}  
							}
				
						}
						
					}
				

					
				


					// For Characters
					auto * HitCharacter= Cast<ACharacter>(HitResult.Actor );

					if (IsValid(HitCharacter))
					{

						// Create the interpolation between the Character location and the center location of black hole.
						const FVector ObjLocations = UKismetMathLibrary::VInterpTo (HitResult.Actor -> GetActorLocation(),GetActorLocation(),DeltaTime,SuctionVelocity/10.0f);

                        // If Character in range black hole, the movement mode is changed to Flying Mode
						if (DistLength <= HoleRadius - (HoleRadius*0.1) )
						{
							HitCharacter -> GetCharacterMovement() -> SetMovementMode(MOVE_Flying);
						}

						// Else, the movement mode is changed to Walking Mode
						if (DistLength > HoleRadius - (HoleRadius*0.1))
						{
							HitCharacter -> GetCharacterMovement() -> SetMovementMode(MOVE_Walking);
						}

						// Set the character location with the created interpolation
						HitCharacter -> SetActorLocation(ObjLocations);

						if (DistLength <= DestroyDistance)
						{

							// Destroy objects in based minimum radius
							if (GetLocalRole() == ROLE_Authority)
							{
								PlayEffect(HitCharacter);             // Play Effects
								OnDestroyActor(HitCharacter);         // Active on destroy actor event before destroy actor permanently
								HitResult.Actor -> Destroy(); 	      // Destroy Actor Permanently
							}  
						}
						
					}



					
					
					
				}
				
			}

		}

	}

	
}

