// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class A_ClimbSystem : ModuleRules
{
	public A_ClimbSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
