// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Considerations/ConsiderationBase.h"
#include "ShopDesireConsideration.generated.h"

/**
 * 
 */
UCLASS()
class AIMALLSIM_API UShopDesireConsideration : public UConsiderationBase
{
	GENERATED_BODY()

	public:
		virtual float Score(const FDecisionContext& Context) override;
	
};
