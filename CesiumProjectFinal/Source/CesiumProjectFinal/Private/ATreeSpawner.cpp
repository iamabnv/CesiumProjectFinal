// Fill out your copyright notice in the Description page of Project Settings.


#include "ATreeSpawner.h"

#include "FTree.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

// Sets default values
AATreeSpawner::AATreeSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

    Trees = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("Trees"));
    Trees->SetupAttachment(RootComponent);
    Trees->SetCullDistances(50000, 100000);

	TreeCount = 5;
}

// Called when the game starts or when spawned
void AATreeSpawner::BeginPlay()
{
	Super::BeginPlay();
	SpawnTrees();
}

void AATreeSpawner::SpawnTrees()
{
	std::vector<FTree> TreeProps = createTrees(TreeCount);
	for (int i = 0; i < TreeProps.size(); i++)
	{
		FVector Loc = FVector(TreeProps[i].positionX, TreeProps[i].positionY, TreeProps[i].positionZ);
		FRotator Rot = FRotator(0, 0, 0);
		FVector Scl = FVector((TreeProps[i].canopyRadius / 1000),
			(TreeProps[i].canopyRadius / 1000), (TreeProps[i].height / 1000));
		FTransform Tra = FTransform(Rot, Loc, Scl);
		Trees->AddInstance(Tra, true);
	}
}

// Called every frame
void AATreeSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

