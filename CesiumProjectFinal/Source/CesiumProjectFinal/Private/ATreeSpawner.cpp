// Fill out your copyright notice in the Description page of Project Settings.


#include "ATreeSpawner.h"

#include "FTree.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

// Sets default values
AATreeSpawner::AATreeSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create and setup Hierarchical Instanced Static Mesh Component
    Trees = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Trees"));
    Trees->SetupAttachment(RootComponent);
    Trees->SetCullDistances(1000, 100000);

	// Default number of trees to be spawned
	TreeCount = 5;
}

// Called when the game starts or when spawned
void AATreeSpawner::BeginPlay()
{
	Super::BeginPlay();

	// Spawn trees
	SpawnTrees();
}

void AATreeSpawner::SpawnTrees()
{
	// Create tree properties
	std::vector<FTree> TreeProps = createTrees(TreeCount);

	// Iterate over each tree property
	for (int i = 0; i < TreeProps.size(); i++)
	{
		// Location component for tree instance
		FVector Loc = FVector(TreeProps[i].positionX, TreeProps[i].positionY, TreeProps[i].positionZ);

		// Rotation component for tree instance
		FRotator Rot = FRotator(0, 0, 0);

		// Scale component for tree instance
		FVector Scl = FVector((TreeProps[i].canopyRadius / 1000),
			(TreeProps[i].canopyRadius / 1000), (TreeProps[i].height / 1000));

		// Transform for tree instance
		FTransform Tra = FTransform(Rot, Loc, Scl);

		// Add tree instance
		Trees->AddInstance(Tra, true);
	}
}

// Called every frame
void AATreeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

