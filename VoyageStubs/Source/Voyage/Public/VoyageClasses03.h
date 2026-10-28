#pragma once

#include "VoyageClasses02.h"
#include "VoyageClasses03.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameStateSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageGameStateSubsystemOnSaveGameBegin OnSaveGameBegin;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameStateSubsystemOnSaveGameCompleted OnSaveGameCompleted;

	UPROPERTY(BlueprintAssignable)
	FVoyageGameStateSubsystemOnHolidayTypeChanged OnHolidayTypeChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UVoyageBaseUserWidget*> ActiveOverlayWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGame* LastTravelSaveGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSaveGame* LastAutoSaveGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageGameVersion> InitalAssetVersions;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameStateWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ConnectedEventsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ApiEnvText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* WebSocketStateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AccessTokenText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BuildNumberText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* P4Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PlatformTokenText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* QuestListRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMessageListWidget* MainMessageList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMessageListWidget* SecondaryMessageList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMessageListWidget* ThirdMessageList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMessageListWidget* FourthMessageList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QuestInProgressWidgetDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageMessageWidget> QuestInProgressMessagWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCustomGameUserSettings CustomSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFindOptimalHardwareSettings;

	UPROPERTY(EditAnywhere)
	uint32 OptimizedHardwareHash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageUpscalingMethod LastGPUBenchmarkUpscaler;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCustomGameUserSettings LastCustomSettings;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameUtils : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGameplayBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGauntletController : public UGauntletTestController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEndIfErrors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TestParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGauntletTestConfig Config;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalCSVTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasStartedCapturing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bScreenshotTaken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasSpawnedTestPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* TestPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGauntletValues CurrentValue;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGauntletControllerPSO : public UVoyageGauntletController
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGauntletControllerPSOLocators : public UVoyageGauntletController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageGauntletPSOLocatorEntry> Locators;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageWorldStreamingLoader* StreamingLoader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* SpectatorPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* OriginalPawn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGauntletControllerSaveGame : public UVoyageGauntletController
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGauntletControllerValidateSaveGame : public UVoyageGauntletController
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGenericListItemWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor GreenColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor RedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ItemAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SuffixText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGerstnerWaterWaveGenerator : public UGerstnerWaterWaveGeneratorBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WindAnglePrev;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WindAngleNext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WindLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WindLerpDir;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageGridCablePainter : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageResourceGridVisualizerWidget* ParentVisualizer;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHelperFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageHighlightComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBeginHighlighted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoUpdateStaticMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HighlightStencilValue;

	UPROPERTY(BlueprintAssignable)
	FVoyageHighlightComponentOnHighlightChanged OnHighlightChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHighlighted;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHitDamageWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* HitIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* OnDamageAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* OnDirectionalDamageAnim;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHoverAreaWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageHoverAreaWidgetOnHoverBegin OnHoverBegin;

	UPROPERTY(BlueprintAssignable)
	FVoyageHoverAreaWidgetOnHoverEnd OnHoverEnd;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHumanDisplayWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* RootSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* ImageSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* PowerOverlay;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHumanGrowMetadataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AvailableFirstNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AvailableMiddleNameInitials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AvailableLastNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MiddleNameChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MiddleNameInitialChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DoubleMiddleNameChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HyphenatedMiddleNameChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HyphenatedLastNameChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LastNameChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProfessionPrefixChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTrait*, FText> ProfessionPrefixes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageHumanSimulationCommitteeInfo> Committees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageCommitteeAction*> BaseActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CommitteeChance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxNumCommitteePerPerson;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinHoursInSpaceForCommittee;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumFormationInMinutes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageCommitteePackageType, UVoyageCommitteePackageHandler*> CommitteePackageHandlers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCommitteePackageItemExchangeInfo> PackageExchangeFallbackItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PackageExchangeNumFallbackItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D IncubationMonthRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GlobalAgingMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BaseHumanValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AgeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InSpceHumanValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProfessionLevelMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraitMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CommitteeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> DisplayHumanAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> DisplayCommitteDomainNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> DisplayCommitteeFunctionNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> DisplayCommitteeTypeNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> DisplayCommitteeDescriptions;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHumanProperty : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Unit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageHumanPropertyClass PropertyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DiminishingReturnsPow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OptimalAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxBenefitAtOptimalAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDecayAtMaxAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> ValueAsText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIconPaletteData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class UTexture2D>> IconPalette;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameDynamicLayerAlignmentAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageInGameDynamicLayerAlignment Alignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameDynamicLayerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCanvasPanel* RootPanelWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UPanelWidget*> SlotRootWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UUserWidget*> LayerWidgets;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInGameDynamicLayerWidget* DynamicLayerWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIndicatorData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPinToViewportEdge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPinToEdge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D EdgeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBehind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseWidgetCenterPivot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseDistanceAlpha;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseDistanceScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinFocusScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageLocatorType, UTexture2D*> Icons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* DistanceAlphaCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* DistanceScaleCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Aspect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DefaultTintColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor HighlightTintColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor LineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLineAntiAlias;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> SubWidgetClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInputAction : public UInputAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInputContextAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputDeviceType, UInputMappingContext*> InputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputMappingContext* SwitchGamepadMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputControlContextType ContextType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputControlBindType BindType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InputPriorityOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ShiftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CtrlAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* AltAction;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageInputControlsComponent : public UPawnComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* InputContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ElevatedOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DemotedOffset;

	UPROPERTY(BlueprintAssignable)
	FVoyageInputControlsComponentOnPostAction OnPostAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UEnhancedInputComponent* InputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCustomGameUserSettings CachedGameUserSettings;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInputPlatformConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FKey, UTexture2D*> ButtonImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, UInputAction*> AxisPairs;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInputRemapContainerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableKeyInputWidget> KeyInputWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* InputContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInputAction*> PreviewInputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> WhitelistCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> BlacklistCategories;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInteractiveContextData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGlobalContextAwareConfig ConditionsConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStepContextAwareCondition> Conditions;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInterfaceInputControlAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Any;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Select;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Back;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Next;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Prev;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Right;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Left;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Up;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Down;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MoveRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryMoveUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryMoveRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ScrollAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Special1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Special2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Special3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Special4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Special5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Special6;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Action1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Action2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Action3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* Delete;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D StickAccumulationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StickAccumulationThreshold;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageInterfaceInputControlsComponent : public UVoyageInputControlsComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInterfaceInputControlAsset* InputAsset;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIntroTerminalWidget : public UVoyageDummyTerminalWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* MainRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* ContinueBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayAfter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShaderLineUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin ShaderLineMargin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinShaderBarChars;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxShaderBarChars;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ShaderBarFillCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDummyTerminalLineWidget* ShaderLine;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryDropAreaWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* HighlightRoot;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryDropAreaWidgetOnItemDragEnter OnItemDragEnter;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryDropAreaWidgetOnItemDragLeave OnItemDragLeave;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryDropAreaWidgetOnItemDrop OnItemDrop;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryDropAreaWidgetOnItemDragOver OnItemDragOver;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryDropAreaWidgetOnItemDragCancelled OnItemDragCancelled;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryEntryObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ItemName;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryFilterLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryInfoWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoProgressColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor MaxValueColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor MinValueColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBlendColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColorThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor WhiteColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DarkColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LuminanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* ColorBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProximityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CapacityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProgressPercentageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryItem : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* SizeContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ItemIconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* QualityBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* InvalidBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* SlotBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SlotTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* SubRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* Sub2Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* Sub2TB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* Sub2RTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* DragHighlightRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* DragOverHighlightRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* DragOverHighlightBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* DragAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* FlashAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstance* ItemDynamicMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UTexture2D*> SlotBackgroundTextures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* OverrideItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageItemQuality, FLinearColor> QualityColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DefaultQualityColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSlotBackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSlotText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSlotNameAsText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTextOnlyIfNoTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemData Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InventorySlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ItemIconDynamicMaterial;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryListWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageInventoryEntryObject> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UListView* EntryListView;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryPatternItem : public UVoyageInventoryItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageItemRequirementIndicatorWidget> RequirementsWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* TrackedOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* TrackedChildOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* FabricationCountOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* QueuedCountOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TrackedTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TrackedChildTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FabricationCountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* QueuedCountTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanFabricate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, UVoyageItemRequirementIndicatorWidget*> RequirementWidgets;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryPatternItemCategory : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CategoryTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryUtils : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryVisibilityLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageInventoryWeightLimitedComponent : public UVoyageBaseInventoryComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxWeightLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowBeyondWeightLimit;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWeightLimitedComponentOnInventoryWeightChanged OnInventoryWeightChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWeightLimitedComponentOnInventoryWeightAdded OnInventoryWeightAdded;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWeightLimitedComponentOnInventoryWeightRemoved OnInventoryWeightRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWeightLimitedComponentOnInventoryMaxWeightLimitChanged OnInventoryMaxWeightLimitChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin InnerSlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoSizeRootByColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowExternalInventoryItemDrops;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFilterByPrimaryAssetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> DefaultPrimaryAssetFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageItemCategory> DefaultItemCategoryFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* DefaultItemFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageInventoryItem> InventoryItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItem*> WhitelistFiltersItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItem*> BlacklistFilterItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UVoyageItem>> WhitelistFiltersClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UVoyageItem>> BlacklistFilterClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageInventoryFilterLogic*> FilterLogics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemSelectorAction* ItemActivationAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInventoryBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInventoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowProximity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowControls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideEmptySlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInventoryInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowEmptyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHightlightDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHighlightInternalDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EmptyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor EmptyTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ItemSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseWidgetConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableWidgetConfig ItemWidgetConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility VisibilityWhenEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour LeftMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour RightMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour PrimaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour SecondaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCombineSimilarItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseControlInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType InputChangeFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType InputChangeSort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType InputClearFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor WhiteColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DarkColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LuminanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* InventoryBackgroundRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* InventoryColorBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* InventoryName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* InventoryProximityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* InventoryInfoTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* InventoryNameOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* InventoryControlsOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* WeightProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* InventoryInfoOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryDropAreaWidget* InventoryItemArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* FilterListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableTextBoxWidget* SearchTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* SortListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ClearFilterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* ClearBtnSizeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EmptyTextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* ItemsAreaSB;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryContentChanged OnInventoryContentChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryWidgetActivation OnInventoryWidgetActivation;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryWidgetDrag OnInventoryWidgetDrag;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryWidgetDragCancel OnInventoryWidgetDragCancel;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryWidgetDrop OnInventoryWidgetDrop;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryMouseEnter OnInventoryMouseEnter;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryMouseLeave OnInventoryMouseLeave;

	UPROPERTY(BlueprintAssignable)
	FVoyageInventoryWidgetOnInventoryFiltersChanged OnInventoryFiltersChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageBaseInventoryComponent> SourceInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UObject*> Validators;

	UPROPERTY(EditAnywhere)
	FUserWidgetPool WidgetPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemSort SortBy;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemBase : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemCassetteLogic : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PulseInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageSurvivalValueOverride> MaxSurvivalAttributes;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemCategoryAsset : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NamePlural;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemCategoryAsset* ParentCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemHumanModifiers : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, FVoyageHumanPropertyModifier> PropertyModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTrait*, float> MemoryTraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTraitGroup*, float> TraitGroups;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemMemoryTrait : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemMemoryTraitClass* Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> Requires;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, FVoyageHumanPropertyRequirement> RequiresProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> Excludes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> Adds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, FVoyageHumanPropertyModifier> PropertyModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<UVoyageItemMemoryTraitPodModifier>, float> PodModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTraitGroup*, float> TraitGroups;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemMemoryTraitClass : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnlyHighestLevelAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDuringSimulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAsTargetProfession;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlwaysAddedIfRequirementsAreMet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RevealDetailsForPlayerLevel;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemMemoryTraitGroup : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemMemoryTraitPodModifier : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageItemNetworkTransferComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemNetworkTransferDirection Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference DataSocketReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference ModuleComponentReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPullItemsOutsideRequests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemTransferInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TransferCostBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TransferCostPerKgPerMeter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TransferChargeRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TransferBandwidthMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AccumulatedTransferCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemSerialize InFlightItem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemRequirementIndicatorWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* ItemBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor RequirementFail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor RequirementSuccess;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemSelectorAction : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLFOPreviewWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SecondsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrequencyHz;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Phase01;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Amplitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLFOShape Shape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondsToShow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SamplesPerPixel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LineThickness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawZeroLine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawSecondsLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SecondsLabelDecimals;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLastRenderUpdate : public UAssetUserData
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLazarusInventoryFilterLogic : public UVoyageInventoryFilterLogic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageHumanProperty> Property;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLazarusProfessionWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* PreviewProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* DetailPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PhysicalNamesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* PhysicalValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MentalNamesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* MentalValuesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor RedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor GreenColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor YellowColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor PreviewRedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor PreviewGreenColor;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageLegIKComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FComponentReference> DependencyLegs;

	UPROPERTY(BlueprintAssignable)
	FVoyageLegIKComponentOnLegLifted OnLegLifted;

	UPROPERTY(BlueprintAssignable)
	FVoyageLegIKComponentOnLegPlanted OnLegPlanted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CurrentIKLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentGaitHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StepDistanceThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceUpOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceDownOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SphereCastRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> TraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StepSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StepArcHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bScaleStepHeightWithDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReferenceStepDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinStepHeightScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxStepHeightScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VelocityOvershootMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinTimeBetweenSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* StepCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* PlantSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* PlantEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* PlantedPrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* IdealPrimitive;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageLevelInstanceComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UWorld> LevelToLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AttachToRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool GroupModules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisableOverlaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideFromOutliner;

	UPROPERTY(BlueprintAssignable)
	FVoyageLevelInstanceComponentOnInstanceLoaded OnInstanceLoaded;

	UPROPERTY(BlueprintAssignable)
	FVoyageLevelInstanceComponentOnInstanceShown OnInstanceShown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FName> SpawnedPersistentRuntimeActors;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class AActor>> OwnedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ULevelStreamingDynamic* LoadingLevel;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocalizationLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocation : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLocatorProperties LocatorProperties;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageLocationFabricatorPlacementComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* CurrentItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* SourceActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> IgnoreActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCraftingLocationGenerator* DefaultLocationGenerator;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageLocatorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocation* LocationAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageIndicatorData* OverrideIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsPersistent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoRegister;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLocatorProperties properties;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PosX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PosY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorIndicatorWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* FallbackIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* ShapeBrushAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* FlagRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FlagTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LocatorGroupTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LocatorNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LocatorRadiusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* LocatorImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* TextOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* LocatorDistanceTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ChildWidgetRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* LocatorFlagSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* RevealAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HideAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D BaseSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseShortDistanceFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRoundDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumDecimals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumLargeNumberDecimals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateDistanceInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowLeftClick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowRightClick;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorIndicatorWidgetOnLocatorLeftClick OnLocatorLeftClick;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorIndicatorWidgetOnLocatorRightClick OnLocatorRightClick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OriginalSize;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorPropertyData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLocatorConfig Config;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnActorSpawnedDelegate OnActorSpawnedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnActorDestroyedDelegate OnActorDestroyedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnStreamCellActivate OnStreamCellActivate;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnStreamCellDeactivate OnStreamCellDeactivate;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorRegister OnLocatorRegister;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorUnregister OnLocatorUnregister;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorUpdated OnLocatorUpdated;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnVirtualLocatorRegister OnVirtualLocatorRegister;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnVirtualLocatorUnregister OnVirtualLocatorUnregister;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnVirtualLocatorUpdated OnVirtualLocatorUpdated;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorSourceUpdated OnLocatorSourceUpdated;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorArrive OnLocatorArrive;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorDeparture OnLocatorDeparture;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorEnter OnLocatorEnter;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorExit OnLocatorExit;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnScheduledActionAdded OnScheduledActionAdded;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnScheduledActionRemoved OnScheduledActionRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageLocatorSubsystemOnLocatorRevealLocationsChanged OnLocatorRevealLocationsChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NavmeshBuildBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLoadingInProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, uint8> VisitedCells;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GridCellSize;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UVoyageDynamicPlayerInputComponent>> DynamicPlayerInputComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FUnloadedLocatorInfo> UnloadedLocators;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class UPrimitiveComponent>> PrimitiveComponents;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class UPrimitiveComponent>, FPrimitiveInfo> PrimitiveComponentsInfo;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class UPrimitiveComponent>, FTransform> DisabledPrimitiveComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FPersistentContainer> PendingPersistentComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageLevelInstanceComponent*> LoadingLevels;

	UPROPERTY(EditAnywhere)
	TMap<int32, TWeakObjectPtr<UVoyageOctreeSceneComponent>> OctreeComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageScheduledAction> ScheduledActions;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<USceneComponent>, int32> CameraFollowingComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActivationSphere> LocatorRevealLocations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentSubsystem* PersistentSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEffectSubsystem* EffectSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSubsystem* ModuleSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> WaterActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> WaterExclusionActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USceneCaptureComponent*> SceneCaptures;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLocatorWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanelWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageLocatorIndicatorWidget> LocatorWigetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageIndicatorData* DefaultIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageLocatorType> TypeIncludeFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageLocatorType> TypeExcludeFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> GroupNameIncludeFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> GroupNameExcludeFilters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LocatorPoolSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsViewportWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogData : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLogDataSelector* Selector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageLogFragment*> Fragments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageLogDataPlayerWidget> PlayerOverrideWidgetClass;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataItemWidget : public UVoyageFocusableWidget
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
	class UTextBlock* UnlockTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* MarkerPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowUnlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInput;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataListWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageLogDataItemWidget> ItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* HeaderRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* StatusTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLogDataDetailsWidget* LogDataDetailsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideListItemBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyTrackedQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowQuestStatusTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PrevActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType NextActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoSetListOwner;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataPlayerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLogDataItemWidget* LogDateItemWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FragmentTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FragmentPageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* TextTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* MainImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* MainImageSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* MarkerPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ActionInfoContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowItemWidget;

	UPROPERTY(BlueprintAssignable)
	FVoyageLogDataPlayerWidgetOnIndexChanged OnIndexChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* CurrentAudio;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageLogDataSelector : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* WorldContext;
};
