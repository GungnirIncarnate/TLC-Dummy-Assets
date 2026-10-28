#pragma once

#include "VoyageClasses06.h"
#include "VoyageClasses07.generated.h"

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UWeaponAbilityComponent : public UEquipmentAbilityComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UWeaponAbilityMeleeComponent : public UWeaponAbilityComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageDelay;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AModulesConnectCable : public AUtilityCable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* ConnectorMeshA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* ConnectorMeshB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* AudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* AudioComponentExtend;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* CreateSnapAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Bandwidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForcedFlow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BlockedErrorText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText InvalidAttachmentText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText AttachText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DetachText;

	UPROPERTY(BlueprintAssignable)
	FModulesConnectCableOnCableConnectionChangedDelegate OnCableConnectionChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FModulesConnectCableOnCableReelInDelegate OnCableReelInDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlowDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlowPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlowStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlowStrengthPitchMul;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FlowStrengthVolumeMul;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAudioDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMooringCable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMountedCable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MountCableAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* UnmountCableAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableStrengthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableStretchForceMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableStretchForceOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowAddSegments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowRemoveSegments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLengthBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinSegments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanSnapFromStretching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableSnapLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableTightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIntegratedCable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> SpawnedAttachments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* SocketFreeMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* SocketConnectedMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* CableInputMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* CableOutputMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* CableBalanceMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* CableNoStateMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CableConnectionMaterialIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, FLinearColor> ResourceFlowColors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemCable* CableItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* SnapItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemsConsumed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisconnectedA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisconnectedB;

	UPROPERTY(EditAnywhere)
	uint64 ModuleIDA;

	UPROPERTY(EditAnywhere)
	uint64 ModuleIDB;

	UPROPERTY(EditAnywhere)
	uint32 SocketIDA;

	UPROPERTY(EditAnywhere)
	uint32 SocketIDB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCableParticleVoyage> CableParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform SphereATransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform SphereBTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform CableSavedTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsConnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSleeping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleSocketType DirectionA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleSocketType DirectionB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* CachedSocketA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* CachedSocketB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSubsystem* ModuleSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageBoatPawn : public AVoyageVehiclePawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UActorComponent* BoatMovementComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBuoyancyComponent* BuoyancyComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToggleAnchorAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleBackwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SwitchCameraAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ExitAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(BlueprintAssignable)
	FVoyageBoatPawnOnBoatResourceChanged OnBoatResourceChanged;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class UObject>> CachedBuoyancies;

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class UObject>> CachedAnchors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraAboveWaterHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PowerStateDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AnchorsDropped;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageCollectableModuleActor : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageDoorActor : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageDoorActorOnDoorStateChanged OnDoorStateChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageDoorActorOnDoorLockedChanged OnDoorLockedChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageDoorState, float> ElectricityConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDoorState DoorStateDesired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDoorState DoorState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Locked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LockedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DoorSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DoorPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Variation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageDoorVariation> DoorVariations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasCableCollision;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageFarmingSeedBedActor : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Root;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageLazarusPOD : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasSeedCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSeedRefrigeratedCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasHumanCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HumanId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasRackCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasGrowingStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, double> HumanProgressTimerCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UVoyageItem*> ProcessingItemsCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, double> HumanPropertiesCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, double> HumanPropertiesSimulated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, double> HumanPropertyMultipliersCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> TraitsCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> TraitsSimulated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowTimeSimulated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalGrowTimer;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnTraitsChanged OnTraitsChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnPropertiesChanged OnPropertiesChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnPropertiesUpdated OnPropertiesUpdated;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnSimulationUpdated OnSimulationUpdated;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnGrowTimerChanged OnGrowTimerChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnGrowSpeedChanged OnGrowSpeedChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnGrowingStarted OnGrowingStarted;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusPODOnGrowCompleted OnGrowCompleted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> ConsumedItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageLazarusRack* BoundToRack;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageLazarusRack : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWeightLimitedComponent* Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AVoyageLazarusPOD> HumanPodCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> ConsumptionsWhenActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EjectingCurrent;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusRackOnPodEjected OnPodEjected;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusRackOnPodAttached OnPodAttached;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusRackOnFullyFunctionalChanged OnFullyFunctionalChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusRackOnPausedChanged OnPausedChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageLazarusRackOnRequirementsMetChanged OnRequirementsMetChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPaused;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageLoudspeakerActor : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLoudspeakerRootComponent* Root;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageModuleActuatorActor : public AVoyageModuleCommandActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleTransistorGateComponent* SignalInputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSocketViewComponent* SignalSocket;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageModuleCraneActor : public AVoyagePossessableModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* Root;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageNPCSpawnerActor : public AVoyageSpawnerActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageNPCData* NPCDataRef;

	UPROPERTY(BlueprintAssignable)
	FVoyageNPCSpawnerActorOnNPCSpawnedDelegate OnNPCSpawnedDelegate;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageOceanTrashSpawner : public AVoyageSpawnerActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double SpawnRateInSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double WaterDepthNeededToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double EmptyRadiusNeededToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AreaSearchRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EmptySpaceProfileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DestroyOnUnloadTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double LastSpawnTime;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyagePlayerController : public AVoyagePlayerControllerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputControlContextType, EInputControlBindType> DefaultInputContextBindings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SelectTargetSphereRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxReach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxReachDrop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowEnterAsPrimaryMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowEnterMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowExitMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnterMessageDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnterMessageThottle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LootMessageListIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LootMessageDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> WaypointIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageMessageWidget> LootMessageSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageMessageWidget> EnterMessageSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* LootSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* LootAllSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFloatingTextData* FloatingTextData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AVoyageFloatingTextActor> FloatingTextActorClass;

	UPROPERTY(BlueprintAssignable)
	FVoyagePlayerControllerOnActionBarChanged OnActionBarChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyagePlayerControllerOnPlayerInteractionDelegate OnPlayerInteractionDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyagePlayerControllerOnPlayerInventoryDropDelegate OnPlayerInventoryDropDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyagePlayerControllerOnPlayerOverlayShow OnPlayerOverlayShow;

	UPROPERTY(BlueprintAssignable)
	FVoyagePlayerControllerOnPlayerOverlayHide OnPlayerOverlayHide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, float> MessageTimestamps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* SpawnedFocusWidgetCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInputState> PendingInputStates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PendingInputWaitFrames;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVehicleCameraDronePawn : public AVoyageVehiclePawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCameraDroneMode DefaultMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* DroneItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TakeSampleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TakeScreenshotText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EnterText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ExitText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowAreaLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowLootDrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTakeSample;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequirePowerToEnter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMessageContent SampleMessageContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMessageContent ScreenshotMessageContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMessageOnSampleCollect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SampleMessageSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScreenshotMessageSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SampleImageWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SampleImageHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CompressionQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSampleImageFormat SampleImageFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageScreenshotFormat ScreenshotFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ScreenshotFolderName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ScreenshotBaseName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScreenshotCompressionQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowScreenshotPostProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTakeScreenshot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RangeAnchor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRangeAnchored;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleBackwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* AscendAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ExitAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToggleLightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ToggleModeInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* OpenPostProcessDialogInputaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryInteractInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryInteractInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* PostProcessDialog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> ActorsInView;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleCameraDronePawnOnModeChangedDelegate OnModeChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleCameraDronePawnOnLastSampleChanged OnLastSampleChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleCameraDronePawnOnFocusedActorChanged OnFocusedActorChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleCameraDronePawnOnActorValidationChanged OnActorValidationChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleCameraDronePawnOnPictureTakenDelegate OnPictureTakenDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AscendInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* DroneModuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneCaptureComponent2D* SampleCaptureComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* InternalInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTarget2D* SampleRenderTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* LastSampleTexture;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVehicleForkliftPawn : public AVoyageVehiclePawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeedReverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleSpeedReduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSteerSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxForkOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinForkOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxForkTiltOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinForkTiltOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxForkSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxForkTiltSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringMul;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VehicleMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MagnetMaxMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetStiffness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetDeadZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetMaxAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetLiftAssist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ForkMagnetRestOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetMaxReactionAcceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkMagnetMaxDeltaTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ForkMagnetIgnoredAttachParentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkSoundHoldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double NominalPetrolDrawPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GrabbedComponentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkConstraintComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MastComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkCarriageComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SteeringWheelComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FrontWheelConstraintLeftComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FrontWheelConstraintRightComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RearWheelConstraintLeftComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RearWheelConstraintRightComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FrontWheelLeftComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FrontWheelRightComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RearWheelLeftComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RearWheelRightComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RearSteeringConstraintLeftComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RearSteeringConstraintRightComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName HornAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkTiltAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkOffsetAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LightActorComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkLeverComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CustomModuleComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DriverSeatComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractiveObjectComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ForkMagnetBoxComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineThrottleAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioIsPlayingParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineStartupAudioTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineShutdownAudioTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ForkTiltUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ForkTiltDownInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ForkUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ForkDownInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleBackwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ExitAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleForkliftPawnOnForkInputChanged OnForkInputChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleForkliftPawnOnForkTiltInputChanged OnForkTiltInputChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehicleForkliftPawnOnForkOffsetChanged OnForkOffsetChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkTiltInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForkTiltOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform ForkTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Steering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Acceleration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalMass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActualPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsEnginePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* ForkMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* ForkConstraintComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* MastMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* ForkCarriageMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* SteeringWheelMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* FrontWheelConstraintLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* FrontWheelConstraintRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* RearWheelConstraintLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* RearWheelConstraintRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* FrontWheelLeftComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* FrontWheelRightComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RearWheelLeftComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RearWheelRightComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* RearSteeringConstraintLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* RearSteeringConstraintRight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* EngineAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* HornAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* ForkTiltAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* ForkOffsetAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* LightChildActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* ForkLeverChildActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCustomModuleComponent* CustomModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* DriverSeat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInteractiveObjectComponent* InteractiveObjectComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* ForkMagnetBox;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVehicleGyroCopter : public AVoyageVehiclePawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleActionUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleActionDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* TiltLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* TiltRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* TiltForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* TiltBackwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ExitAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* DropCargoAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseUserWidget> HUDOverrideWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CameraAnchorOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSteering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PropellerLift;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LiftReductionByHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectiveRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverCollective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinCollective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectiveInputBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectiveBoostInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollectiveInputDeadzone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoHoverCollective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverCalibrationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverCalibrationClimbRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverCalibrationClearance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverCalibrationMinPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverCalibrationMaxAssistPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHoverPitchScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHoverPitchScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAltitudeAssist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistClimbRateDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistMaxPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistTrimGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistMaxTrimRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistMinRotorAuthority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EngineCutHoldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EngineCutMaxClearance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GovernorGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GovernorDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxThrottleRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IdleThrottle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCollectiveCorrelator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorPitchDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdRotorDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdDragStartTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdDragFullTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdResponseTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdSampleInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutorotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutorotationDescentRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutorotationMaxPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutorotationMinSpeedFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteadyTorqueSpeedTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteadyTorqueLearnRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HullAttitudeFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraYawTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraYawDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PedalYawTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PedalCameraYawRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorTorqueReactionYaw;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TailRotorTrimRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroundEffectLift;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroundEffectHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> GroundTraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroundTraceStartHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBuoyancyComponent* Buoyancy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bQuadraticFoilVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FoilReferenceSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFoilStallModel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FoilStallAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FoilStallBlendAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FoilSeparatedNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiltSideAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiltForwardAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiltInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightMaxTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PropellerVelocityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PropellerTorquePerEnergy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorBrakeTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BackPropellerSpinScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorFoilAreaScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorAudioRPMScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PetrolConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CarbonDioxideProduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PhysicalEnergyProduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalThrottleInputScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalThrottleControlScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WorkloadPetrolPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillswitchDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringWheelYawScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringWheelTiltScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReelInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReelThrottleThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReelCableStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReelCableStrengthInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ReelingCableTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DropCargoTriggerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CustomModuleComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PropellerComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PropellerRotatorComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BackPropellerComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RotorFoilSideComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RotorFoilTopComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SteeringComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SteeringWheelComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TiltControlComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RotorAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MooringSocketAComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MooringSocketBComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ContainerAComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ContainerBComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LightActorComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LightRotatorComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractiveObjectComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DriverSeatComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DriverExitComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineThrottleAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName RotorRPMAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PedalInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiltInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TiltForwardInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraUpInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraRightInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentThrottle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Collective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEngineRunning;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BladePitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoverPitchScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PitchBoost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AssistPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GovernedRotorSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorSpeedRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorDragCoefficient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorPitchDragTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorColdDragTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorTemperature;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColdSeverity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteadyEngineTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutorotationTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EngineCutTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBrakeRotor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator CommandedTilt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator HullAttitudeTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotorSpinSign;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TailRotorTrim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroundClearance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GroundEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ClimbRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PropellerVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Altitude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* LastDriver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReelTicker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCustomModuleComponent* CustomModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* PropellerMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* PropellerRotatorComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* BackPropellerMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFluidFoil* RotorFoilSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFluidFoil* RotorFoilTop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SteeringComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SteeringWheelComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* TiltControlComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* EngineAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* RotorAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* MooringSocketA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* MooringSocketB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* ContainerA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* ContainerB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* LightChildActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* LightRotatorComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInteractiveObjectComponent* InteractiveObjectComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* DriverSeat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* DriverExit;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVehicleJetSkiPawn : public AVoyageVehiclePawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeedReverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleSpeedReduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSteerSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSteering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PetrolPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ReverseThrottleScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrustAtNozzle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleRampUpRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleRampDownRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringFalloffSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HighSpeedSteeringScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IdleSteeringAuthority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeanScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLeanAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeanInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleTrimPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedTrimPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrustVerticalScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpwardVelocityDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirborneGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirborneGravityRampTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirborneUprightTorqueScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirborneTrimPitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterDragCoefficient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlaningLiftFraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlaningLiftForwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlaningLiftFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterAngularDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AirborneAngularDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightMaxTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UprightDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringWheelYawScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PetrolConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CarbonDioxideProduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PhysicalEnergyProduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ElectricityProductionPerTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightElectricityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightElectricityConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WorkloadPetrolPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AudioSpeedDivisor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseUserWidget> HUDOverrideWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleForwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ThrottleBackwardAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringRightAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SteeringLeftAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ExitAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ZoomAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookRightInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LookUpInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CustomModuleComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BuoyancyComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SteeringComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SteeringWheelComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WaterAudioComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WaterLevelSocketComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LightActorComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractiveObjectComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DriverSeatComponentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ThrottleAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SteeringAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpeedAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName WaterLevelAudioParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineStartupAudioTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EngineShutdownAudioTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsEnginePlaying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SmoothedThrottle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentLeanAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCustomModuleComponent* CustomModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBuoyancyComponent* Buoyancy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SteeringComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SteeringWheelComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* EngineAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* WaterAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* WaterLevelSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UChildActorComponent* LightChildActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInteractiveObjectComponent* InteractiveObjectComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* DriverSeat;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UAssetsSync : public UBaseSyncUtility
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UCharacterInteractiveComponent : public UInteractiveObjectComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FCharacterInteractiveComponentOnMoveCargoDelegate OnMoveCargoDelegate;

	UPROPERTY(BlueprintAssignable)
	FCharacterInteractiveComponentOnStopActionDelegate OnStopActionDelegate;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UProjectileAbilityComponent : public UWeaponAbilityComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API URadialActionsMainMenu : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class URadialMenuItem> MenuItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialMenu* RadialMenu;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UVoyageItem>> Actions;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API URadialMenu : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCanvasPanel* WidgetRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CursorImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ItemText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class URadialMenuItem> MenuItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemsDistanceFromCenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ItemSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WidgetCenterPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor SelectedColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DefaultColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* CursorDynamicMaterial;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API URadialMenuActionItem : public URadialMenuItem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UUVoyageEnhancerViewWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageEnhancerWidget> EnhancerWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* EnhancerPointsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType AddManyInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ExchangeLevelCapExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumPointsPerMany;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor AvailablePointColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor NoAvailablePointColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* AllocateManyDialog;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ErrorSound;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UUVoyageEquipmentContextWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainerWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAchievement : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AchievementID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageAchievementRequirement> Conditions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAchievementUnlockType UnlockType;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageActionBarItemWidget : public UVoyageInventoryItem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseActorDataAsset : public UVoyageBaseDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DevIdentifier;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseBadgeWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BadgeHeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BadgeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* BadgeBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* BadgeOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* BadgeSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateColor BadgeTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor BadgeBorderColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideWhenZero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSkillDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseEnhancerDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseInventoryChangedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseInventoryAddDelegate;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageBaseBarComponent : public UVoyageInventoryWeightLimitedComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBarSlotConfig> Slots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWrapOnlyOccupiedSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowIconsInEmptySlots;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarComponentOnActiveSlotChanged OnActiveSlotChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarComponentOnBarSlotActivated OnBarSlotActivated;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarComponentOnBarSlotPostActivated OnBarSlotPostActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActiveIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrevActiveIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseBarWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility EmptySlotsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageInventoryItem> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideIconSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverrideIconWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverrideIconHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHightlightDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHighlightInternalDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin RootPanelPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* HeaderOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDesiredColumns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHighlightActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowEdit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDrag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideItemCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPlayerInventoryCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin SlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour LeftMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour RightMouseActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour PrimaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFocusableActivationBehaviour SecondaryActionActivation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* InputContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UInputAction*> InputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBarDropValidator*> DropValidators;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarWidgetOnBarItemActivated OnBarItemActivated;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarWidgetOnBarDrag OnBarDrag;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarWidgetOnBarDragCancel OnBarDragCancel;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarWidgetOnBarDrop OnBarDrop;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseBarWidgetOnBarSwap OnBarSwap;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseDetailsWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* RootSB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageToolTipWidget* DetailToolTipWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasOuterMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllContainers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SourceContainerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> TabIndicies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyWhenValidFocus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCollapseParent;

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

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseDetailsWidgetOnDetailsVisibilityChanged OnDetailsVisibilityChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseMenuUserWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTabControlWidget* RootTabControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoRegisterNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitialFocusContainerIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowNavigationContainers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowContainerEscapeWithNextAndPrev;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowTabsWithNextAndPrev;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MenuScrollBoxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PrimaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SecondaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMenuWidgetSoundData* MenuSoundData;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseMenuUserWidgetOnMenuFocusChanged OnMenuFocusChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseModuleManagementWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* ModuleActorIn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseModuleWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCentralWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTabControlWidget* TabControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* WidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* MouseControlsOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEquipmentWidget* EquipmentWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageActionBarWidget* ActionBarWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponHolsterWidget* HolsterWidget;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageCharacterInputControlsComponent : public UVoyageInputControlsComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCharacterInputControlAsset* InputAsset;

	UPROPERTY(BlueprintAssignable)
	FVoyageCharacterInputControlsComponentPrimaryActionPressedDelegate PrimaryActionPressedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageCharacterInputControlsComponentSecondaryActionPressedDelegate SecondaryActionPressedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bScrollToCycleHolster;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowInteractWhileCarrying;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSForwardMoveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSRightMoveMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSVerticalCameraMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSHorizontalCameraMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bAllowSprintOnWhenADS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bAllowJumpOnWhenADS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bJumpMovementInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float bCrouchMovementInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InputMovementInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InputRotationInterpolationSpeed;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageCharacterOctreeComponent : public UVoyageOctreeSceneComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCombatEventWidget : public UVoygeBaseEventWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoygeBaseEventWidget* KillEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoygeBaseEventWidget* DamageEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDamageType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCombatSubsystem* CombatSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommitteeDetailsWidget : public UVoyageBaseDetailsWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType PrimaryActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType SecondaryActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType TertiaryActionInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageHumanSimulationCommitteeInfo CommitteeInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCommitteeActionState> ActionStates;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCommitteeWidgetEntryWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageConsumptionEventWidget : public UVoygeBaseEventWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageContainerWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* InventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryWidget* PlayerInventoryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* MouseControlsOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* LootallPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* DepositAllPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ClosePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* LootAllBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* DepositAllBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* DepositSimilarBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* CloseBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* EditPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableButtonWidget* EditBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseDialogWidget> EditDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType CloseAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType LootAllAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType DepositAllAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType EditAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType DepositSimilarAction;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageContextMenuCancelAreaWidget : public UVoyageHoverAreaWidget
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageControllerInputControlsComponent : public UVoyageInputControlsComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageControllerInputControlAsset* InputAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* EmptyOverlay;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageConverterItemInProgressWidget : public UVoyageFocusableWidget
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
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ProgressPanel;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCreditsMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageCreditsBodyWidget> CreditsBodyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScrollBox* MainScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* BlockRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpacer* TopSpacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USpacer* BottomSpacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCreditsData> CreditsDatas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShuffleCredits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OffetByVerticalHeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoScrollDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoExitTime;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageCustomModuleComponent : public UVoyageModuleComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageCustomModuleComponentOnItemConsumedDelegate OnItemConsumedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCustomModuleResourceConversion> InternalResourceConversion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCustomModuleItemConversion> InternalItemConversion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> ResourceGainsLastFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> ResourceLossesLastFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<EModuleResourceType> ActiveFlowResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActiveFlowTimerLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> MaxResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> ConsumptionsOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> ConsumptionsStandby;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, double> ItemConsumptionsOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> ProductionsOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, double> ItemProductionsOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, double> ItemConsumptionBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, double> ItemProductionBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseItemConsumptionAsWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutomaticMaxResourceBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OperationalMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> TemporaryConsumptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> TemporaryResourceMax;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDeathWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UserInputDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideLastSaveButtonIfNotValid;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageDemoEndWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxTimeToMainMenu;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEnhancerToolTipWidget : public UVoyageToolTipWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* VersionTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEnhancerWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ProgressTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* EnhancerIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APlayerController* EnhancerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEnhancer* Enhancer;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentAttachToHand : public UVoyageEquipmentNotify_Base
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageEquipmentComponent : public UVoyageBaseBarComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoRemoveActionBarBindings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* EquipSlotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* UnEquipSlotSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageNamedEquipmentSlots, USoundBase*> EquipSlotOverrideSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageNamedEquipmentSlots, USoundBase*> UnEquipSlotOverrideSounds;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnItemEquipped OnItemEquipped;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnItemUnequipped OnItemUnequipped;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnItemSlotChanged OnItemSlotChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnEquipmentModuleChangedDelegate OnEquipmentModuleChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnEquipmentInteract OnEquipmentInteract;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnEquipmentBinded OnEquipmentBinded;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnEquipmentUnBinded OnEquipmentUnBinded;

	UPROPERTY(BlueprintAssignable)
	FVoyageEquipmentComponentOnStateValueChanged OnStateValueChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, USkeletalMeshComponent*> SlotSkeletalMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, AActor*> SlotActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FSlotComponentArray> SlotComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class UActorComponent>, FSlotSharedComponent> SharedComponents;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentItem : public UVoyageInventoryItem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageEquipmentWidget : public UVoyageBaseBarWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageNamedEquipmentSlots> WhitelistedSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageNamedEquipmentSlots> BlacklistedSlots;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageExpEventWidget : public UVoygeBaseEventWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowLevelExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowLevelCapExp;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableButtonWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* SubBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* BackgroundBorder;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableButtonWidgetOnSubButtonClicked OnSubButtonClicked;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableCheckBoxWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFocusableCheckBoxStyle TextStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowOnlyActiveStateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowCheckedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowUnCheckedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCustomizeTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CheckedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnCheckedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowLeftAndRightToChange;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableCheckBoxWidgetOnCheckStateChanged OnCheckStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CheckedTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* UnCheckedTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableColorWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableColorWidgetOnColorChanged OnColorChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* ColorBorder;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableIconWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultIcon;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableIconWidgetOnIconChanged OnIconChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageIconPaletteData* CurrentIconPaletteData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentIconIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableKeyInputWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* KeyInputContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* KeyInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideResetWhenNotCustomized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCollapseHidden;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSuffixWithActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSuffixWithKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* OverrideDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputKeySelector* PrimaryInputKeySelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PrimaryInputSuffixTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputKeySelector* SecondaryInputKeySelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SecondaryInputSuffixTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ResetBtn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableListBoxWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLoop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FListBoxOption> DefaultOptions;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableListBoxWidgetOnSelectedIndexChanged OnSelectedIndexChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* IndexChangedAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* OptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* NextBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* PrevBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* OptionImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FListBoxOption> MyOptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SelectedIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableRadioButtonWidget : public UVoyageFocusableListBoxWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableRadioButtonEntryWidget> RadioOptionWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* OptionRoot;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableSliderWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseGrouping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinFractionDecimals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFractionDecimals;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableSliderWidgetOnSliderValueChanged OnSliderValueChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlider* ValueSlider;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableTextBoxWidget : public UVoyageFocusableWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInputControls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOpenVirtualKeyboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreferNativeVirtualKeyboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageVirtualKeyboardType VirtualKeyboardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* VirtualKeyboardData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTextLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HintText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType ClearInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EUINavigationInputType VirtualKeyboardInputType;

	UPROPERTY(BlueprintAssignable)
	FVoyageFocusableTextBoxWidgetOnTextChanged OnTextChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UEditableTextBox* EditableTextBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMultiLineEditableText* MultiLineEditableText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* EditBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ClearBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* ControlSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* FocusVisualizationRoot;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageFocusableVirtualKeyButtonWidget : public UVoyageFocusableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AssignedKeyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* CustomImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* TypeSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* CustomIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey AssignedKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CustomText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLongDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanTransformKeyText;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageHolsterItem : public UVoyageInventoryItem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameCharacterWidget : public UVoyageInGameWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HealthOverlayAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* SurvivalPanelRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageActionBarWidget* ActionBarWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* TooltipOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ReelOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* CentralInputActionContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ContextInputActionContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* CableOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CableTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* CableFooterTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* SwimmingOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ImmersionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PressureTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCharacterBatteryWidget* BatteryWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageHitDamageWidget* HitDamageWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* CrosshairOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageScanWidget* ScanWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UInteractIndicator> IndicatorSubClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, UInputAction*> InputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InteractAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ReelAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PrimaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SecondaryAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, FText> SwitchActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DefaultInteractText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SwimmingRefreshInverval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableRefreshInverval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CableFooterTextColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CableFooterTextReelColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor CableFooterTextNoCableColor;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameMenuWidget : public UVoyageBaseMenuUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseDialogWidget> CheatDialogClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageOptions> OptionsClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ExitGameDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ExitDesktopDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* SaveErrorDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* SaveDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* SaveOverrideDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* ShowControlsDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* FeedbackDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* EarlyAccessDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* PendingSaveDialogData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, EInGameMenuOption> GameMenuOptionsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PauseGameWorldWhenVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bResumeWorldWhileEarlyAccessDialog;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInGameVehicleWidget : public UVoyageInGameWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpeedMininumDigits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedMaxInMeters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedMinAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpeedMaxAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleMinAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ThrottleMaxAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringMinAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteeringMaxAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSteeringShortFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSteeringAngleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMileageShortFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMileageUseLargeNumbers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MileageMaxDecimals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SpeedTb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* SpeedAngleOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlider* SpeedSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialSlider* SpeedRadialSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* GearTb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ThrottleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ThrottleAngleOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlider* ThrottleSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialSlider* ThrottleRadialSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SteeringTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* SteeringAngleOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USlider* SteeringSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URadialSlider* SteeringRadialSlider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* RPMTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RPMAngleOL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* MileageTb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PowerTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCharacterBatteryWidget* BatteryWidget;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInfoConsoleVehicleWidgetBase : public UVoyageModuleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AVoyageVehiclePawn> OwningVehiclePawn;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIngameDroneWidget : public UVoyageInGameVehicleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* OpenScreenshotFolderBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceDeltaTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AltitudeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageUnitFormattingArg ResourceFormattingArgs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AltitudeUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* LastSampleTexture;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIngameForkliftWidget : public UVoyageInGameVehicleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceDeltaTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* HornPanelRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ForkPanelRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ForkValueTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageUnitFormattingArg ResourceFormattingArgs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceUpdateInterval;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIngameGenericVehicleWidget : public UVoyageInGameVehicleWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ResourceDeltaTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageUnitFormattingArg ResourceFormattingArgs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceUpdateInterval;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageInventoryItemToolTipWidget : public UVoyageToolTipWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeader;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFlags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDurability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSubType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowAdditionalInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHumanProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowRecycleInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DesiredWrapForLongTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* RootOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ItemIconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* HeaderOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* QualityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AgeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FlagsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DurabilityTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageRichTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* AdditionalInfoTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* AdditionalInfoRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* WeightTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DataTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* ActionsRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* DynamicRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* HumanPropertiesRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class URichTextBlock* RecycleInfoRTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* VersionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FKey, FText> AdditionalKeys;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageIslandsData : public UVoyageLocatorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LastClientUpdateCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UpdateCode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UWorld> LevelLandscape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UWorld> Level;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageItem : public UVoyageItemBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemTargetInventory DesiredInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageInventoryType> BlockedInventoryTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLootAsPattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnlyAllowDesiredInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* SecondaryIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemCategoryAsset* CategoryAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemQuality Quality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsPhysicsObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoCombineRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAwake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoWeld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoweldIgnoreNormal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LinearDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngularDamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> MeshCollisionReponses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemOverlapEventsOverride GenerateOverlapEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInteractive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLootAsItemTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSupportInventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowFabricationOnTop;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDismantlable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsRecyclable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsRepairable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanGainLootExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxStackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Buoyancy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LifeTimeBuoyancy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemAction DefaultDropBehaviour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Tag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemLogic*> Logic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CraftTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CraftElectricityCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CraftAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCustomCraftInitialRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator CraftInitialRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCraftSocketVisualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> CraftResourceRequirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CraftFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCraftingLocationGenerator* CraftingLocationGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsScannable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScanLevelRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUnlockAsBuildable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageScanLogic*> ScanLogics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> Components;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* DamagedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DurabilityAffectsDismantleMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DismantleDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DismantleElectricityCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> RepairComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RepairDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RepairElectricityCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables LootItemTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageLootItemTables> ItemTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStreamableRenderAsset> DroppedMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class UMaterialInterface>> DroppedMeshMaterialOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageItemObjectArray> DroppedActorData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageItemDropVariation> DropVariations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemDropVariationType DropVariationType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> DroppedActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCCD;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumDropScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDropScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScalePerItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDropCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* LootSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDestructible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageDestructibleObjectProperties DestructibleObjectProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProcessTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, FVoyageHumanPropertyModifier> PropertyModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTrait*, float> MemoryTraits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTraitGroup*, float> TraitGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemHumanModifiers*, float> HumanModifiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ConsumedInHumanGrowingProcess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UVoyageProperty*> properties;
};
