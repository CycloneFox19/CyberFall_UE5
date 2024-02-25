// Copyright Epic Games, Inc. All Rights Reserved.

#include "CyberFallGameMode.h"
#include "CyberFallCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACyberFallGameMode::ACyberFallGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
