// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEMultiplayerProjectGameMode.h"
#include "UEMultiplayerProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEMultiplayerProjectGameMode::AUEMultiplayerProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
