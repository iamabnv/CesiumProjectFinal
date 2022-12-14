// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ATreeSpawner.generated.h"

UCLASS()
class AATreeSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AATreeSpawner();

	UPROPERTY(EditAnywhere)
	int TreeCount;

	UPROPERTY(VisibleAnywhere)
	UHierarchicalInstancedStaticMeshComponent* Trees;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnTrees();
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
