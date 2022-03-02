// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDSProjectGameMode.h"
#include "TDSProjectPlayerController.h"
#include "../Character/TDSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATDSProjectGameMode::ATDSProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATDSProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/Character/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}