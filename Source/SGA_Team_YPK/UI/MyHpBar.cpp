// Fill out your copyright notice in the Description page of Project Settings.


#include "MyHpBar.h"
#include "Components/ProgressBar.h"

void UMyHpBar::SetHpBarvalue(float ratio)
{
	PB_HPBar->SetPercent(ratio);
}
