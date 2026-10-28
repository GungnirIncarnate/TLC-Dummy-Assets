#pragma once

#include "VoyageClasses01.h"
#include "VoyageClasses02.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCharacterData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterModifierData MovementModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WirelessCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCarriedWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CarriedMovementMinPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CarriedMovementMaxPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CarriedMovementMaxReductionPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* PressureCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> PressureResourceChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> PressureSurvivalChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPressureSurvivalPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdMovementStartTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdMovementFullTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdMovementMinMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdDamageStartTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdDamageFullTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdDamagePerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> LowBatterySurvivalChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LowHealthWarningThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageCharacterWarning, float> WarningConsumptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageCharacterWarning, FCharacterModifierData> WarningModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageCharacterWarning, USoundBase*> WarningSoundsAdd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageCharacterWarning, USoundBase*> WarningSoundsRemove;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCharacterInfoWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowVitality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBattery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPowerConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowExtraWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowCurrentWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMaxWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMaxWeightPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMobility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* VitalityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BatteryTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PowerConsumptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ExtraWeightTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ExtraWeightProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MobilityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TemperatureTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCharacterInputControlAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveForwardInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveBackwarddInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveLeftInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* TurnInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CameraReset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* JumpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SprintInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CrouchInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CameraInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InteractInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InteractTwoInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterBar0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterBar1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterBar2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterBar3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBar7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBarNext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ActionBarPrev;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* DropAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterNextAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HolsterPrevAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* UnHolsterAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* KickAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrowAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ADSAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InspectAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CassettePlayAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CassetteStopAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CassettePauseAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CassetteForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CassetteBackwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CassetteMuteAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStrafe;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraZoomRate;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCharacterInventoryWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* IconPanelWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* WeightTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPercentage;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bCanClimb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxClimbSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxMovementBaseVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LadderSlideSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 bCanSprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxWalkSprintSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSwimSprintSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxClimbSprintSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumMassForBasedMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumMassForBasedRotation;

	UPROPERTY(BlueprintAssignable)
	FVoyageCharacterMovementComponentOnWeightMovementMultiplierChanged OnWeightMovementMultiplierChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCheatManager : public UCheatManager
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCheatWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanel;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCollisionInfoUserData : public UAssetUserData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> CollisionObjectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCollisionResponseContainer CollisionResponseContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool GenerateOverlapEvents;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageColorWheel : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageColorWheelOnColorChanged OnColorChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InitialColor;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCombatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCombatSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageCombatSubsystemOnDamageTakenEvent OnDamageTakenEvent;

	UPROPERTY(BlueprintAssignable)
	FVoyageCombatSubsystemOnKillEvent OnKillEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DamageOverlapProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FAttackInfo> AttackInfos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAttackImpulse> AttackImpulses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int64, FVoyageFrameAttacks> RegisteredAttacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageDurationAttacks> RegisteredDurationAttacks;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class APawn>> RegisteredPawns;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommanderOptionAction : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommanderOptionData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CommandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCommanderOptionAction* Action;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UUserWidget* DisplayWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageCommanderOptionData*> SubCommands;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommitteeAction : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommitteePackageHandler : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommitteeWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageCommitteeWidgetEntryWidget> CommitteeEntryWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCommitteeDetailsWidget* CommitteeDetailsWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCompassWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseControllerDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseDynamicIndicatorIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CompassImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CompassAngleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* IndicatorWidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* CompassMaterial;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageConditionLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageConnectedSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled;

	UPROPERTY(BlueprintAssignable)
	FVoyageConnectedSubsystemOnWebSocketStatusChanged OnWebSocketStatusChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageConnectedSubsystemOnEventInit OnEventInit;

	UPROPERTY(BlueprintAssignable)
	FVoyageConnectedSubsystemOnEventStatusChanged OnEventStatusChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageConnectedSubsystemOnEventEnded OnEventEnded;

	UPROPERTY(BlueprintAssignable)
	FVoyageConnectedSubsystemOnAccessTokenChanged OnAccessTokenChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageContextMenuAction : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageControllerInputControlAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Release;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PauseMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* AdminMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PlayerMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ReportMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToggleInterface;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToolsMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* EquipmentMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* BuildMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* TrackingMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SkillsMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* EnhancersMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToggleSpecator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UVoyageOverlayWidgetData*> OverlayWidgetBinding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, int32> OverlayWidgetPriorites;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageControllerInputOverlayData> OverlayBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AVoyageSpectatorPawn> SpectatorPawnClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCraftingLocationGenerator : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AController* MyInstigator;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCreditsBlockWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* HeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* BodyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* BottomImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScaleBox* BottomImageScaleBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* BottomImageSB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCreditsBodyWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageCreditsBlockWidget> CreditsBlockClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* BodyRoot;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCrosshairWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MainImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ScanRootOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ScanTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ScanHeaderTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ScanFooterTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ScanTextOL;

	UPROPERTY(BlueprintAssignable)
	FVoyageCrosshairWidgetOnCrosshairChanged OnCrosshairChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageActionType, FName> ActionAnimationMap;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCrosshairWidgetData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* MainImage;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDamageResistanceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageDamageResistance Resistance;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDamageType : public UDamageType
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECombatDamageType DamageType;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDataAssetComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDataAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDuplicates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBaseDataAsset*> DefaultDataAssets;

	UPROPERTY(BlueprintAssignable)
	FVoyageDataAssetComponentOnDataAssetAdded OnDataAssetAdded;

	UPROPERTY(BlueprintAssignable)
	FVoyageDataAssetComponentOnDataAssetRemoved OnDataAssetRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowEditingDataAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBaseDataAsset*> DataAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDefaultsAdded;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDecalComponent : public UDecalComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDestructibleObjectComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AController* LastHitBy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDestructible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtraDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageDestructibleObjectProperties DestructibleObjectProperties;

	UPROPERTY(BlueprintAssignable)
	FVoyageDestructibleObjectComponentOnDestructed OnDestructed;

	UPROPERTY(BlueprintAssignable)
	FVoyageDestructibleObjectComponentOnTakeDamage OnTakeDamage;

	UPROPERTY(BlueprintAssignable)
	FVoyageDestructibleObjectComponentOnHealthChanged OnHealthChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageDamageResistanceComponent*> ResistanceComponents;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDialogWidgetData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageCommonDialogWidget> DialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Footer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageDialogConfirmConfig> ConfirmOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultCursorIndex;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDoorSensorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* SensorBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOpenOnEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCloseOnLeave;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDrawingSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* LineManagerActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* BaseCylinderMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> MaterialToISMC;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDummyTerminalLineWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LineTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* CursorRoot;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDummyTerminalWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageDummyTerminalData> Lines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitialDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineBreakDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterTypeDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineBreakHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumCharsPerTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageDummyTerminalLineWidget> LineSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* LineBreakSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* CharacterTypeSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* BufferRoot;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDurabilityIndicatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* DamageSeveritySystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* DamageSeverityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* DamagePointsCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamagePointsMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoBind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<ECollisionChannel>> TraceChannels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<ECollisionChannel>> IncludeCollisionObjectTypes;

	UPROPERTY(BlueprintAssignable)
	FVoyageDurabilityIndicatorComponentOnDurabilityChanged OnDurabilityChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageDurabilityIndicatorComponentOnDamageUpdated OnDamageUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageDurabilityIndicatorDamagePoint> DamagePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurabilityLast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageSeverityLast;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDynamicCollisionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoWeld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoweldIgnoreNormal;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageDynamicPlayerInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UEnhancedInputComponent* InputComp;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDynamicPlayerInputWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRegisterFromWidgetOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFilterByActionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerInputInterfaceActionType InputActionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ContextInputActionsRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreferIndicatorWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UInteractIndicator> IndicatorSubClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEditorBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEffectSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageEffectSubsystemOnCameraEnterWaterDelegate OnCameraEnterWaterDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageEffectSubsystemOnCameraExitWaterDelegate OnCameraExitWaterDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageEffectSubsystemOnTagAdded OnTagAdded;

	UPROPERTY(BlueprintAssignable)
	FVoyageEffectSubsystemOnTagRemoved OnTagRemoved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCameraUnderWater;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCameraInVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSubmixSendSettings UnderwaterSubmixSend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* OnCameraEnterWaterAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* OnCameraExitWaterAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* OnCameraEnterWaterEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* OnCameraExitWaterEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialParameterCollection* MaterialParameterCollection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePhysicalMaterial* DefaultPhysicalMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageCableComponent*> CableComponents;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class AActor>, FDynamicCollisionComponentInfo> DynamicCollisionComponents;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class AActor>> DynamicCollisionComponentsAdd;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class AActor>> DynamicCollisionComponentsRemove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> WeldEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> UnweldEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> TemporaryPrimitiveActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> WorldStaticActorClass;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class AActor>, FVoyageContinousSoundInfo> ContinousSounds;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class AVoyageLocationVolume>> LocationVolumesArray;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class AVoyageLocationVolume>> LocationVolumesArrayAdditions;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class AVoyageLocationVolume>> LocationVolumesArrayRemovals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSubmixSendSettingsDataAsset*> SubmixSendDataAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* TemporaryPrimitiveActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageTemporaryPrimitiveInfo> TemporaryPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageTemporaryPrimitiveInfo> TemporaryPrimitivePool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<AActor*, FVoyageOverlayMaterialMap> MeshOverlayMaterials;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class AActor>> AutoweldingActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* WorldStaticActor;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEnhancedInputUserSettings : public UEnhancedInputUserSettings
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEnhancer : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> SurvivalAttributeMaxIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> CharacterModuleResourceMaxIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> CharacterModuleConsumptionOptimization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> CharacterSocketBandwidthBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyagePlayerEnhancerType, float> CharacterResistancesIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InventoryWeightCapacityIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LiftWeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LiftConsumptionMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyagePlayerEnhancerItemActionType, float> ActionTimeMulAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyagePlayerEnhancerItemActionType, float> ActionConsumptionMulAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEnhancerInfoLogic* EnhancerInfoLogic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EquipmentAnimPlayRateAdjustment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEnhancerInfoLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentAbilityData : public UVoyageAbilityData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAbilityDataStruct Data;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentContextContainerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* Container;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageEquipmentInteractComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InteractPartId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawAsDesiredSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector WidgetOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor LineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawShapes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFloatingTextWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* OverlayWidgetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponAttachmentType, TSoftObjectPtr<class UTexture2D>> SlotIcons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, TSoftObjectPtr<UTexture2D>> EmptySlotIcons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSlotIconWhenEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBeginEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideWidgetSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OverrideWidgetSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageEquipmentInteractSourceType SourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseUserWidget* ActiveEquipmentHudWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* WidgetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInteractiveObjectComponent* InteractObjComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* InteractCollisionComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInteractEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ContextIndex;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageEquipmentModifierComponent : public UActorComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentNotifyState_Base : public UAnimNotifyState
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentNotify_Base : public UAnimNotify
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentReleaseFromHand : public UVoyageEquipmentNotify_Base
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentReload : public UVoyageEquipmentNotifyState_Base
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentSerializedObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ActorData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ModuleComponentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageItemSerialize> Attachments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageItemSerialize> Paints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Durability;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageEquipmentWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageExpWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LevelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SecurityLevelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ExpTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LevelCapExpTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ExpProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowLevelCapExp;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageExpansionSlotComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Flags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Optional;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BranchDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PathDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Path;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Used;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageExperienceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageExperienceData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageOwnerExpGainType GainType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageKillExperienceType KillExpType;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageFabricatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FabricateSignalKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CancelSignalKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CancelAllSignalKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FabricatedSignalKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference ModuleComponentReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference InventoryComponentReference;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentStartFabricationDelegate StartFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentPauseFabricationDelegate PauseFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentResumeFabricationDelegate ResumeFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentFinishFabricationDelegate FinishFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentCancelFabricationDelegate CancelFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentQueueFabricationDelegate QueueFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentUpdateQueueFabricationDelegate UpdateQueueFabricationDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentUpdateFabricationProgressDelegate UpdateFabricationProgressDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentInventoryAddedDelegate InventoryAddedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentInventoryRemovedDelegate InventoryRemovedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentPatternsChangedDelegate PatternsChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentInventoriesChangedDelegate InventoriesChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFabricatorComponentQueueChangedDelegate QueueChangedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CraftFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bControlDesiredModuleState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreModuleRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentFabricationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPauseOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPaused;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressTimerRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressTimerMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CraftSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BuildSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CraftConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BuildConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutputDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> CurrentResourcesConsumed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageFabricatorQueueItem> ItemQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> ModuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageBaseInventoryComponent> InventoryComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, UVoyageBaseInventoryComponent*> AvailablePatternsCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItem*> AvailablePatternsInternal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItem*> AvailablePatterns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemCategoryAsset*> ItemCategoryPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowFiltering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowSearching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageItemSerialize> OutputQueue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutputTimer;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UVoyageBaseInventoryComponent>> CurrentVaults;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UVoyageBaseInventoryComponent>> CurrentInventories;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFabricatorFactory : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFabricatorWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CancelInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ClearInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PauseInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType FilterInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleWidgetConfig WidgetConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideDetailWhenNoFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowQueueWithoutAllMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CraftFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBuildable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTasks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* FilterDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ClearQueueDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ClearCurrentDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* CentralOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootAreaSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* FocusSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePatternSelectionPanelWidget* PatternSelectionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageScreenItemDetailsWidget* DetailsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageScreenConverterQueueWidget* QueueDetailsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* DetailsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* QueueSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* QueueContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CancelBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ClearBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CheatBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* PauseBtn;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageFastSceneComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageFastSceneSkeletalComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFloatingTextData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFloatingTextWidget> FloatingWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor TextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DirectionSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRandomOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomOffsetConeMaxYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomOffsetConeMaxPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RandomOffsetConeDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomOffsetSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLifetime;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFloatingTextWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoReveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoHide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MainTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SecondaryTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MainImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* MainAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* RevealAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HideAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HighlightAnim;

	UPROPERTY(BlueprintAssignable)
	FVoyageFloatingTextWidgetOnRevealAnimFinished OnRevealAnimFinished;

	UPROPERTY(BlueprintAssignable)
	FVoyageFloatingTextWidgetOnHideAnimFinished OnHideAnimFinished;

	UPROPERTY(BlueprintAssignable)
	FVoyageFloatingTextWidgetOnMainAnimFinished OnMainAnimFinished;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFluidFoil : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> SimulatingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UBuoyancyComponent> BuoyancyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector UpDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLiftCoefficent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDragCoefficent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LiftCoefficentSlope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragCoefficentSlope;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Area;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bApplyToCenterOfMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDoubleSided;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bQuadraticVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QuadraticReferenceSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseStallModel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StallAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StallBlendAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SeparatedNormalCoefficent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FluidDensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector FluidVelocity;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusWidgetData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInputState InputState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideInGameHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideGameStateWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBlendCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraBlendTimeIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraBlendInExponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> CameraActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform CameraActorRelativeTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EViewTargetBlendFunction> CameraBlendInFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraBlendTimeOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraBlendOutExponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EViewTargetBlendFunction> CameraBlendOutFunction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* FocusInSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* FocusOutSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundSubmix* SoundSubmix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundEffectSubmixPreset* SubmixEffectPreset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* FocusOverlayWidgetData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableCanvasPanel : public UCanvasPanel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin SlotPadding;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableGridPanel : public UGridPanel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin SlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> SlotHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> SlotVerticalAlignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableHorizontalBox : public UHorizontalBox
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin SlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateChildSize SlotSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> SlotHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> SlotVerticalAlignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableRadioButtonEntryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HighlightAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowClick;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableRadioButtonEntryWidgetOnClick OnClick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DisplayTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Index;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHighlight;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableUniformGridPanel : public UUniformGridPanel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDesiredColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData Data;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableVerticalBox : public UVerticalBox
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin SlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateChildSize SlotSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> SlotHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> SlotVerticalAlignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumTriggerProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoBindToOwningMenuWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> MainTextHorizontalAlingment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> MainTextVerticalAlingment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> RootPanelHorizontalAlingment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> RootPanelVerticalAlingment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideHeaderSizeRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideHeaderSizeRuleFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideHeaderSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeaderSizeBoxMinWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HeaderSizeBoxHorizontalAlingment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideValueSizeRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideValueSizeRuleFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideValueSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValueSizeBoxMinWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> ValueSizeBoxHorizontalAlingment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideRootSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WidthOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDesiredWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDesiredHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDesiredWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDesiredHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinAspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideMainFont;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MainFontOverrideSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideMainFontPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin MainFontOverridePadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideMainFontTransformPolicy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETextTransformPolicy MainFontTextTransformPolicy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FocusIdentifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SubText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDrop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnSelect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnTriggerProgressBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReTriggerProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAnchorOverlayContextMenuToMouse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D AnchorOwnerOffet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoFocusAfterContextMenuActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoFocusAfterContextMenuOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoCloseContextMenuWithoutOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFocusableVisibility BuildVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 HideOnPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFocusableUserData UserData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* ActivateAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFocusableAnimData ActivateAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* FocusAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFocusableAnimData FocusAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HoverAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFocusableAnimData HoverAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HighlightAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* SelectAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFocusableAnimData SelectAnimData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> DragVisualClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageToolTipWidget> ToolTipClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDragPivot DragPivot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageContextMenuWidget> ContextMenuClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageContextMenuWidget> OverlayContextMenuClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UVoyageBaseBadgeWidget>> BadgeWidgetClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBadgeHeaders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ContextMenuOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OverlayMenuOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBindToObjectProperty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ObjectPropertyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour LeftMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour RightMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour PrimaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour SecondaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidgetSoundData* FocusableSoundData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* InputContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, FText> InputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanHaveGameVersions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMarkAssociatedDataVersionSeenOnFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMarkAssociatedDataVersionSeenOnHover;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnActivation OnActivation;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnValueChangedDelegate OnValueChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnDragDelegate OnDragDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnDragEnterDelegate OnDragEnterDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnDragLeaveDelegate OnDragLeaveDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnDragOverDelegate OnDragOverDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnDropDelegate OnDropDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnDragCancelledDelegate OnDragCancelledDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnMouseEnterDelegate OnMouseEnterDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnMouseLeaveDelegate OnMouseLeaveDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnHoverDelegate OnHoverDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnShowTooltip OnShowTooltip;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnContextMenuDelegate OnContextMenuDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableWidgetOnContextMenuConfirmDelegate OnContextMenuConfirmDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* HeaderSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* ValueSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MainTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SubTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MainIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MainRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* SubRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* EnabledOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ButtonInfoOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* BadgeContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* TriggerProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* GameVersionRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBaseBadgeWidget*> MyBadgeWidgets;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableWidgetSoundData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Activate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Hover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Drag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> DragOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Drop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> OpenContextMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> ConfirmContextMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Action1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Action2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Action3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> TriggerBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> TriggerTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> TriggerSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> TriggerRelease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> TriggerFailure;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableWrapBox : public UWrapBox
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> SlotHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> SlotVerticalAlignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameEngine : public UGameEngine
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameGlobals : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> LoadingScreenWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MenuMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WorldMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WorldMapDemo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, TSubclassOf<class AActor>> TestActorTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* CommonDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UFont> GameFont;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FPrimaryAssetType> PreloadAssetTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FName> DefaultAssetLoadState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EMenuWidgetType, TSubclassOf<class UVoyageBaseMenuUserWidget>> MenuUserWidgetClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UVoyageItem*> InitialActionBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageLocation*, FVoyageFlags> InitialLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSoundClass, USoundClass*> SoundClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGameProgressConfig GameProgressConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> MenuMusic;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnLicenseStatusChanged OnLicenseStatusChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnPrimaryPlatformTokenChanged OnPrimaryPlatformTokenChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnSettingsChanged OnSettingsChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnStateChanged OnStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnTestStarted OnTestStarted;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnTestEnded OnTestEnded;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameInstanceOnLanguageChanged OnLanguageChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameProgressWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
};
