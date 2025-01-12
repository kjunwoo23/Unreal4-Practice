// Fill out your copyright notice in the Description page of Project Settings.


#include "MyComboBox.h"

void UMyComboBox::OnComboBoxSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	UE_LOG(LogTemp, Warning, TEXT("%s"), *SelectedItem);
}

