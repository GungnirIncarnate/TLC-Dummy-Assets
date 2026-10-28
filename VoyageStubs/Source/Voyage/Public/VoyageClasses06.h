#pragma once

#include "VoyageClasses05.h"
#include "VoyageClasses06.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSignalSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UVoyageSignalKeyRegistry> KeyRegistry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSignalKeyRegistry* LoadedRegistry;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkill : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSkillUnlock Unlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItem*> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddComponentsToVault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddPartComponentsToVault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageItemCategory> UnlockComponentCategoryFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPrimaryAssetType> UnlockComponentPrimaryAssetFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> SurvivalAttributeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Icon;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkillCustomRequirement : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkillCustomRequirementQuest : public UVoyageSkillCustomRequirement
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* RequiredQuest;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkillTierWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* SkillContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TierTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TierRequirementTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* TierRequirementOL;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkillViewWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSkillUnlockMethod UnlockMethod;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSkillWidget> WidgetSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSkillTierWidget> TierWidgetSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor AvailablePointColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor NoAvailablePointColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* TierWidgetRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SkillPointsTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkillWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstance* DynamicMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* CostOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CostTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSkill* Skill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APlayerController* PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* IconDynamicMaterial;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSpaceInfoEntryWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSpaceInfoWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSpaceInfoEntryWidget> SpaceInfoEntryWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageResultType> WhitelistTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageResultType> BlacklistTypes;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSpawnerSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UVoyageSpawnerVolume*> SpawnerVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSpawnerVolume*> SpawnerVolumesArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, float> SpawnerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWorldSpawnData* WorldSpawnData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageCameraFollowingActor* WorldSpawnDataRootActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSpawnerVolume*> LocalVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageSwarmHandler* SwarmHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentSubsystem* PersistentSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSpawnerVolume : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSpectatorInputControlAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveForwardInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* JumpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InteractInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToggleSpectatorMode;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSpectatorInputControlsComponent : public UVoyageInputControlsComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpectatorInputControlAsset* InputAsset;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSphereComponent : public USphereComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSpringArmComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetArmLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SocketOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProbeSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> ProbeChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bDoCollisionTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bUsePawnControlRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bInheritPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bInheritYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bInheritRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableCameraLag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bEnableCameraRotationLag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bUseCameraLagSubstepping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bDrawDebugLagMarkers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraLagSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraRotationLagSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraLagMaxTimeStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraLagMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bClampToMaxPhysicsDeltaTime;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageStat : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StatId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Binding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageStatAggregationType Aggregation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFeatured;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageStatsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageStatsSubsystemOnStatQueryCompleted OnStatQueryCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRecordAnalyticsFromStats;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageStatsWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFpsAlways;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFrametimesAlways;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesiredUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesiredCVarUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FText> GraphicsQualityToCVar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> FloatCVars;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> IntCVars;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* FpsOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* FrameTimeOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FpsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AverageFpsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FrameGenFpsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FrameTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GameThreadText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GameThreadWaitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* InputLatencyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RenderThreadText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RenderThreadWaitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RenderThreadTotalText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RHIText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GPUFrameTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UpscalingMethodText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UpscalingQualityText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UpscalingResolutionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FrameGenerationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* AdditionalLineRTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageStreamingExtenderSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageStreamingSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSubmixSendSettingsDataAsset : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSubmixSendSettings AudioSubmixSend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagQuery GameplayTagQuery;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSubtitleWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TextBodyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSubtitles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultFontSize;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalAttribute : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSurvivalAttributeType AttributeType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChangePerTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModifiersInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveWhenReachesMinMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalAttributeLogic*> OnAddedLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalAttributeLogic*> OnChangedLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalAttributeLogic*> OnRemovedLogic;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalAttributeLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSurvivalComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGenerateDeathEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGenerateAttributeEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNotifyOwnerWhenAdded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNotifyOwnerWhenChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNotifyOwnerWhenRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNotifyOwnerWhenModifiersChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageSurvivalComponentOnDeath OnDeath;

	UPROPERTY(BlueprintAssignable)
	FVoyageSurvivalComponentOnAttributeAdded OnAttributeAdded;

	UPROPERTY(BlueprintAssignable)
	FVoyageSurvivalComponentOnAttributeChanged OnAttributeChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageSurvivalComponentOnAttributeRemoved OnAttributeRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageSurvivalComponentOnLinkedAttributeChanged OnLinkedAttributeChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageSurvivalComponentOnAttributesReset OnAttributesReset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageSurvivalAttributeType> DefaultAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> DefaultSurvivalValueAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> DefaultSurvivalMaxAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalAttributeLogic*> OnAttributeAddedLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalAttributeLogic*> OnAttributeChangedLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalAttributeLogic*> OnAttributeRemovedLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalSimulateLogic*> OnSimulateStateLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSurvivalSimulateLogic*> OnSimulateLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageSurvivalAttributeType> SimulationAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, FVoyageSurvivalValue> SurvivalAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageSurvivalValueOverride> SurvivalResourceMaxOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, FVoyageSurvivalResourceModifiers> ResourceModifiers;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalGuide : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SortKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSurvivalGuideArticle> Articles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSurvivalGuidePlayerWidget> PlayerOverrideWidgetClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalGuideItemWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* BackgroundRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInput;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalGuideListWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSurvivalGuideItemWidget> ItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* HeaderRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSurvivalGuideDetailsWidget* SurvivalGuideDetailsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideListItemBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PrevActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType NextActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInput;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalGuidePlayerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSurvivalGuideItemWidget* SurvivalGuideItemWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ArticlePageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* ContentTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MainImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* MainImageSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowItemWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalSimulateLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* IconSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* NameSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* ValueSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* ProgressBarSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ValueProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSurvivalAttributeType DesiredType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor MaxValueColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor MinValueColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBlendColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColorThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideWhenMaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* ImageOverride;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSwarmAttractorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageSwarmTemplate*> StrictSwarmTemplates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<int32> StrictParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> AttractedParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Enabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Multiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseWeaponAbilityAgainst;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSwarmAttractorType, FVoyageSwarmAttractorDamageSettings> AttractorTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageSwarmTemplate*, FVoyageSwarmAttractorSettings> AttractorTypeOverrides;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSwarmTemplate : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSwarmMovement MovementType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSwarmLightReactionMovementType MovementTypeLightReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSwarmTemplateRange Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Restitution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Friction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AggroAttractorMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AggroAttractorMultiplierMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AggroRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSwarmTemplateRange Experience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSwarmTemplateRange Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackAbilityRadiusThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCenterMeshToParticleBottom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float JumpStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackDamageBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackJump;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Threat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThreatSeen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GravityMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GravityMultiplierColliding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnToNearestSurface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanClimb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurfaceStickiness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurfaceStickinessDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClimbStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyInWater;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyOnUnload;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisableModulesOnContact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSleeping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSwarmLightReaction> LightReactions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSwarmTemperatureReaction> TemperatureReactions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageEffectInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageEffectThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamagedEffectThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamagedEffectInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Mass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DuplicationLimitRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DuplicationLimitMaxInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DuplicationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DuplicationMaxGenerations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSwarmTemplate* DuplicationTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DuplicationLightReaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSwarmTemplateRange FlockingRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlockingVelocityConform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSwarmAttractorSettings> AttractorTypesArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSwarmAllegiance Allegiance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AggressiveTowardsAllegiances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECombatDamageType, float> DamageResistances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SoundDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePhysicalMaterial* PhysicalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMaterialInterface> StaticMeshMaterialOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> NiagaraSystemAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator NiagaraSystemAttackRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> SoundAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSwarmTemplate* DeathSpawnTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSwarmTemplateRange DeathSpawnAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMaterialInterface> DeathDecalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> NiagaraSystemDamaged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> NiagaraSystemDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator NiagaraSystemDeathRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> SoundDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAbilityConfig AttackAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables LootItemTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropRate;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTabControlWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTabControlConfig> Tabs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCreateTabWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> TabControlWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ButtonRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WidgetSwitcherName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCycleNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtual;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNotifyChildWidgetsOnTabActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> TabsWithInnerContainers;

	UPROPERTY(BlueprintAssignable)
	FVoyageTabControlWidgetOnActiveTabChanged OnActiveTabChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTaskEditWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ToDoRemoveBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ToDoAddBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ToDoClearBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ToDoAmountTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTaskItemWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTaskWidget> TaskWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MainTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* StatusTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* TaskRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* TaskIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* ShowInHudRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideInnerComponentsWhenParentAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDecorateCompletedComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CompletedDecorate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDecorateCompletedInnerComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CompletedInnerDecorate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddBreakLineAfterEachInner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InnerSeparator;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTaskListWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTaskItemWidget> ItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScrollBox* RootScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* EmptyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EmptyHeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EmptyBodyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAllTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInnerComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTrackingText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowEmptyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType IncreaseNavigationInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType DecreaseNavigationInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageTaskActivationType ActivationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MaxDesiredListSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInHudIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EmptyTextHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EmptyTextBody;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlingment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTaskWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MainTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MainIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* DetailRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* DetailOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ComponentDataRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTaskItemWidget> ItemWidgetClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTeleportAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageTeleportAsyncActionOnTeleported OnTeleported;

	UPROPERTY(BlueprintAssignable)
	FVoyageTeleportAsyncActionOnFailed OnFailed;

	UPROPERTY(BlueprintAssignable)
	FVoyageTeleportAsyncActionOnCancelled OnCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* WorldContextObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageWorldStreamingLoader* Loader;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTemperatureSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMaterialParameterCollection> VolumeParameterCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTextureRenderTargetVolume> TemperatureVolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTextureRenderTargetVolume> TemperatureCoarseVolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTextureRenderTargetVolume> WaterExclusionVolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTextureRenderTargetVolume> WaterExclusionCoarseVolumeTexture;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTemperatureSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialParameterCollection* VolumeParameterCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* VolumeTextureAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* CoarseVolumeTextureAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* WaterExclusionVolumeTextureAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* WaterExclusionCoarseVolumeTextureAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* PostProcessMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* FrostDecalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> SavedField;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeatherSubsystem* WeatherSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEffectSubsystem* EffectSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocatorSubsystem* LocatorSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentSubsystem* PersistentSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* VolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* CoarseVolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* WaterExclusionVolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTargetVolume* WaterExclusionCoarseVolumeTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APostProcessVolume* PostProcessVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* PostProcessMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* AppliedPostProcessMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ADecalActor* FrostDecalActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* FrostDecalMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* AppliedFrostDecalMaterial;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalActionDynamicDataObject : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalActionObject : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalAppObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalScreenBaseLayerWidget* LayerWidgetOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalScreenWidget* ScreenWidgetOwner;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalBlueprintFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalCommandData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CommandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalActionObject* Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageTerminalCommand CommandData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalAppObject* StartupApp;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalScreenLineWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* BackgroundBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* ForegroundBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RichStyleFormat;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTimecodeProvider : public USystemTimeTimecodeProvider
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageToolTipWidget : public UUserWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTrackerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputDeviceType, UInputMappingContext*> InputMappingContexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, UInputAction*> NavigationInputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, UInputAction*> NavigationInputActionsGamepad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, FText> GamepadBindTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, FText> GamepadBindTextsPS5;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageUnitConversionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageUnitStateComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseLocator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WidgetVisibilityRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWidgetInScreenSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetScaleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetDrawSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageUnitStateWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocation* LocatorAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLocatorProperties LocatorProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageIndicatorData* LocatorOverrideIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* WidgetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocatorComponent* LocatorComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageUnitStateWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UnitLevelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* AttributesRootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HealthTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* HealthProgressBar;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageVacuumFilterCategoryListWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableCheckBoxWidget> CategoryEntryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* CategoryContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageFocusableCheckBoxWidget*> EntryWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemCategoryAsset*> EntryCategories;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageVaultInfoLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageVaultWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageViewModelSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesiredViewmodelFOV;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageViewportCaptureWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* SceneImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* RTMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* RTMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> SceneClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform ReferenceTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey ViewRotateKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey ViewResetKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey ViewFitKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ViewZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* SceneActor;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageViewportClient : public UGameViewportClient
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWavesPreset : public UVoyagePreset
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageWeakPointComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageDamageResistance Resistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HideTimerAfterDestroyed;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeakPointComponentOnWeakPointDamaged OnWeakPointDamaged;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeakPointComponentOnWeakPointDestroyed OnWeakPointDestroyed;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeaponData : public UVoyageAbilityData
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeaponHolsterInGameSlotWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LeadingDecorativeRichBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultContentTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NoAmmoContentTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OutOfAmmoContentTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ReloadContentTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ReloadingContentTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DesiredPrimaryImageSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DesiredSecondaryImageSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* KeyBindContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* KeyBindInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageHolsterSlotStateConfig DefaultState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageHolsterSlotStateConfig HighlightState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* KeyBindContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* ModeRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PrimaryTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* SecondaryTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* PrimaryImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* SecondaryImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* PrimaryImageSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* SecondaryImageSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* StateSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasHighlight;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeaponHolsterInGameWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EmptyTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SlotTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ToolTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReorderActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* RootSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponHolsterInGameSlotWidget* SlotWidget0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponHolsterInGameSlotWidget* SlotWidget1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponHolsterInGameSlotWidget* SlotWidget2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponHolsterInGameSlotWidget* SlotWidget3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponHolsterInGameSlotWidget* ToolSlot;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeatherPreset : public UVoyagePreset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 WeatherMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageWaveInfo> WaveProperties;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeatherSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageWeatherSubsystemOnVolumeUnregistered OnVolumeUnregistered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* WaterPhysicalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UVoyageWeatherVolume*> WeatherVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTarget2D* FluidRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstance* FluidImpulseMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FluidWorldScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSoftObjectPtr<class UNiagaraSystem>, UNiagaraComponent*> ParticleComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AVoyageHeightCaptureActor> HeightCaptureActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageFluidImpulse> FluidImpulses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSkeletalMeshInfo> SkeletalMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageWorldState CurrentWorldState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ULevelStreamingDynamic* DefaultEnvironment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageWindForce*> WindForces;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEffectSubsystem* EffectSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeatherVolume : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InterpolationRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeatherPreset* WeatherPreset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 WeatherMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageWaveInfo> WaveProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Multiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Modified;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWebBrowserWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageWebBrowserWidgetOnEventResultDelegate OnEventResultDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWebBrowserWidgetOnGameEventDelegate OnGameEventDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* RootSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWebBrowser* WebBrowser;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWebPage* InitialPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UrlNotFoundText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PageNotFoundText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DummyURL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLazyLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EmptyIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 WebPageIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LoadingPageIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInlineJavascripts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, UInputAction*> NavigationInputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputDeviceType, UInputMappingContext*> InputMappingContexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWebPage* CurrentWebPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWebPageJavascriptBind* JsBindObj;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWebPageEventHandler* CurrentEventHandler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, USoundBase*> LoadedEventResultSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, USoundBase*> LoadedGameEventSounds;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWebPage : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWebPageMetaData* MetaData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageWebPageEventHandler> EventHandlerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FText> LocalizationTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, FText> OverrideInputBindText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBindLanguageChangedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCartridgeMusicData MusicData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, TSoftObjectPtr<class USoundBase>> EventResultSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, TSoftObjectPtr<class USoundBase>> GameEventSounds;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWebPageEventHandler : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWebPageJavascriptBind : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageWebPageJavascriptBindOnValueChangedDelegate OnValueChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWebPageJavascriptBindOnStringValueChangedDelegate OnStringValueChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWebPageJavascriptBindOnEventResultDelegate OnEventResultDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWebPageJavascriptBindOnGameEventDelegate OnGameEventDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWebPageJavascriptBindOnPageReadyDelegate OnPageReadyDelegate;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWebPageMetaData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHandleInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSendAnyInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> PersistentKeys;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemapInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, EUINavigationInputType> Rempping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, FText> GamepadBindTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, FText> GamepadBindTextsPS5;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseMaxRangeRenderOptimization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWidgetComponentData* WidgetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWaitReveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseVisibilityRangeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D VisibilityRangeOverride;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWidgetComponentData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EWidgetSpace WidgetSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCollisionQueries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bScaleByDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DistanceScaleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DistanceScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseVisibilityRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D VisibilityRange;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWidgetSoundData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Reveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Hide;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWindForce : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* SimulatingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Area;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForceMultiplierMinimum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ForwardVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ApplyToSimulatingComponentDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Planar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TwoSided;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ApplyToCenterOfMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AppliedForce;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWorldCaptureSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageWorldCaptureSubsystemOnWorldCaptureReady OnWorldCaptureReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBackBufferCapture* BackBufferCapture;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWorldSpawnData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class AActor>> ToSpawnTransientWorldActorClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class AActor>, AActor*> ToSpawnTransientWorldActorTemplates;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoygeBaseEventWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* EventRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EventTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AccumulationThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimationSkipStartTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayTriggerWhenAlreadyShown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* EventAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* EventTriggerAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* EventUpdateTextAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Accumulated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastAccumulationWorldTime;
};
