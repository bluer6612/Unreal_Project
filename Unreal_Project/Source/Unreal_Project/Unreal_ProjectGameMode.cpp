// Copyright Epic Games, Inc. All Rights Reserved.

#include "Unreal_ProjectGameMode.h"
#include "Unreal_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnreal_ProjectGameMode::AUnreal_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
