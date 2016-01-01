// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Untitled.h"
#include "UntitledGameMode.h"
#include "UntitledPawn.h"

AUntitledGameMode::AUntitledGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AUntitledPawn::StaticClass();
}
