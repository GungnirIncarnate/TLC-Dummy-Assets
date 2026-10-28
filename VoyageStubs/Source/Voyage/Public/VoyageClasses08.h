#pragma once

#include "VoyageClasses07.h"
#include "VoyageClasses08.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemAmmo : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Caliber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AVoyageWeaponBallisticBullet> BulletCaseActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> BulletStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> BulletCaseStaticMesh;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemBaseEquipment : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> EquipmentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FEquipmentComponentInfo> EquipmentComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemCable : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType PreferredResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceCategory CableCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AUtilityCable> CableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* ExtenderItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> IntegratedCablePlaceholderMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform IntegratedCablePlaceholderMeshTransform;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemConsumable : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPercentageValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayerSurvivals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NoBenefitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NoRequiredResourcesText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> OnUseSurvivalAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayerResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> OnUsePlayerResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHolsterResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> OnUseHolsterResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUsable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumConsumeWhenUsed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> HolsterActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* UseSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageEquipmentPoseType PoseType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EquipmentOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Stiffness;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemEquipment : public UVoyageItemBaseEquipment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageNamedEquipmentSlots Slot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USkeletalMesh> EquipmentSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowEquipUsage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemLogic*> UseLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowRadialInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemLogic*> InteractLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, int32> SurvivalAttributeMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> PlayerModuleExtraCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* OverrideEquipSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* OverrideUnEquipSound;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemHandEquipment : public UVoyageItemBaseEquipment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageEquipmentPoseType PoseType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EWeaponAttachmentType> AttachmentPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ADSCameraOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Stiffness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSStiffness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageHolsterSlotType DesiredSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform LeftHandIKOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EquipmentOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemLogic* ActionBarUseLogic;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemMaterial : public UVoyageItem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemPart : public UVoyageItem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemSeed : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DecayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpaceRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SoilConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Mass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSeedStage> Stages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MaturedName;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLazarusPredictionWidget : public UVoyageModuleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* MainSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* ProfessionSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* DeviceInventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* PlayerInventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseDetailsWidget* SelectedItemDetailWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ProfessionsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ActionBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* PauseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* BackBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* OpenProfessionBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* OpenFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLazarusProfessionWidget* TrackProfessionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CheatGrowTimerBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CheatGrowSpeedAddBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CheatGrowSpeedResetBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GrowSpeedTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GrowMessageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GrowProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* GrowProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TraitNameRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TraitValueRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PhysicalPropertiesNameRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PhysicalPropertiesValueRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* EstimationRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* NotificationOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* NotificationRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* FilterRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* ProfessionMessageRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GrowStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* CheatControls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* NotificationBlinkAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType OpenFilterDialogInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType OpenProfessionsDialogInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageLazarusFilterDialog> FilterDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageProfessionsDialogWidget> ProfessionsDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NoPODTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GrowTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NoEnoughDataProfessionTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultProfessionTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TrackedProfessionTabIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumTopProfession;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTopProfessionsDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTrackedDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCombineProfessionTraitRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TrackedButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ProfessionsButtonText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageLazarusProfessionWidget> ProfessionWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemMemoryTrait* TrackedProfession;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLazarusInventoryFilterLogic* FilterLogic;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorHudWidget : public UVoyageLocatorWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorIndicatorUnitWidget : public UVoyageLocatorIndicatorWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageUnitStateWidget* UnitStateWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLogDataPlayerWidget* LogDataPlayerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryInput;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogItem : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLogItemType LogItemType;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageLoudspeakerRootComponent : public UVoyageOctreeSceneComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMainMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* TopLeftDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* BuildInfoBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BuildNumberText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* P4Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* LanguageRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ButtonRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* GameDiscordBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* GameXBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* GameTwitchBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UUserWidget* BuildInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UUserWidget* PatchNotesInputWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NicknameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseDialogWidget> CheatDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* PatchNotesData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* FeedbackDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CycleLanguagesInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PatchNotesInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* InvalidSaveGameDialogData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMenuModuleWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleBoilerComponent : public UVoyageCustomModuleComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType WaterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterPerSteam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MethanePerSteam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSteamOutput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WarmupTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteamCondensation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Pressure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteamOutputRate;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleEngineComponent : public UVoyageCustomModuleComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference RefEngineAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageModuleEngineConsumption> Consumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Throttle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* ActorOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* EngineAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> UpdatedConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShutdownStopDelay;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleHeaterComponent : public UVoyageCustomModuleComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiantMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatRetentionTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector HeatSourceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseThermostat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThermostatBand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ThermostatProbeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LocationUpdateThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatDemand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeatPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StoredHeat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageTemperatureSubsystem> TemperatureSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleInfoWidget : public UVoyageModuleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* TabSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleDesiredStateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleStateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleTypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePowerStateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleAddressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleGroupTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePriorityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleDescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleDurabilityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleEfficiencyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceFormattedTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceTypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceAmountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceMaxCapacityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceDeltaTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleProductionTypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleProductionAmountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleResourceConsumptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleTotalResourceAmountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* WorkloadVisualizationTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* WorkloadVisualizationOverrideTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* WorkloadTypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlider* WorkloadOverrideSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MassTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* SwitchBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SwitchBtnTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* RepairBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* DestoryBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* BreakBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* GetRepairReqBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* PayloadBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* AddResourceBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* RemoveResource500Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* RemoveResource100Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* RemoveResource25Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCheckBox* AllResourcesCB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleResourceWidget : public UVoyageModuleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleDescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceFormattedTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceTypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceAmountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceMaxCapacityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModulePrimaryResourceDeltaTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleProductionTypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleProductionAmountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleResourceConsumptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ModuleTotalResourceAmountTB;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleTransistorComponent : public UVoyageCustomModuleComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType SwitchedResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxThroughput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThroughputRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleTransistorGateComponent* Gate;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleTransistorGateComponent : public UVoyageCustomModuleComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ControlResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvert;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGatePowered;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleWidgetComponent : public UVoyageWidgetComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleWidgetConfig WidgetConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTargetCustomModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference TargetModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyWhenHasPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyWhenAllSocketsConnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldBeVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* OwningModule;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageNPCData : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* ActorTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageAggroState, float> Threat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageKillExperienceType KillExperienceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables DismantleItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AVoyageNPCSimpleAIController> ControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageNPCSimpleAIController* ControllerTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAISenseConfig*> SensesConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UAISense> DominantSense;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageNewGameMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* OptionalInputsRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGameSlotsWidget* SaveGameSlotWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGameSlotsWidget* UnknownSaveGameSlotWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* InvalidUserRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseDialogWidget> OverrideSaveGameDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* OverrideDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ImportInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ToggleLocalProfilesInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ImportDialogTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ImportFailureDialogData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOptionDetailWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* DetailsRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ChangedRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMotionComfortWidget* MotionComfortPreview;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOptionsMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageOptions> OptionsClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* DialogConfirm;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOverlayMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCanvasPanel* RootCanvasPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBackgroundBlur* BackgroundBlur;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* BackgroundBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* OverlayWidgetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseUserWidget* CurrentChildWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePaintBarWidget : public UVoyageBaseBarWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SetTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> PreviewCameraActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DesiredFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bConstrainAspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewCameraLocationInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewCameraRotationInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* PreviewCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PreviewedSlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePaintSlotInfo PreviewSlotInfo;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePaintItem : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyagePaintSet> PaintSet;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePaintItemToolTipWidget : public UVoyageToolTipWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SetTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SlotTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* SlotDetailsRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FooterTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NoMatchingSetText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NoMatchingPartText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePlayerWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* EquipmentBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* CentralOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EquipmentTabIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePortalConsoleWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* InactiveSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* PowerSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RepairStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PowerTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* PowerBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RequirementTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AvailableTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceUnitTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ConsoleUnitTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RunningCostTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ResourceProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AddressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* AddressRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LocalAddressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DestinationTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LastVisitedHintTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FavoritesHintTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ConnectionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CountdownTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* GraceRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GraceTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* GraceBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* OverlayRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* OverlayTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* InactiveStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HandshakeStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* OpeningStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ActiveStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ClosingStatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* StateProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* ActivateBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* ExtendBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* RecallBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* ClearBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* EditBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* ConfirmBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* CancelBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* FavoriteBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* FavoriteListBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* LastVisitedListBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* BackspaceBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* SeparatorBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key0Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key1Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key2Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key3Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key4Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key5Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key6Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key7Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key8Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* Key9Btn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* KeypadRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ActiveNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* FavoriteRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* LastVisitedRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* DirectoryRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DirectoryHintTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TraceReadoutTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TraceReadoutRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* TraceOverlayRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TraceTerminalTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TraceTerminalRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScrollBox* TraceTerminalScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* TraceBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* DirectoryListBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* DirectoryFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DirectoryFilterTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AddressSegmentCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSegmentValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AddressSeparator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AddressPlaceholder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AddressEnteredStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AddressActiveStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AddressPendingStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoAdvanceSegments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSlotsWhileTyping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InactiveRootIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EditAddressIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FavoritesIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastVisitedIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DirectoryIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTraceOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceTypeCharactersPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceReadoutInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceOverlayLingerSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TraceTerminalMaxLines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceMetresPerMillisecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TraceBaseLatencyMs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConsoleDeadIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConsoleLiveIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConsoleBrokenIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ConsoleRequirementsIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClearAddressOnEdit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceLevelHighThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceLevelModerateThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceLevelLowThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseResourceLevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideUnavailableActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAdoptPortalDestination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType AddressClearDigitInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType AddressSeparatorInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType DictFindAddressInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType DictFilterInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CancelInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableButtonWidget> DestinationButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestinationFontSize;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePostBenchmarkWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MainRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* ValueRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* GraphicsQualityRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FText> GraphicsQualities;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePreparePlayMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGameDetailsWidget* SaveGameDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* InvalidUserRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGameSlotsWidget* SaveGameSlotWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGameSlotsWidget* BackupSlotsWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* OptionalInputsRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* BackupInputRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType RemoveSlotInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ShowBackupSlotsInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ExportSlotsInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* RemoveSlotDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* SaveGameMissingDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* NoGameProgressFoundDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* GeneralErrorDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* InvalidSaveGameDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* BackupRestoreDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* BackupRestoreFailureDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* BackupRestoreRequirementDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ExportSuccessDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ExportFailureDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* RemoveSlotFailureSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* RemoveSlotBlockedSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* RemoveSlotSuccessSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ExportDialogTitleText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageQuestDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuestItemWidget* QuestItemWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageQuestActionType> QuestActionWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTrackQuest;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSampleDataDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSampleDataWidget* SampleDataWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CollectedTimestampTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SentTimestampTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SentDescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* CollectedStatusSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* SentStatusSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRevealHeaderAfterCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRevealDescriptionAfterCollection;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveGameDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* DetailsRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* LoadSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* PathRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PathTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* PathBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateDelayTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DescTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ErrorTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BackupSaveHeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ImportDialogTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ImportFailureDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UVoyageSaveGame*> LoadedSaveGames;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveGameSlotWidget : public UVoyageFocusableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* IconSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* LastSaveGameRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseMainTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSubTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseIconColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor OccupiedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor EmptyColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor LocalOccupiedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor LocalEmptyColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InvalidSlotColor;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageScannableCableComponent : public UVoyageScannableComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageScreenOverlayWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseUserWidget* ScreenWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* CloseButton;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSkillToolTipWidget : public UVoyageToolTipWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateFontInfo ItemFont;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor ItemFontColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor ItemComponentFontColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RequirementRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ParentRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ParentTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CostTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RequirementTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CustomRequirementTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpacer* ItemsSpacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ItemsRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ItemsPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* VersionTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSpaceDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* CommonHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* CommonValueRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UniqueIdTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BirthdayTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProfessionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LevelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TraitTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PhysicalPropertiesTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MentalPropertiesTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FullnameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AgeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CommitteeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowProfession;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPhysicalProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMentalProperties;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSurvivalGuideDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSurvivalGuidePlayerWidget* SurvivalGuidePlayerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryInput;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalScreenBaseLayerWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseDetailsWidget* DetailsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseTextInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FKey, FText> AllowedKeyInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalAppObject* AppObject;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalScreenLayerWidget : public UVoyageTerminalScreenBaseLayerWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* LineWidgetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* CommandContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalScreenLineWidget* HeaderLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalScreenLineWidget* InputLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalScreenLineWidget* StatusLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTerminalScreenLineWidget> LineWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTerminalScreenLineWidget> CommandWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxNumLines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxCharactersPerLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineProcessDelay;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageTerminalScreenWidget : public UVoyageBaseModuleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalScreenBaseLayerWidget* SystemAppLayerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* AppLayerWidgetContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTerminalScreenBaseLayerWidget> ScreeenLayerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTickOnlyTopAppLayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CloseAppInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasRunningQuestLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequiresPower;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageVaultButtonWidget : public UVoyageFocusableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageVaultInfoLogic* VaultInfoLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ValueColorWithProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ValueColorWithoutProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* ProgressBarRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ValueTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageVaultDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ProgressBarRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProgressValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* DetailsRTB;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageWeaponHolsterComponent : public UVoyageBaseBarComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageHolsterSlotConfig> HolsterSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMontageBlendSettings MontageBlendSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ChangeActiveSlotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* EquipSlotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* UnEquipSlotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ReEquipSlotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HolsterActionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SkeletonSocketTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EquipmentComponentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CurrentAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInactivateOverlayActorWhileInHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EquipmentDuckRayMinTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EquipmentDuckRayReleaseSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EquipmentDuckSweepRadius;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnEquipmentModuleChangedDelegate OnEquipmentModuleChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnActiveHolsterStateChanged OnActiveHolsterStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnActiveHolsterStateValueChanged OnActiveHolsterStateValueChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnActiveHolsterActivationIndexChanged OnActiveHolsterActivationIndexChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnHolsterOverlayChanged OnHolsterOverlayChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnHolsterBallisticWeaponChanged OnHolsterBallisticWeaponChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnHolsterInteract OnHolsterInteract;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnHolsterSlotBind OnHolsterSlotBind;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnHolsterSlotUnBind OnHolsterSlotUnBind;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponHolsterComponentOnHolsterStateValueChanged OnHolsterStateValueChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, AVoyageEquipmentActor*> SlotActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CurrentOverlayState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageHolsterSlotOverride> OverlayStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverlaySlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DuckedSlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PreOverlayIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreBusy;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWeaponHolsterWidget : public UVoyageBaseBarWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* OverlayRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* OverlayImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* OverlayTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* OverlayDetailTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageWelcomeMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HintTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SubTextTB;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageActionBarComponent : public UVoyageBaseBarComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageActionBarWidget : public UVoyageBaseBarWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAdminWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ActorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ModuleOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleWidget* ModuleWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* TabSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> TraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceReach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSweep;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseDialogWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* TitleOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* BodyOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BodyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* BodyRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* CustomOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CustomTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* FooterOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FooterTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDialogType DialogType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoRegisterFocusableButtons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomDialogContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDialogConfirmType ConfirmType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, EVoyageDialogResultType> ConfirmMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UVoyageFocusableWidget>> ExcludeConfirmationWidgetTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDialogInteractType InteractType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableButtonWidget> ButtonClass;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseDialogWidgetOnDialogConfirm OnDialogConfirm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerControllerInputContext;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCartridgeItem : public UVoyageItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCartridgeSystemType SystemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> BoxArt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataAsset* DataAsset;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommonDialogWidget : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IntegerValue;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageContextMenuWidget : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoCloseOnHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> OptionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMessageWhenNoOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMessageContent NoOptionsMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NoMessageSlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageContextMenuDelegateWrapper> Callbacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ContextIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEarlyAccessWidget : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* BoatRelocateBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* PawnRelocateBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* UnlockSkillItemsBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* UnlockScannedItemsBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BoatNotFoundText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BoatUnableToRelocateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BoatRelocatedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CharacterUnableToRelocateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CharacterRelocatedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockSkillTotalItemsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockSkillNoItemsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockSkillFailureText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockScannedItemsTotalText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockScannedItemsNoItemsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnlockScannedItemsFailureText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoatMaxRelocateDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BoatMaxRelocateAttempts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PawnMaxRelocateDistance;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFabricatorFilterDialog : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* CategoryListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableTextBoxWidget* SearchTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableCheckBoxWidget* OnlyAvailableCB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ResetFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ApplyFilterBtn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIconSelector : public UVoyageContextMenuWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> IconWidgetClass;

	UPROPERTY(BlueprintAssignable)
	FVoyageIconSelectorOnIconConfirmation OnIconConfirmation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageIconPaletteData* CurrentIconPaletteData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameBoatWidget : public UVoyageInGameVehicleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* AnchorOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* OnAnchorAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BatteryTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BatteryDeltaTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PetrolTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PetrolDeltaTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInfoConsoleVehicleLocationWidget : public UVoyageInfoConsoleVehicleWidgetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LocationText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInfoConsoleVehicleSpeedWidget : public UVoyageInfoConsoleVehicleWidgetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SpeedTb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialSlider* SpeedRadialSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GearTb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MileageTb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedMaxInMeters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpeedMinimumDigits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMileageShortFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MileageMaxDecimals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMileageUseLargeNumbers;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInfoConsoleVehicleThrottleWidget : public UVoyageInfoConsoleVehicleWidgetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ThrottleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialSlider* ThrottleRadialSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialSlider* ThrottleRadialSliderNegative;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* DirectionImage;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemBallisticEquipment : public UVoyageItemHandEquipment
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemEquipmentAttachment : public UVoyageItemPart
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageEquipmentAttachmenVisualizeType Visualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageEquipmentModifierComponent*> ModifierComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageNamedEquipmentSlots> SlotWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageNamedEquipmentSlots> SlotBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<class UVoyageItemBaseEquipment>> ItemWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<class UVoyageItemBaseEquipment>> ItemBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform LocalTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> LockedFOVs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseADSTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform ADSTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUsePostProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPostProcessSettings PostProcessSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PostProcessWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseAudioEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, float> AudioEffectProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageNamedEquipmentSlots AttachmentSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemSelector : public UVoyageContextMenuWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ConfirmInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemSelectorAction* ItemSelectorAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryItem* EmptySlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* MouseControlsOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageInventoryVisibilityLogic*> VisibilityLogics;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemWeaponAttachment : public UVoyageItemEquipmentAttachment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EWeaponAttachmentType> WeaponAttachmentPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ADSCameraOffset;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemWeaponMagazine : public UVoyageItemWeaponAttachment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxRounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Caliber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> EmptyStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> FullStaticMesh;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLazarusFilterDialog : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* ItemListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* TraitListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ApplyFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ResetFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageItemCategory> ItemCategoryFilters;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleLevelSensorComponent : public UVoyageModuleTransistorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSensorActive;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleLogicGateComponent : public UVoyageModuleTransistorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLogicGateOperation Operation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleTransistorGateComponent* InputA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleTransistorGateComponent* InputB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOptions : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VideoConfirmationTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* BackBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ApplyBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* RevertBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* DefaultsBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTabControlWidget* TabControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* WidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* InputKeyRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RestartRequiredRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOptionDetailWidget* OptionDetailsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* DiscardChangedData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* RevertDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* SetDefaultDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* VideoChangesDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ResetDefaultInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType RevertInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ApplyInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ResetValueInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequireRestart;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePatchnotesDialogWidget : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UpdateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UpdateBodyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FeaturesTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BugFixesTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* OtherTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePostProcessDialog : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyagePostProcessDialogOnPostProcessValueChangedDelegate OnPostProcessValueChangedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* BackBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ResetAllBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ResetCurrentBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* ColorGradingLUTListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ResetValueInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ResetAllValueInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyagePostProcessLUT> LUTs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PresetTextLUT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PresetTextCustom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LUTNoneText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPostProcessSettings PostProcessSettings;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageProfessionsDialogWidget : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CheatBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* TrackBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType TrackInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CheatInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RevealAnimName;
};
