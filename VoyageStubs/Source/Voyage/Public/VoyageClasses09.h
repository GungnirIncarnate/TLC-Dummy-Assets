#pragma once

#include "VoyageClasses08.h"
#include "VoyageClasses09.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyagePropertyEditDialogWidget : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ConfirmBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CancelBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePropertyEditorWidget* PropertyEditor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DefaultHeaderText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageReportTagSelectorWidget : public UVoyageContextMenuWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> TagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTagColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDesiredWidgetSize;

	UPROPERTY(BlueprintAssignable)
	FVoyageReportTagSelectorWidgetOnTagConfirmation OnTagConfirmation;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageReportWidget : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* TypeListBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableTextBoxWidget* DescriptionTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableTextBoxWidget* TagsTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MessageTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWrapBox* TagWrapBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* SubmitBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableCheckBoxWidget* MetadataCB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableListBoxWidget* SaveGameSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FText> ReportTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SuccessMessageDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableButtonWidget> TagWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultRatingOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSanitizeCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AllowedCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTextLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AvailableTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SubmitInputType;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageSaveDialogWidget : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* InvalidUserRoot;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageShowControlsDialogWidget : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* RootContextSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* ControllerSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* GamepadStyle_0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* GamepadStyle_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageGamepadButtonStyle, TSoftObjectPtr<class UTexture2D>> GamepadButtonImages;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageVirtualKeyboardWidget : public UVoyageCommonDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ToggleKeyTypeInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ToggleCaseInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SpaceInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType BackspaceInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SubmitInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageVirtualKeyContainers> VirtualKeyContainers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* EnterBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ToggleKeyTypeBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* ToggleCaseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* BackspaceBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* SpaceBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableTextBoxWidget* InputBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* TypeSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* InputSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* MouseInputRow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTabControlWidget* KeyboardStyleTab;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAddModuleTaskDialogWidget : public UVoyageBaseDialogWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddTaskToHud;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageInventoryPatternItem> PatternItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CraftFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D PatternItemSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour LeftMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour RightMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour PrimaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour SecondaryActionActivation;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseRadialWidget : public UVoyageItemSelector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidget* InputRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CursorImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MainTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* InputRootAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ControllerInputThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ControllerInputFocusThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiusFromCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D LocalSpaceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShiftToWidgetCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartAngle;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageColorSelector : public UVoyageContextMenuWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageColorSelectorOnColorConfirmation OnColorConfirmation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageColorWheel* ColorWheelWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableSliderWidget* SliderR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableSliderWidget* SliderG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableSliderWidget* SliderB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* SelectBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CancelBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* PreviewColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWrapBox* ColorSwitchRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLinearColor> PresetColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> ColorSwitchButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ConfirmationInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CancelInputType;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItemCassetteAttachment : public UVoyageItemWeaponAttachment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> CassetteSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UAudioSynesthesiaNRT> CassetteSoundNRT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class UVoyageItemCassetteLogic>> CassetteLogics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class UVoyageEquipmentModifierComponent>> CassetteModiferComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCassettePostProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPostProcessSettings CassettePostProcessSettings;
};

UINTERFACE(MinimalAPI, Blueprintable)
class UActorDataAssetInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IActorDataAssetInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API ICharacterInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UConnectableInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IConnectableInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UConnectedEventActorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IConnectedEventActorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UFocusableContainerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IFocusableContainerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UFocusableGridContainerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IFocusableGridContainerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UGrabbableInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IGrabbableInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UInteractiveConditionInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IInteractiveConditionInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UInteractiveInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IInteractiveInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UInteractiveTextInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IInteractiveTextInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IInventoryInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UModulePropertiesChangeInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IModulePropertiesChangeInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UPawnOperatorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IPawnOperatorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UPersistentInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IPersistentInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageActorResourceConsumptionInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageActorResourceConsumptionInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageActorWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageActorWidgetInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageAggroInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageAggroInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageBuilderOverrideInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageBuilderOverrideInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageCableCollisionInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageCableCollisionInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageCassetteInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageCassetteInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageCommitteeTerminalInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageCommitteeTerminalInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageContainerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageContainerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageDestructibleInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageDestructibleInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageDoorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageDoorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageDynamicLayerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageDynamicLayerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageDynamicLayerWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageDynamicLayerWidgetInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageEquipmentInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageEquipmentInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageEquipmentInterpInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageEquipmentInterpInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageEquipmentWidgetInterace : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageEquipmentWidgetInterace
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageExperienceInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageExperienceInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageFabricatorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageFabricatorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageInfoConsoleInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageInfoConsoleInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageInventoryItemValidatorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageInventoryItemValidatorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageInventoryQuerySourceInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageInventoryQuerySourceInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageItemInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageItemInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageItemNetworkInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageItemNetworkInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageLevelSequenceInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageLevelSequenceInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageModuleUpdateInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageModuleUpdateInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageModuleWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageModuleWidgetInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageModuleWorkInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageModuleWorkInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageNPCInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageNPCInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageNavlinkInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageNavlinkInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageOutpostModuleInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageOutpostModuleInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageParallelUpdateInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageParallelUpdateInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePlatformInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePlatformInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePlayerInputInterfaces : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePlayerInputInterfaces
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePoolInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePoolInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePortalListenerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePortalListenerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePortalTravellerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePortalTravellerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageProjectileInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageProjectileInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePropertyInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePropertyInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyagePropertyWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyagePropertyWidgetInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageQuestInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageQuestInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageRecycleInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageRecycleInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSceneCaptureInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSceneCaptureInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSecurityCameraInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSecurityCameraInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSignalReceiverInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSignalReceiverInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSnapSocketInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSnapSocketInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSpawnerInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSpawnerInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSurvivalInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSurvivalInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageSwarmAttractorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageSwarmAttractorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageTerminalInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageTerminalInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageTerminalOperatorInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageTerminalOperatorInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageWaterBodyInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageWaterBodyInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageWeldInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageWeldInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageWidgetFocusInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageWidgetFocusInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UVoyageWidgetInputDeviceInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IVoyageWidgetInputDeviceInterface
{
	GENERATED_BODY()

public:
};

UINTERFACE(MinimalAPI, Blueprintable)
class UWorldStateInterface : public UInterface
{
	GENERATED_BODY()
};

class VOYAGE_API IWorldStateInterface
{
	GENERATED_BODY()

public:
};
