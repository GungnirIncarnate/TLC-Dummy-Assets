#pragma once

#include "VoyageClasses04.h"
#include "VoyageClasses05.generated.h"

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePortalStreamingSourceComponent : public UWorldPartitionStreamingSourceComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RequestIdentifier;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePortalSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyagePortalSubsystemOnPortalSearchCompleted OnPortalSearchCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerAddressPrefix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPlayerAddressOctet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddressOctetCount;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalSubsystemOnDestinationLockChanged OnDestinationLockChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalSubsystemOnDestinationFavoriteChanged OnDestinationFavoriteChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* GlitchMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* GlitchSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyagePortalPersistentState> PortalStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> LastVisitedAddresses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxLastVisitedDestinations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FString> AllocatedAddresses;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePortalTestModule : public UVoyageModuleComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePreset : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PresetType;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePrimaryAssetLabel : public UPrimaryAssetLabel
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageProgressMarkerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UHorizontalBox* HorizontalContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpacer* Spacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MarkerIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor MarkerColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MarkerSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Percent;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageProjectileComponent : public USphereComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCollisionResponseContainer CollisionResponses;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Mass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RicochetPenetrationThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RicochetPenetrationAngleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInWater;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInside;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowPenetration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowRicochet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreSwarm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyagePhysicalMaterial> InsideMaterial;

	UPROPERTY(BlueprintAssignable)
	FVoyageProjectileMovementComponentOnBlockingHit OnBlockingHit;

	UPROPERTY(BlueprintAssignable)
	FVoyageProjectileMovementComponentOnEnterWater OnEnterWater;

	UPROPERTY(BlueprintAssignable)
	FVoyageProjectileMovementComponentOnExitWater OnExitWater;

	UPROPERTY(BlueprintAssignable)
	FVoyageProjectileMovementComponentOnHitSwarm OnHitSwarm;

	UPROPERTY(BlueprintAssignable)
	FVoyageProjectileMovementComponentOnExitPenetration OnExitPenetration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageSwarmHandler* SwarmHandler;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageProperty : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyArray : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageProperty*> properties;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyBool : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Value;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyColor : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyDescription : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Template;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LongName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Tier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ShortDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Quote;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyDistance : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageUnitFormattingArg FormattingArgs;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyEditorWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowBindTypeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePropertyEditorBindType BindType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, TSubclassOf<class UVoyageFocusableWidget>> PropertyWidgetClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> DefaultPropertyWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageBindablePropertyInfo> PropertyBindings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> WhitelistedPropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> BlacklistedPropertyNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFillHeaderSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFillValueSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDesiredHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin ChildPadding;

	UPROPERTY(BlueprintAssignable)
	FVoyagePropertyEditorWidgetOnTargetChanged OnTargetChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyFloat : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyInt : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyInteraceHelper : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyItem : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyMap : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UVoyageProperty*> properties;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyModuleResource : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageUnitFormattingArg FormattingArgs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFormattingIncludesType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTypeAsCategory;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyModuleResourceConversion : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Template;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCustomModuleResourceConversion Conversion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, FText> ResourceTypeTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, FText> ResourceTypeUnits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageUnitFormattingArg FormattingArgs;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyModuleResources : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyagePropertyModuleResource*> properties;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyObject : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* Object;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyPortalAddress : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocation* Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Address;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KnownOctets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIncludeName;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyResourceColors : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, FLinearColor> Colors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyText : public UVoyageProperty
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuest : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UVoyageProperty*> properties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuestLogic*> QuestLogics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestType QuestType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> QuestLongDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FVoyageQuestStatus, FText> StatusTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSetTrackingOnStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanAbandon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanShowInHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoAccept;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoCompleteWhenDone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlueprintLogicInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestRequirements Requirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuest*> Prerequisite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuest*> FollowUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<uint8, FVoyageQuestTask> Tasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestTask> TasksArray;

	UPROPERTY(EditAnywhere)
	TMap<UVoyageItem*, uint32> Rewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestLocationReward> RewardLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestLocatorReward> RewardLocators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RewardExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RewardEnhancerPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageExperienceType RewardExpType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuestLogic*> OnStartCustomLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuestLogic*> OnEndCustomLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuestLogic* OnFailedCustomLogic;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageQuestComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLimitInteractionWhileActiveQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuest*> Quests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestObjective> ObjectiveOf;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuest*> HandIn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestEvent : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestItemWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageQuestTaskWidget> TaskWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeNameByStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeDescriptionByStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowLongDescriptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowStatusTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAudioText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxNameLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDescriptionLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WrapTextAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FVoyageQuestType, UTexture2D*> QuestTypeImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FVoyageQuestStatus, UTexture2D*> QuestStatusImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FVoyageQuestStatus, FLinearColor> QuestStatusImageTint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestStatus> QuestStatusVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* TypeImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* StatusImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LongDescriptionTB0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LongDescriptionTB1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LongDescriptionTB2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LongDescriptionTB3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* QuestStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* RewardRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RewardExpTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RewardEnhancerPointsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RewardItemsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RewardSkillsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AudioTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* TaskRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* DescRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* TrackedRootWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestListWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageQuestItemWidget> ItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* RootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScrollBox* RootScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyTrackedQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowQuestStatusTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowLongDescriptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAudioText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverrideMaxNameLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverrideMaxDescriptionLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WrapContextTextAt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PrimaryActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SecondaryActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestStatus> Whitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoSetListOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestType> QuestTypeWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestType> QuestTypeBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestActionType> QuestActionWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTrackQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MaxDesiredListSize;

	UPROPERTY(BlueprintAssignable)
	FVoyageQuestListWidgetOnQuestListChanged OnQuestListChanged;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageQuestLocatorComponent : public UVoyageLocatorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* Quest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 TaskIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowForAllTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCompleteTasksWhenVisited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* DepartureQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DepartureQuestTaskIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestLogic : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFinishOnSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TaskIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuestLogic* ParentLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuestLogic*> ChildLogics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWorld* OwningWorld;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageQuestModuleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 TaskIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCompleteAllTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* Quest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleQuestCondition Condition;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageQuestObjectOnQuestStateChanged OnQuestStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageQuest> Quest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AVoyagePlayerController> QuestOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UVoyageQuestLogic*> BlueprintLogicInstances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageQuestLogic*> DuplicatedLogicInstances;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageQuestActorReferences> BlueprintLogicActorReferences;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageQuestStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuest*> TrackedQuests;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageQuestSubsystemQuestStateChanged QuestStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageQuestSubsystemQuestAdded QuestAdded;

	UPROPERTY(BlueprintAssignable)
	FVoyageQuestSubsystemQuestRemoved QuestRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageQuestSubsystemQuestTrackingChanged QuestTrackingChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageQuestSubsystemOnQuestEvent OnQuestEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, UVoyageQuest*> Quests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, UVoyageQuestObject*> QuestObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, UVoyageQuestObject*> PendingAddQuestObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, UVoyageQuestObject*> PendingRemoveQuestObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, bool> QuestTracking;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestTaskWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MainTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CompleteIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* IconSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeMainText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeStatusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor MainColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor StatusColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CompletedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IncompleteIconIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CompleteIconIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestViewWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* QuestListRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* EmptyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuestListWidget*> CachedQuestLists;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRecyclerFactory : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRegionData : public UVoyageLocatorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RegionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageWorldState RegionData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageResourceGridVisualizerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* TargetModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGridNodeVisualInfo> GraphNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGridConnectionVisualInfo> ActiveConnections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGridSignalLinkVisualInfo> ActiveSignalLinks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGridModuleGroupVisualInfo> ActiveModuleGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGridResourceSummaryInfo> ResourceSummaries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IdealNodeDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GraphDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowModuleGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModuleGroupHubSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WorldToUIScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MetricsUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LayoutSubsteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LayoutSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LayoutConvergeTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LayoutCooldownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LayoutSettleSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LayoutSettleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseModuleManagementWidget> DefaultManagementWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseModuleManagementWidget> DefaultSwitchManagementWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageResourceSummaryWidget> ResourceSummaryWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush FlowIndicatorBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ResourceSummaryContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CenterPointer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageGridCablePainter* CablePainter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCanvasPanel* NodeCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinZoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxZoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PanSpeedController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GamepadZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SelectInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, UVoyageResourceSummaryWidget*> SpawnedSummaryWidgets;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageResourceSummaryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageResourcesUtils : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRichTextBlock : public URichTextBlock
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputPlatformType OverridePlatform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputPlatformType, TSubclassOf<class URichTextBlockDecorator>> InputIconDecorators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FontScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* DefaultStyleSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObject*> SourceObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText OriginalText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRocketConsoleWidget : public UVoyageModuleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* MainSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* PreFlightStateContainerPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* FlightStateContainerPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* PostFlightStateContainerPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* ActionBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* CheatBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* CheatLaunchBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* CheatRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* NoTargetOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleSystemHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleSystemValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleFuelHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleFuelValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleCargoHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleCargoValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleEntryHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleEntryValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleConnectionHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* VehicleConnectionValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FlightRemainingTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CountdownTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* FlightHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* FlightValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PostFlightHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PostFlightValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* WeatherHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* WeatherValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* CapsuleHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* CapsuleValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageRocketStateWidget> StateWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> SpacerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageRocketState> BlacklistedRocketStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageRocketState> CheatRocketStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CheatInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CheatLaunchedInputType;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRocketReward : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PodRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageRocketRewardComparison PodRequirementSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LevelRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageRocketRewardComparison LevelRequirementSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QualityMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables LootItemTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItems LootItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemMemoryTrait*> TraitRequirements;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageRocketStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageRocketState> states;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageRocketState> RequiredLaunchStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageRocketState, UVoyageRocketStateProgressLogic*> StateLogics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CountdownDuration;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnStateProgressChanged OnStateProgressChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnStateProgressInit OnStateProgressInit;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnLaunched OnLaunched;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnLanded OnLanded;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnLanding OnLanding;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnCatching OnCatching;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnResetState OnResetState;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnRequestLaunch OnRequestLaunch;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnRequestLaunchSequence OnRequestLaunchSequence;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnAbortLaunchSequence OnAbortLaunchSequence;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnCountdownChanged OnCountdownChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnCountdownSecondChanged OnCountdownSecondChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageRocketStateComponentOnFlightRemainingChanged OnFlightRemainingChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageRocketState, FVoyageRocketStateResult> StateResults;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageRocketState> KeepStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlightTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CountdownRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlightRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ApproachTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CatchTime;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRocketStateProgressLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageRocketStateWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* BackgroundBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LineTB_00;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LineTB_01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LineTB_02;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LineTB_03;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* LinesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* ProgressIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* CompletedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* WaitingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CompletedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InProgressColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor WaitingColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CompletedTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InProgressTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor WaitingTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CompletedIconColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InProgressIconColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor WaitingIconColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeBackgroundBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bColorizeIcon;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageRotatingMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator RotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PivotTranslation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bRotationInLocalSpace;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageRotatingSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OnStartParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OnStopParamName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpeedParamName;

	UPROPERTY(BlueprintAssignable)
	FVoyageRotatingSceneComponentEventOnStart EventOnStart;

	UPROPERTY(BlueprintAssignable)
	FVoyageRotatingSceneComponentEventOnStop EventOnStop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UPrimitiveComponent*> ChildPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* AudioComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSampleDataAsset : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SampleId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSampleType SampleType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UncollectedHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UncollectedDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SentDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> UncollectedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> CollectedIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItem*> RewardItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables RewardLootTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RequiredCommittee;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSampleDataComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSampleDataAsset* SampleDataAsset;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSampleDataContainerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* EmptyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EmptyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* FilterLB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ContainerInfoOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* CapacityProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ContainerInfoTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSampleDataWidget> SampleDataWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSampleFilterType, FText> SampleFilterTypeTextMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSampleFilterType DefaultFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType FilterNavigationInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLazyLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeaderValueText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowEmptyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnlyVisibleWhenCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EmptyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour LeftMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour RightMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour PrimaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour SecondaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowCollectedStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSentStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageDataAssetComponent> SourceComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSampleDataWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* IdTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* CollectedStatusSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* SentStatusSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumIntegralDigits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CollectedHeaderColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor UncollectedHeaderColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowCollectedStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSentStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSampleDataAsset* SampleDataAsset;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlatformUserIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FGameProgress> GameProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GameBuildCreated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoygeSaveGameGameType GameBuildCreatedGameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoygeSaveGameBuildType GameBuildCreatedBuildType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GameBuildLastUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageModPakRecord> ModPakHistory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayedWithUE4SS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UE4SSFirstSeenBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UE4SSLastSeenBuild;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime UE4SSLastSeenUtc;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveGameBlob : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SlotName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlatformUserIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageDataBlobData> BlobData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveGameSlotsWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EmptyOverlayText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBackup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoSave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyLocalSaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequireValidUserToActivate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowEmptyOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBlockInvalidSaves;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* EmptyOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EmptyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageSaveGameSlotWidget> SlotWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility EmptySlotVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility UsedSlotVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseAllSlotOccupiedVisiblity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility AllSlotsOccupiedVisibility;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveGameWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageGameProgressWidget* PlayerStateGameProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageGameProgressWidget* SaveGameProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LastTravelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SaveGameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* UpdateBtn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveIndicatorWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAutoSave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInitialSave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* InitialSaveSuccessSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* SaveSuccessSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* AutoSaveSuccessSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* SaveFailureSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UThrobber* AutoSaveThrobber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* RootWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* SuccessAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* FailureAnim;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScanLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageScanVisualizationComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFloatingTextWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideWidgetSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OverrideWidgetSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetPivot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExpirationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* WidgetComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScanWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ScanOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* PendingOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MainText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* PendingProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ScanProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PendingProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ScanProgressTB;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageScannableComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScheduledActionLogic : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWorld* WorldContext;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenActorInventoryWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InventoryID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ItemSize;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenConverterDetailsItemWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ItemAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* ProgressContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProgressText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenConverterQueueWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* RemoveQueueItemDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageConverterItemInProgressWidget> QueueItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageConverterItemInProgressWidget* ConverterInProgressItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* InProgressOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScrollBox* ScrollContainer;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenItemDetailsWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageRichTextBlock* DescriptionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ConverterTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ModuleResourcesArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ResourcesArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryItemToolTipWidget* ItemToolTipWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> ResourceWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseUserWidget> ModuleResourceWidgetClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenNotificationWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenTitleWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* TitleIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UHorizontalBox* HorizontalContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor TextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor IconColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIconRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScrollBox : public UScrollBox
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoScroll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoScrollInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoScrollSpeed;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSecurityCameraRootComponent : public UVoyageOctreeSceneComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSeedFruitInfo : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* FruitItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> GrowingConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldDropWhenGrown;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageSelectionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoUpdateStaticMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAcceptCursorSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDetectCursorOver;

	UPROPERTY(BlueprintAssignable)
	FVoyageSelectionComponentOnSelectionChanged OnSelectionChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageSelectionComponentOnHoveredChanged OnHoveredChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsHovered;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSignalBusTestModule : public UVoyageModuleComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSignalBusTestReceiver : public UActorComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSignalKeyRegistry : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSignalKeyInfo> Keys;
};
