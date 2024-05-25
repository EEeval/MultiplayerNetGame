// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiPlayerNetGameGameMode.h"
#include "MultiPlayerNetGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiPlayerNetGameGameMode::AMultiPlayerNetGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
