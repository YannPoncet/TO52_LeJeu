// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "LeJeuGameMode.h"
#include "LeJeuPlayerController.h"
#include "LeJeuCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALeJeuGameMode::ALeJeuGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ALeJeuPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}