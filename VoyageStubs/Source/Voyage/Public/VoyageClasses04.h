#pragma once

#include "VoyageClasses03.h"
#include "VoyageClasses04.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataSelectorAnd : public UVoyageLogDataSelector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageLogDataSelector*> Selectors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataSelectorNot : public UVoyageLogDataSelector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLogDataSelector* Selector;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataSelectorOr : public UVoyageLogDataSelector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageLogDataSelector*> Selectors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogFragment : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMediaSource> Media;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> MediaWave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* WorldContext;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogFragmentUnlockSource : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogFragmentUnlockSourceItemPickup : public UVoyageLogFragmentUnlockSource
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemSerialize Item;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLootItemTable : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageLootItem> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootTableSelector Selector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItems LootItems;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLootSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultInventoryQueryRange;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageMagnetComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MagnetStrength;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMapIconSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageMapIconSubsystemOnIconsChanged OnIconsChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyagePlacedMapIcon> Icons;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageMeltComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeltTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeltDegreeSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanRefreeze;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreezeDegreeSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreezeHysteresis;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSampleAtMeshTip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMeltTipSide TipSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TipPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> SensorOffsets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SensorRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFeltTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IdleSampleInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Melt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SampledTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LastSampleLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeltRate;

	UPROPERTY(BlueprintAssignable)
	FVoyageMeltComponentOnMeltProgress OnMeltProgress;

	UPROPERTY(BlueprintAssignable)
	FVoyageMeltComponentOnMelted OnMelted;

	UPROPERTY(BlueprintAssignable)
	FVoyageMeltComponentOnMeltRateChanged OnMeltRateChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMenuWidgetSoundData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Navigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> NavigationPage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> NavigationActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, TSoftObjectPtr<class USoundBase>> InputActions;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMeshScalarCacheUserData : public UAssetUserData
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMessageListWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageMessageWidget> DefaultMessageSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxMessages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MaxTimeDeltaToGroupMessages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> MessageHorizontalAlign;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> MessageVerticalAlign;

	UPROPERTY(EditAnywhere)
	FUserWidgetPool WidgetPool;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMessageWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MessageHeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MessageHeaderRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BodyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* BodyRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FooterTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* FooterRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MessageImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ExtensionRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDurationToRevealProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFlipProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> ExtensionHorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> ExtensionVerticalAlignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMinimapWidget : public UVoyageLocatorWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CenterPointer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DistanceMarkerTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ZoomFactorTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Dimensions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ClearSelections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ResetViewInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PlaceMarkerInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SelectInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PlaceIconInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CycleIconInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRightClickPlacesIcons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageMinimapIconOption> IconOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPlacedIcons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IconPickPadding;

	UPROPERTY(BlueprintAssignable)
	FVoyageMinimapWidgetOnSelectedIconOptionChanged OnSelectedIconOptionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SafeZonePercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultZoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZoomStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MouseZoomStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLocatorProperties HoldWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHoldLeftMouseForWaypoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoldLeftMouseForWaypointDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D GamepadScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GamepadZoomSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultLinesSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor GridColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor GridTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor PathLineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathLineThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ForwardLineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForwardLineThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UFont* GridTextFont;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridTextFontSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GridTextFontTypeFace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridLineWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IndicatorScale;

	UPROPERTY(BlueprintAssignable)
	FVoyageMinimapWidgetOnMinimapChanged OnMinimapChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageMinimapWidgetOnMinimapInputChanged OnMinimapInputChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageMinimapWidgetOnMinimapMouseChanged OnMinimapMouseChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FogOfWarResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* FogOfWarTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* FogOfWarVisitedBrush;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMiscBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleCheckpoint : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* OverlayWidgetData;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleCheckpointOnGameSaveBegin OnGameSaveBegin;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleCheckpointOnGameSaved OnGameSaved;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleCheckpointOnGameSaveError OnGameSaveError;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleCheckpointOnGameSaveCancel OnGameSaveCancel;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CachedGridID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsMasterModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExcludeFromSharedGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDynamicTickInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowCatchup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequirementsMet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnorePowerOffVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRegisterModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleConfigData* ModuleConfigData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* ItemAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModuleConfigData ConfigData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ModuleName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ModuleGroupName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> AdditionalGroupNames;

	UPROPERTY(EditAnywhere)
	TMap<FName, uint32> SecondaryModuleGroupIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> LeakExcessResources;

	UPROPERTY(EditAnywhere)
	uint32 SnapKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference InternalInventoryCustomTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FOverrideModuleResources OverrideModuleResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FModuleRuntimeRequirements> RuntimeRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleWorkVisualizationConfig WorkloadVisualizationConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleModifierData ModuleModifierData;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnCustomRequirementsChanged OnCustomRequirementsChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleDesiredStateChanged OnModuleDesiredStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleStateChanged OnModuleStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleGroupsChanged OnModuleGroupsChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleValueChanged OnModuleValueChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleCapacityFull OnModuleCapacityFull;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleCapacityEmpty OnModuleCapacityEmpty;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModulePropertyChanged OnModulePropertyChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleRequirementsMetChanged OnModuleRequirementsMetChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleSocketConnectionChanged OnModuleSocketConnectionChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModulePowerStateChanged OnModulePowerStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleDurabilityChanged OnModuleDurabilityChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnWorkloadVisualizationChanged OnWorkloadVisualizationChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnModuleDisableChanged OnModuleDisableChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEffectSubsystem* EffectSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSubsystem* ModuleSubsystem;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleComponentOnSignalInputChanged OnSignalInputChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSignalInputDesc> BlueprintSignalInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAcceptsPowerSignal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOffersReadings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSignalInputDesc> DynamicSignalInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSignalOutputRecord> SignalOutputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UModuleSocketComponent*> Sockets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UInteractiveObjectComponent*> Interactives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageJoinUpdateObject> JoinUpdateObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FModuleCustomRequirement> CustomRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FModuleCustomRequirement> CustomRequirementsPending;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FModuleCustomRequirement> CustomRequirementsPersistent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageItemSerialize> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> Resources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisableTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleState DesiredModuleState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleState ModuleState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WorkloadVisualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModuleDurabilityWorkloadDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EfficiencyModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double LastUpdatedWorldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTickEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bModuleStateUpdatesChildActorMeshes;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UWidget>> ModuleWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleModifierData ModuleModifierDataLast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleModifierData ModuleModifierDataNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDestructibleObjectComponent* DestructibleObjectReference;

	UPROPERTY(EditAnywhere)
	uint64 ModuleAddressCached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModuleAudioShutdownStopDelay;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleConfigData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* PatternData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModuleConfigData ModuleConfigData;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleGenericSwitchCustomToggleFunction : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleInputControlAsset : public UDataAsset
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
	class UInputAction* ExitAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ResetModuleControls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ModuleAction1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETriggerEvent ModuleAction1Trigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ModuleAction2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETriggerEvent ModuleAction2Trigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ModuleAction3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETriggerEvent ModuleAction3Trigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ModuleAction4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETriggerEvent ModuleAction4Trigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraZoomRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraMaxDistance;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleInputControlsComponent : public UVoyageInputControlsComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleInputControlAsset* InputAsset;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleSocketData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> MeshIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> MeshOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UMaterialInterface*> OverrideMaterialsIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UMaterialInterface*> OverrideMaterialsOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundCue> ConnectSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundCue> DisconnectSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundCue> SwitchDirectionSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> SwitchFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> LeakFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeakMultiplier;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageModuleSocketViewComponent : public UModuleSocketComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* Socket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UVoyageModuleSocketData> DataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMultiplyScale;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageModuleSubsystemOnModuleRegistered OnModuleRegistered;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleSubsystemOnModuleUnregistered OnModuleUnregistered;

	UPROPERTY(EditAnywhere)
	TMap<uint32, FResourceGrid> ActiveGrids;

	UPROPERTY(EditAnywhere)
	TSet<uint32> ActiveMultiGrids;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<AActor*, UVoyageModuleComponent*> ActorModuleCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double GlobalTime;

	UPROPERTY(EditAnywhere)
	TMap<uint64, double> ModuleUpdateStamps;

	UPROPERTY(EditAnywhere)
	TMap<uint32, FVoyageModuleGroup> ModuleGroups;

	UPROPERTY(EditAnywhere)
	TMap<uint64, TWeakObjectPtr<UVoyageModuleComponent>> LoadedModules;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UVoyageModuleComponent>> PendingRegistrationActors;

	UPROPERTY(EditAnywhere)
	TMap<uint32, FName> ComponentsModuleGroups;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UModuleSocketComponent>> RegisteredSockets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCatchupTick;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class AActor>, FActorGroups> GroupedActors;

	UPROPERTY(EditAnywhere)
	TMap<uint32, FActorGroups> GroupedActorsReverse;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class AActor>, FVoyageMeshScalarCache> MeshScalarCache;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> CableUpdaters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLinearColor> ResourceColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageModuleComponent*> DirtyModules;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageModuleWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFormattedUnitPercentage;

	UPROPERTY(BlueprintAssignable)
	FVoyageModuleWidgetOnTrackedResourceChanged OnTrackedResourceChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMotionComfortWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreviewMode;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMusicData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* SoundAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BPM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumBeats;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageMusicSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundClass* MusicSoundClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageNPCAnimationNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageNPCAnimationNotifyState : public UAnimNotifyState
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageNPCComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStateTree> StateTree;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> AIControllerData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageNPCData* NPCData;

	UPROPERTY(BlueprintAssignable)
	FVoyageNPCComponentOnModuleValueChanged OnModuleValueChanged;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageNavLinkCustomComponent : public UNavLinkCustomComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageNiagaraDataInterfaceWaterExclusion : public UNiagaraDataInterface
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageObjectFilter : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageObjectFilter_And : public UVoyageObjectFilter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageObjectFilter*> Filters;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageObjectFilter_Not : public UVoyageObjectFilter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageObjectFilter* Filter;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageObjectFilter_Or : public UVoyageObjectFilter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageObjectFilter*> Filters;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOcclusionTraceLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOcclusionTraceRequest : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageOctreeSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OctreeRadius;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOpenPortalAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageOpenPortalAsyncActionOnOpened OnOpened;

	UPROPERTY(BlueprintAssignable)
	FVoyageOpenPortalAsyncActionOnFailed OnFailed;

	UPROPERTY(BlueprintAssignable)
	FVoyageOpenPortalAsyncActionOnCancelled OnCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* WorldContextObject;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOptionsWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin ChildPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UTexture2D*> CultureTextures;

	UPROPERTY(BlueprintAssignable)
	FVoyageOptionsWidgetOnResolutionValueChanged OnResolutionValueChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageOptionsWidgetOnNonResolutionValueChanged OnNonResolutionValueChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageOptionsWidgetOnRequireRestartValueChanged OnRequireRestartValueChanged;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageOutpostDecorationComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Optional;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PathOnly;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOutputInventoryButtonWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* SizeContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* Background;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* Text;

	UPROPERTY(BlueprintAssignable)
	FVoyageOutputInventoryButtonWidgetOnButtonAction OnButtonAction;

	UPROPERTY(BlueprintAssignable)
	FVoyageOutputInventoryButtonWidgetOnButtonInteraction OnButtonInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOutputInventoryMenuWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOutputInventoryWidget* OutputInventory;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOutputInventoryWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EmptyMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTransferToPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTransferByUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ButtonSize;

	UPROPERTY(BlueprintAssignable)
	FVoyageOutputInventoryWidgetOnOutputInventoryItemAction OnOutputInventoryItemAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageBaseInventoryComponent> SourceInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageBaseInventoryComponent> TargetInventory;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOverlayValidator : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageOverlayWidgetData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseUserWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnchorData Anchor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bApplyAspect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideInGameHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideGameStateWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlurStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBackgroundBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowOverrideMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayValidator* OverlayValidator;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePaintInventoryComponent : public UVoyageBaseInventoryComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PaintSetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PaintSetDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyagePaintSlotInfo> PaintSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPreviewCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowSetUnlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumItemsToUnlockSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyagePaintSlotData> OverridePaintMaterials;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageParallelComponentUpdateSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePathFollowingComponent : public UPathFollowingComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyagePathFollowingComponentOnRequestFinishedVoyage OnRequestFinishedVoyage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AcceptRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AcceptRadiusAgentScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUse3DReachTests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StuckDetectionTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StuckProgressTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VelocityApprox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineVelocityApprox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LateralCorrectionMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LookaheadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinLookahead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LateralLeadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CornerBrakingDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CornerBrakingStrength;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePatternSelectionPanelWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageInventoryPatternItem> PatternItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageInventoryPatternItemCategory> PatternItemCategoryClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DefaultItemSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour LeftMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour RightMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour PrimaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour SecondaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* MessagePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MessageHeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MessageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* AddTaskBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTaskListWidget* TaskListWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableCheckBoxWidget* FilterHaveCB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* FilterListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableTextBoxWidget* SearchTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ClearFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseDialogWidget> AddTaskDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTaskList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLazyLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageItemCategory> DefaultItemCategoryFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ClearFiltersInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ToggleHaveCheckboxFilterInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ToggleListboxFilterInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* CurrentSource;

	UPROPERTY(EditAnywhere)
	FUserWidgetPool WidgetPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemCategoryAsset*, FString> AllCategoryAssets;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayload : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayloadActor : public UVoyagePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ActorClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayloadImage : public UVoyagePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Image;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayloadItem : public UVoyagePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> Items;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayloadLocation : public UVoyagePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocation* Location;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayloadSound : public UVoyagePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* Attenuation;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePayloadText : public UVoyagePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePersistentActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint64 PersistentUniqueId;

	UPROPERTY(EditAnywhere)
	uint64 PersistentUniqueIdRuntime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RuntimeGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlwaysPersistTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlwaysPersist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OverrideZoneId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LastStoredZoneId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CurrentRuntimeZoneId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPrimaryAssetId RuntimePrimaryAssetId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> RuntimeActorClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePersistentActorReference : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FPersistentActorIndicator> Indicators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> Resolved;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePersistentRuntimeActorComponent : public UChildActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* ActorTemplate;

	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentRuntimeActorComponentOnRuntimeActorSpawned OnRuntimeActorSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ActorType;

	UPROPERTY(EditAnywhere)
	uint64 SpawnedId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVisibleInEditor;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePersistentSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentSubsystemOnActorSpawned OnActorSpawned;

	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentSubsystemOnActorDestroyed OnActorDestroyed;

	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentSubsystemOnActorRestored OnActorRestored;

	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentSubsystemOnActorUnloaded OnActorUnloaded;

	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentSubsystemOnActorAttached OnActorAttached;

	UPROPERTY(BlueprintAssignable)
	FVoyagePersistentSubsystemOnActorDetached OnActorDetached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class AActor>> PersistentGlobalActorTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FPersistentWorldActorList> PersistentActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPersistentSubsystemList PersistentSubsystems;

	UPROPERTY(EditAnywhere)
	TMap<uint64, TWeakObjectPtr<UVoyagePersistentActorComponent>> CachedPersistentComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FPersistentRuntimeActorList> SpawnedRuntimeActors;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class UVoyagePersistentActorComponent>> RegisteredPersistentComponents;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class UVoyagePersistentActorComponent>> NewRegisteredPersistentComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FName> ActivatedZoneIds;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UPrimitiveComponent>> PendingSimulateComponentsAdded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEffectSubsystem* EffectSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocatorSubsystem* LocatorSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> PendingReplaceActorsReferences;

	UPROPERTY(EditAnywhere)
	TMap<uint64, FVoyagePersistentActorReferences> ReplacedActorReferences;

	UPROPERTY(EditAnywhere)
	TMap<uint64, uint64> ReplacedActorRuntimeIdMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class AActor>, FPersistentWorldActor> PersistentGlobalActorStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSoftObjectPtr<class UDataLayerAsset>, FVoyageDataLayerState> PersistentDataLayerStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class AActor>, AActor*> PersistentGlobalActors;

	UPROPERTY(EditAnywhere)
	TMap<uint64, uint64> UnloadedReplacementActors;

	UPROPERTY(EditAnywhere)
	TMap<uint64, uint64> UnloadedReplacementActorsPendingRemoval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyagePersistentActorReference*, FVoyagePersistentActorReferenceRedirection> ActorRedirections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TransformDirtyThrottleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageMenuFocusArgs> SavedMenuFocus;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePhysicalAudioComponent : public UAudioComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> PrimComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> PrimCompRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VelocityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragEndStopDelay;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePhysicalDoorComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePhysicalInventoryComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageContainedActorData> ContainedActors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePhysicalMaterial : public UPhysicalMaterial
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageImpactEffect ImpactEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileStoppingPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PenetrationThresholdMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionLowPassFilterFrequencyMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionLowPassFilterFrequencyMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionLowPassFilterFrequencyRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionVolumeMultiplierMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionVolumeMultiplierMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionVolumeMultiplierRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFootSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class USoundBase>> FootWalkAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class USoundBase>> FootRunAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class USoundBase>> FootJumpAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class USoundBase>> FootLandAudio;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePhysicalSnapSocket : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePhysicalSnapSocketComponent* Owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RelativeLocation;

	UPROPERTY(BlueprintAssignable)
	FVoyagePhysicalSnapSocketOnConnectionChanged OnConnectionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LinearDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngularDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyagePhysicalSnapSocket> AttachedToSocket;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePhysicalSnapSocketComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyagePhysicalSnapSocket*> Sockets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* SimulatingComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStaticMeshComponent*> MeshComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCreateConstraints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Spacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StrengthOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LinearDampingOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngularDampingOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector OffsetOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SocketTypeOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UVoyagePhysicalSnapSocketData> DataAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCustomRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> AllowedAngles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> Module;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePhysicalSnapSocketData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStaticMesh> mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Strength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LinearDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngularDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MeshOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FString> SocketType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCreateConstraints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> ConnectEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> DisconnectEffect;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePhysicalSnapSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UVoyagePhysicalSnapSocketComponent*> PhysicalSnapSocketComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<AActor*, FComponentContainer> PhysicalSnapSocketComponentsPerActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<AActor*, FConnectionInfo> AttachedActors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePlantBaseData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFoodSeedType SeedType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyagePlantState, FVoyagePlantStateArgument> LifecycleStages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePlantState ProductSpawnState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxWaterStorage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLightStorage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSoilStorage;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePlayerDefaults : public UAssetUserData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EPlayerDefaults, float> DefaultValues;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePoolSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSoftClassPtr<AActor>, FVoyagePoolActorSettings> PoolSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class AActor>, FVoyagePoolActorSettings> ActivePoolSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class AActor>, FVoyagePoolActor> ActorPool;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePortalAddress : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PortalAddress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector WorldCoordinates;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyagePortalComponent : public UVoyageLocatorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStartLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePortalConfig* PortalConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PortalAddress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyagePortalResourceRequirement> ResourceRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class AActor>> PortalListeners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PortalDetectionArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DetectionExtentOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideDetectionTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DetectionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator DetectionRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePortalDestination TargetDestination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ExitComponentTag;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalStateChanged OnPortalStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalFoundResult OnPortalFoundResult;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalClosed OnPortalClosed;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalPowerStateChanged OnPortalPowerStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalClosingWarning OnPortalClosingWarning;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalResourcesLow OnPortalResourcesLow;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalDestinationChanged OnPortalDestinationChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalExtended OnPortalExtended;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalExtendFailed OnPortalExtendFailed;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalNotAvailable OnPortalNotAvailable;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalTeleportFailed OnPortalTeleportFailed;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalEvent OnPortalEvent;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalResourcesChanged OnPortalResourcesChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalTraceBegun OnPortalTraceBegun;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalTraceResultFound OnPortalTraceResultFound;

	UPROPERTY(BlueprintAssignable)
	FVoyagePortalComponentOnPortalTraceCompleted OnPortalTraceCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalState PortalState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalState PendingPortalState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePortalDestination PendingDestination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RemainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpeningWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLoadedCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLoadSuccess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* ExitLocationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOpenCostCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenCostAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FiredWarnings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGrantedTravelExtension;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTransferredToReturnLink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePortalDestination RecallDestination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecallDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecallLinkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRecallLink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDialedLink;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReturnGraceRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReturnGraceDuration;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePortalConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinOpenTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OpenTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShutdownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActiveDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyagePortalClosingWarning> ClosingWarnings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ListenerUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HandshakeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* TravelDistortionMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DistortionIntensityParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistortionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* DistortionCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* TravelEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* TravelExitEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReleaseCablesOnTeleport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreserveEntryRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTeleportVehicles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTeleportNonPlayerPawns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTeleportPhysicsActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalExitPlacement ExitPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRedirectMomentumToExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRelativeMomentum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCarryGrabbedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bActivateArrivalPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOpenFarEndOnConnect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowRecall;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TravellerSweepInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ArrivalCooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PhysicsTransitGraceTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceCheckInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBlockOpenWhileUnresolved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LowResourceWarningSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRefundOpenCostOnFailure;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCloseWhenLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRefundOpenCostOnCancel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinOpenDurationScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExtendDurationScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoExtend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoExtendSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bScaleExtendCostByTimeGained;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReturnLinkGraceTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReturnLinkTransferSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTrace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceHopInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TraceMaxHops;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TraceMaxResults;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePortalResourceCost : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequireModuleLive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double SustainAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ConsoleAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double OpenCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MinOpenCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ExtendCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ScanCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double RunningCostPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double IdleCostPerSecond;
};
