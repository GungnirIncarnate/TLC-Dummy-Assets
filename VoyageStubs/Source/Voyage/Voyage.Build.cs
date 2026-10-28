using UnrealBuildTool;

public class Voyage : ModuleRules
{
	public Voyage(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bUseUnity = false;
		PublicDependencyModuleNames.AddRange(new string[] { "AIModule", "AdvancedWidgets", "AudioGameplay", "AudioGameplayVolume", "AudioSynesthesia", "Chaos", "Core", "CoreUObject", "DeveloperSettings", "Engine", "EnhancedInput", "GameplayStateTreeModule", "GameplayTags", "Gauntlet", "GeometryCollectionEngine", "InputCore", "LevelSequence", "MediaAssets", "ModularGameplay", "MovieScene", "NavigationSystem", "Niagara", "PhysicsCore", "RHI", "RenderCore", "Slate", "SlateCore", "StateTreeModule", "UMG", "Water", "WebBrowserWidget" });
	}
}
