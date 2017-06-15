// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Actor.h"
#include "PuzzleBlock.generated.h"

/** A block that can be clicked */
UCLASS(minimalapi)
class APuzzleBlock : public AActor
{
	GENERATED_UCLASS_BODY()

	/** Dummy root component */
	UPROPERTY(Category=Block, VisibleDefaultsOnly, BlueprintReadOnly)
	TSubobjectPtr<class USceneComponent> DummyRoot;

	/** StaticMesh component for the clickable block */
	UPROPERTY(Category=Block, VisibleDefaultsOnly, BlueprintReadOnly)
	TSubobjectPtr<class UStaticMeshComponent> BlockMesh;

	/** Are we currently active? */
	bool bIsActive;

	/** Pointer to orange material used on active blocks */
	UPROPERTY()
	class UMaterialInstance* OrangeMaterial;
	
	// ,--------------------------------------------------.
	// |                                                  |
	// | Create BlueMaterial pointer to UMaterialInstance |
	// |                                                  |
	// `--------------------------------------------------'
	UPROPERTY()
	class UMaterialInstance* BlueMaterial;
	// ====================================================

	/** Grid that owns us */
	UPROPERTY()
	class APuzzleBlockGrid* OwningGrid;

	/** Handle the block being clicked */
	UFUNCTION()
	void BlockClicked(UPrimitiveComponent* ClickedComp);

	/** Handle the block being touched  */
	UFUNCTION()
	void OnFingerPressedBlock(ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent);
};



