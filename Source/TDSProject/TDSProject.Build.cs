// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TDSProject : ModuleRules
{
	public TDSProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });

        PublicIncludePaths.AddRange(new string[]
        {
            "TDSProject",
            "TDSProject/Character",
            "TDSProject/FuncLibrary",
            "TDSProject/Game",
        });
    }
}
