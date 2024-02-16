// Copyright Epic Games, Inc. All Rights Reserved.

#include "A_ClimbSystemGameMode.h"
#include "A_ClimbSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AA_ClimbSystemGameMode::AA_ClimbSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
