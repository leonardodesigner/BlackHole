// Black hole plugin Ver 1.0
// Created by Leonardo Gabriel de Lima
// Git Hub:https://github.com/leonardodesigner

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BlackHoleSource.generated.h"


class UparticleSystem;

UCLASS()
class BLACKHOLE_API ABlackHoleSource : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlackHoleSource();

	//Hole Radius
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	float HoleRadius = 500.0;

	// Can destroy objects
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	bool bCanDestroyObjects = true;

	// Can destroy Characters
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	bool bCanDestroyCharacters = true;
	
	//Distance to destroy objects
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =( ExposeOnSpawn="true"))
	float DestroyDistance = 100.0;

	
	// Debug trace
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	TEnumAsByte< EDrawDebugTrace::Type  > DrawDebug;

	// Objects type can be destroyed
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	TArray <TEnumAsByte< EObjectTypeQuery > > ObjectsAffected;

	//Actors to Ignore
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	TArray<AActor*> ActorsToIgnore;
	
	// Suction Velocity
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Basic Properties", Meta =(ExposeOnSpawn="true"))
	float GravitationalAttraction = 10.0;

	// Black base hole Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,  Category="Components" , Meta =(ExposeOnSpawn="true"))
	UStaticMeshComponent* BlackHoleMesh;

	// Black hole particle effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "Basic Properties|Effects" , Meta =(ExposeOnSpawn="true",DisplayName="Black Hole Particle"))
	UParticleSystem* SetBlackHoleEffect;
	UPROPERTY( BlueprintReadOnly,  Category = "Basic Properties|Effects")
	UParticleSystemComponent* BlackHoleParticleEffect;
	
	// Black hole sound
    UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category="Basic Properties|Sounds" , Meta =(ExposeOnSpawn="true",DisplayName="Black Hole Sound"))
	USoundBase* BlackHoleSound;

	// Black hole particle effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "Basic Properties|Effects" , Meta =(ExposeOnSpawn="true"))
	UParticleSystem* DestructionEffect;
	
	// Black hole sound
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category="Basic Properties|Sounds" , Meta =(ExposeOnSpawn="true"))
	USoundBase* DestructionSound;


	//Play Effects Function
	void PlayEffect(AActor * AttractedActor);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

private:	

	//Multicast spawn effect
	UFUNCTION(NetMulticast,Reliable)
	void Multi_PlayEffect(AActor * AttractedActor);
	void Multi_PlayEffect_Implementation(AActor * AttractedActor);
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// activates events in the actors before it is destroyed. Example: Activate the character death event before the character is destroyed
	UFUNCTION(BlueprintImplementableEvent, Category="Black hole events")
	void OnDestroyActor(AActor*Actor);

};
