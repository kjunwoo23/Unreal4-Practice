// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ComboBoxString.h"
#include "MyComboBox.generated.h"

/**
 * 
 */
UCLASS()
class MYTESTPROJECT_API UMyComboBox : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void OnComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType);
};
