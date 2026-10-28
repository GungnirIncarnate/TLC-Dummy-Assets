#pragma once

#include "VoyageClasses00.h"
#include "VoyageClasses01.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSpawnLocationPoint : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpawnerVolume* Volume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer FilterTags;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSpawnerActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpawnerVolume* SpawnerVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentActorComponent* PersistentActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ToSpawnRefresh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ToSpawnRefreshTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnOnFloor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnAreaMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EmptyHalfExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<class AActor>> SpawnedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefreshTimer;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSpawnerProcessorActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UObject*, float> Objects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpawnerVolume* SpawnerVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentActorComponent* PersistentActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<class AActor>> SpawnedActors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSpawnerVolumeActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class AActor>> actors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SpawnOnBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRandomizeRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceInsideVolumeBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ShapeBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseComponentReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference BoxReference;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSpectatorPawn : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpectatorInputControlsComponent* InputControls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttachCamera;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageStreamingSourceExtenderActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TriggerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeactivationDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bChainFromExtenders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bChainToExtenders;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ChainGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMainGridOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> TargetGrids;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStreamingSourceTargetBehavior TargetBehavior;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStreamingSourcePriority Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStreamingSourceTargetState TargetState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor DebugColor;

	UPROPERTY(BlueprintAssignable)
	FVoyageStreamingSourceExtenderActorOnActiveChanged OnActiveChanged;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSwarmAttractorActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSwarmAttractorComponent* Attractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpawnerVolume* Volume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentActorComponent* Persistent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSwarmHandler : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double GridSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 HalfGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DirectionalLightIntensityThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AVoyageSwarmTargetDummyActor> SwarmTargetDummyClass;

	UPROPERTY(BlueprintAssignable)
	FVoyageSwarmHandlerOnParticleDeath OnParticleDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePersistentActorComponent* PersistentComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInstancedStaticMeshComponent* InstancedMeshComponentTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSwarmTemplate*> SwarmTemplates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageSwarmTemplate*, int32> SwarmTemplatesMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInstancedStaticMeshComponent*> InstancedMeshComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UAudioComponent*> AudioComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UNiagaraComponent*> ParticleComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSwarmParticle> Particles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> ActiveParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> FreeParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> UnloadedParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageSwarmTemplate*, float> KillCounters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCombatSubsystem* CombatSubsystem;

	UPROPERTY(EditAnywhere)
	TMap<uint32, TWeakObjectPtr<AVoyageSwarmTargetDummyActor>> AttractorDummies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWorld* World;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageEffectSubsystem* EffectSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocatorSubsystem* LocatorSubsystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTemperatureSubsystem* TemperatureSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSwarmSpawnerActor : public AVoyageSpawnerActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnInPlane;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTraceDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SwarmSpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSwarmTemplate* SwarmTemplate;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageSwarmTargetDummyActor : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> TargetActor;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageUnderWaterDecorationActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUnderWaterTileOverride TileOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EditorTickEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FUnderWaterTileInfo> Tiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double GenerationRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double OceanFloorDepth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FUnderWaterTileOverride> TileOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FUnderWaterGeneratedTileInfo> ActiveTiles;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageUnderWaterPostProcessMeshActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* UnderwaterRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* MaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> HiddenWaterZones;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVacuumModuleActor : public AVoyageModuleActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSocketViewComponent* PowerSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSocketViewComponent* DataSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemNetworkTransferComponent* TransferComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* VacuumArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* Inventory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* SuctionEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> ItemVacuumedEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> ItemTransferredEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDetachEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference InventoryOutputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInputMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<class UVoyageItemCategoryAsset>> FilterCategoryWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemCategoryAsset*> ConfigurableFilterCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemCategoryAsset*> FilterCategoryBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItem*> FilterItemWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItem*> FilterItemBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxItemWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxConfigurableItemWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SuctionStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DampingStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CaptureRadius;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVehiclePawn : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputControlsComponent* InputControls;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFastSceneComponent* MeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator VehicleForwardOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLevelInstanceComponent* LevelInstanceComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSpringArmComponent* SpringArmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* CameraOffsetCheckComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* CameraAttachmentComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDynamicPlayerInputComponent* DynamicPlayerInputComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDestructibleObjectComponent* DestructibleObjectComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ExitComponentTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowFirstPersonCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTrackPlayerPawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPlayerPawnDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMountCharacterWithVehicle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisableCameraCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoPossess;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreserveControlRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LookUpDownRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LookLeftRightRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZoomRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EnterVehicleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraPitchLowerLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraPitchTopLimit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* HornInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UAnimInstance> PossessedVehicleAnimationBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFirstPersonCamera;

	UPROPERTY(BlueprintAssignable)
	FVoyageVehiclePawnOnHornInputChanged OnHornInputChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> MasterModuleComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class APawn> DriverClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APawn* Driver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DriverEnterRelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SpringRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceTravelledInMeters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpringArmLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpringArmLengthMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpringArmLengthMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPossessed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HornInput;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageVirtualActorSocket : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleSocketViewComponent* VoyageModuleSocketView;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWaterAttenuationActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* MeshComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWaterBodyExclusionVolume : public AWaterBodyExclusionVolume
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* MeshComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWeapon : public AVoyageEquipmentActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWeaponAbilityComponent* MeleeAbilityComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UWeaponAbilityComponent> MeleeAbilityComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponData* MeleeAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* WeaponActivationAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RecoilRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* TransformRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponAttachmentType, USoundBase*> WeaponAttachmentSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EWeaponAttachmentType, USoundBase*> WeaponDettachmentSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* ModuleSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageEquipmentModifierComponent*> CassetteEquipModifierComponents;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWeaponBallistic : public AVoyageWeapon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UArrowComponent* BulletCaseExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReloadOwnerAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReloadWeaponAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoReload;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoSwitchAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoEquipMagazine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideActiveAmmoTypeFromSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeaponCaliber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WeaponBulletCaseExitSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector WeaponBulletCaseExitAngularRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemWeaponAttachment*, EWeaponAttachmentType> DefaultAttachments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemAmmo* DefaultAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ActivationFailureNoAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ActivationFailureNoMagazine;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayPostActivationAnimAfterLastRound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* ReloadAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* SwitchAmmoAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemEquipmentAttachment*, FVoyageAbilityConfig> FrontAttachmentAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreventAvailabilityDuringActivationAnim;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponBallisticOnReloadStartedDelegate OnReloadStartedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponBallisticOnReloadCompletedDelegate OnReloadCompletedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponBallisticOnAmmoChangedDelegate OnAmmoChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponBallisticOnAmmoCountChangedDelegate OnAmmoCountChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponBallisticOnAmmoMaxCountChangedDelegate OnAmmoMaxCountChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageWeaponBallisticOnMagazineChangedDelegate OnMagazineChangedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemAmmo* CurrentAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentAmmoCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMintCondition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UEquipmentAbilityComponent* FrontOverrideAbility;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWeaponBallisticBullet : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* BulletCaseMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDynamicCollisionComponent* DynamicCollision;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWeaponResource : public AVoyageWeapon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StorageCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RechargeBandwidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCustomModuleComponent* ModuleComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWeatherVolumeActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* Origin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeatherVolume* Volume;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWorldScriptActor : public AActor
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSaveGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseConnected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ConnectedZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSyncPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReplaceDynamicPersistentActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnGameplayActors;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API AVoyageWorldStreamingLoader : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RootSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWorldPartitionStreamingSourceComponent* StreamingSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DelayedTriggerTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyActorAfterTrigger;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UAGVMultiPrimitiveComponentProxy : public UAudioGameplayVolumeProxy
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UBaseSyncUtility : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FBaseSyncUtilitySyncProcessCompletedEvent SyncProcessCompletedEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ButtonSync;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UBaseWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UEnvQueryGenerator_Voyage : public UEnvQueryGenerator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText GeneratorsActionDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UEnvQueryContext> Context;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UEnvQueryItemType> GeneratedItemType;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UEnvQueryInstanceBlueprintWrapperVoyage : public UEnvQueryInstanceBlueprintWrapper
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UEnvQueryItemType_SceneComponent : public UEnvQueryItemType_VectorBase
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UEnvQueryTest_Socket : public UEnvQueryTest
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue OpenSocket;

	UPROPERTY(EditAnywhere)
	FAIDataProviderBoolValue ReservedSocket;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UEquipmentAbilityComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPerformAbilityOnlyOnTraceHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AbilityCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> TraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageAbilityData* AbilityData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCombatSubsystem* CombatSubsystem;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UFixAssetsVersion : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AssetsPath;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UInteractIndicator : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UOverlay* ProgressOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageButtonInfoContainerWidget* ButtonInfoContainer;

	UPROPERTY(BlueprintAssignable)
	FInteractIndicatorOnInteractProgressChanged OnInteractProgressChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* InteractAnim;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UInteractiveDetectorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* InteractCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDetectionEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFilterBehind;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> InteractiveIndicatorWidgetClass;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorComponentOnInteraction OnInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SceneWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetComponent* InteractWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInteractIndicator* InteractIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UInteractiveObjectComponent> InteractiveReference;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UInteractiveDetectorPointerComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D PointerScreenLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxReach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RayShapeRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AreaInteractRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowInteract;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowAreaLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* DefaultCrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* WidgetInteractCrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* ConnectCrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* GrabCrosshairWidget;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnHoverChanged OnHoverChanged;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnHoldingChanged OnHoldingChanged;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnInteract OnInteract;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnReleaseInteract OnReleaseInteract;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnActionBegin OnActionBegin;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnActionEnd OnActionEnd;

	UPROPERTY(BlueprintAssignable)
	FInteractiveDetectorPointerComponentOnActionProgress OnActionProgress;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInputAction*> InteractIndexInputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* DefaultWidgetInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* MeleeInputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* LootAllInputAction;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UInteractiveObjectComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageInteractType InteractType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PartId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bButtonInfoActionRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageActionType> ButtonInfoRequiredActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bButtonInfoNotAllowedAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageActionType> ButtonInfoNotAllowedActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* OverlayWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageDialogWidgetData* DialogWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusWidgetData* FocusWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* EquipmentFilterItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* HolsterFilterItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RequiredHoldTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageInteractFilter InteractFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* CrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> InteractIndexWhitelist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> InteractIndexBlacklist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInputAction*> InteractIndexInputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bScanText;

	UPROPERTY(BlueprintAssignable)
	FInteractiveObjectComponentOnInteractActionTriggered OnInteractActionTriggered;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UMapSyncUtility : public UBaseSyncUtility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActorMagnitudeFilterThreshold;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UMaterialExpressionVoyageBiplanar : public UMaterialExpression
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FExpressionInput Texture;

	UPROPERTY(EditAnywhere)
	FExpressionInput position;

	UPROPERTY(EditAnywhere)
	FExpressionInput Normal;

	UPROPERTY(EditAnywhere)
	FExpressionInput Size;

	UPROPERTY(EditAnywhere)
	FExpressionInput K;

	UPROPERTY(EditAnywhere)
	FExpressionInput Parallax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePlanarMapping Mapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLocalSupport;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNormalMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutomaticViewMipBias;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ConstSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ConstK;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialExpressionCustom* CoordinatesNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialExpressionCustom* BlendNode;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UModuleSocketComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemTransferTimer;

	UPROPERTY(EditAnywhere)
	uint32 SocketID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LeakMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddModuleRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModuleCustomRequirement CustomRequirement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoInitialize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModuleSocketIOData Port;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAcceptsSignals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OwningModule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStandalone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtual;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtualGrouped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtualShareToGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundCue> ConnectSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundCue> DisconnectSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundCue> SwitchDirectionSound;

	UPROPERTY(BlueprintAssignable)
	FModuleSocketComponentOnSocketConnectionChanged OnSocketConnectionChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourcesTransferredLastFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourcesTransferredLastFrameAbsolute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourcesTransferredLastFrameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceTransferPerSecond;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemCable* IntegratedCable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntegratedCableLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* IntegratedCablePlaceholderMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UModuleSocketComponent> ConnectedToSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> ModuleOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> ModuleOwnerOriginal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AModulesConnectCable> ConnectionCable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* SocketCollisionBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* NiagaraFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* NiagaraFXLeak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> NiagaraFXLeakSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> NiagaraFXSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageConnectedSocketsCache ConnectedSocketsCache;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UOverlapComponentAccessor : public UPrimitiveComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UPhysicsGrabComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* RotateAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* GrabAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* CreateCableExtenderAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PokeAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* DropAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* RotateActionHorizontal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* RotateActionVertical;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* AdjustSlackIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* AdjustSlackDecrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* PlacementAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* StowAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlacementActionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* GrabCrosshairWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BackSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform BackAttachOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxMassStow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxStowBoundsRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StowWeightMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> StowedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxMassGrab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MassGrabStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForceElectricityConsumption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Reach;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoldDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoldOffsetSimulated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HoldOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CarryOffsetFromBottom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CharacterImpulseMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PokePower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PokeMaxVelocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> GrabbedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GrabbedComponentBoneName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* HandleNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* HandleTargetNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* GrabAudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* InvalidGrabSound;

	UPROPERTY(BlueprintAssignable)
	FPhysicsGrabComponentOnPerformGrabDelegate OnPerformGrabDelegate;

	UPROPERTY(BlueprintAssignable)
	FPhysicsGrabComponentOnReleaseGrabDelegate OnReleaseGrabDelegate;

	UPROPERTY(BlueprintAssignable)
	FPhysicsGrabComponentOnGrabObjectThrownDelegate OnGrabObjectThrownDelegate;

	UPROPERTY(BlueprintAssignable)
	FPhysicsGrabComponentOnAttachmentFabricatedDelegate OnAttachmentFabricatedDelegate;

	UPROPERTY(BlueprintAssignable)
	FPhysicsGrabComponentOnStowDelegate OnStowDelegate;

	UPROPERTY(BlueprintAssignable)
	FPhysicsGrabComponentOnUnstowDelegate OnUnstowDelegate;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API URadialMenuItem : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* MainBtn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ItemText;

	UPROPERTY(BlueprintAssignable)
	FRadialMenuItemOnItemTrigger OnItemTrigger;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageAIComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	VoyageCharacterType CharacterType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageTolerance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<VoyageCharacterType, float> DamageToleranceMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AggressiveTowardsCharacterTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FriendlyTowardsCharacterTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ShareThreatWithCharacterTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ShareThreatDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSoftObjectPtr<AActor>, float> ThreatMap;

	UPROPERTY(BlueprintAssignable)
	FVoyageAIComponentOnThreatAdded OnThreatAdded;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageAIPerceptionComponent : public UAIPerceptionComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAbilityData : public UDataAsset
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageActionButtonWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UButton* ActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ActionText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USizeBox* IconSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ActionIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ActionRequirements;

	UPROPERTY(BlueprintAssignable)
	FVoyageActionButtonWidgetOnButtonAction OnButtonAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActionID;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageActorInputInterfaceComponent : public UActorComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageAdjustGrabBoxComponent : public UBoxComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator AngularLimits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LinearLimits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Mass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AdjustSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnlyDelegates;

	UPROPERTY(BlueprintAssignable)
	FVoyageAdjustGrabBoxComponentOnForceApplied OnForceApplied;

	UPROPERTY(BlueprintAssignable)
	FVoyageAdjustGrabBoxComponentOnTorqueApplied OnTorqueApplied;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAnalyticsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageAnchorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FVoyageAnchorComponentOnAnchorDropped OnAnchorDropped;

	UPROPERTY(BlueprintAssignable)
	FVoyageAnchorComponentOnAnchorLifted OnAnchorLifted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AnchorDropped;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageArrowComponent : public UArrowComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FSoftObjectPath> LoadedSoftObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UObject*> LoadedSoftObjectReferences;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAssetUserDataPriorityFilter : public UAssetUserData
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageAudioEffectSubsystem : public UAudioEngineSubsystem
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBackBufferCapture : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBarDropValidator : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPrimaryAssetType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DescriptionFooter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGameVersionRange VersionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExcludeFromDistribution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExcludeFromDemo;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageBaseEventComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBaseEventLogic*> EventLogics;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseEventLogic : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageBaseInventoryComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageInventoryType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPrimaryAssetType> AcceptedPrimaryAssetTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UVoyageItem>> AcceptedItemSubClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EVoyageItemCategory> AcceptedItemCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Capacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreMaxStackSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageInventoryAccessType Access;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowEdit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowSorting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowFiltering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowSearching;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemCategoryAsset*> DepositAllCategoryFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProximityDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageIconPaletteData* IconPaletteData;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryIndexRemap OnInventoryIndexRemap;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryChanged OnInventoryChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryAdd OnInventoryAdd;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryRemove OnInventoryRemove;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventorySlotAdd OnInventorySlotAdd;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventorySlotRemoved OnInventorySlotRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventorySlotPreRemoved OnInventorySlotPreRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventorySlotChanged OnInventorySlotChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryNameUpdated OnInventoryNameUpdated;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventorySlotFlagsChanged OnInventorySlotFlagsChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryColorChanged OnInventoryColorChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryAllowNearbyQueryChanged OnInventoryAllowNearbyQueryChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryAutoCloseWhenEmptyChanged OnInventoryAutoCloseWhenEmptyChanged;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseInventoryComponentOnInventoryIconChanged OnInventoryIconChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageItemSerialize> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowNearbyQueries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoCloseHudWhenEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PrimaryIconIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SecondaryIconIndex;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseObjectListEntryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* NameTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* NavigationContainerRootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetSwitcher* SubWidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTabControlWidget* SubTabControlWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UScrollBox* ContentScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ContentScrollControlRoot;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnPreWidgetShow OnPreWidgetShow;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnPostWidgetShow OnPostWidgetShow;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnPreWidgetRemoved OnPreWidgetRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnPostWidgetRemoved OnPostWidgetRemoved;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnRequestRemoveFromParent OnRequestRemoveFromParent;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnRevealAnimationStarted OnRevealAnimationStarted;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnRevealAnimationFinished OnRevealAnimationFinished;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnHideAnimationStarted OnHideAnimationStarted;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnHideAnimationFinished OnHideAnimationFinished;

	UPROPERTY(BlueprintAssignable)
	FVoyageBaseUserWidgetOnWidgetPersistentDataChanged OnWidgetPersistentDataChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerData NavigationContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DesiredZOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayerScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveWidgetAfterHideAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoPlayContentAfterReveal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoRemoveAfterContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ContentScrollPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ContentScrollStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowContentScrollWithStick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowContentScrollWithPrevAndNext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowContentScrollWithZoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseChildContentScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ContentScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bContentScrollUpOnFocusChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bContentScrollByHover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCinematicInputState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInputState CinematicInputState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bConsumeNavigationInputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bConsumeBackNavigationInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageContextMenuWidget> ContextMenuClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageContextMenuAction*> ContextMenuActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EUINavigationInputType, int32> NavigationToContextMenuActionMapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputMappingContext* NavigationMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* RevealAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HideAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* ContentAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWidgetSoundData* SoundData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideBackNavigation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WidgetPersistentKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUpdatePersistentGlobally;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBindToPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNotifyChildrenOnPawnAssignment;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBitMaskBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBlueprintQuestLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBlueprintUIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageBoatRotorComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationSpeed;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageBoatRudderComponent : public USceneComponent
{
	GENERATED_BODY()

public:
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBuildInfoEntryObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBuildChangeInfo Info;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBuildInfoEntryWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TypeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageBuildInfoWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideIfNoData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowDateText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHeaderText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBodyText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowFooterText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBuildInfoEntryWidget> InfoWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UListView* EntryListView;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BuildNameTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* VersionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DateTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HeaderTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* BodyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* FooterTB;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageBuoyancyTimerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Sinktime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutOfWaterTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Timer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UBuoyancyComponent> BuoyancyComponent;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageButtonInfoContainerWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* RootPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ContextAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UInputAction*> InputActions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageButtonInfoWidget> ButtonInfoWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputPlatformType, UVoyageInputPlatformConfig*> PlatformConfigurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> ButtonHorizontalAlightment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> ButtonVerticalAlightment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, FText> ChordActionPrefix;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* ErrorIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* EmptyIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, FText> InputActionTextOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, FText> InputActionSuffixTextOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputDeviceCondition ShowPrimaryKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputDeviceCondition ShowSecondaryKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowActionTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin Spacing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoUpdateKeyRebindings;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageButtonInfoWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* PrimaryRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* SecondaryRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* PrimaryKeyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* SecondaryKeyTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* DescriptionErrorTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ButtonImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* ButtonImageSecondary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ProgressBarSecondary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* HoverAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSimplifiedNumbers;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageCableComponent : public UMeshComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttachStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttachEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference AttachEndTo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttachEndToSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableLengthCurrent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumSegments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SubstepTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SubSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SolverIterations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ConstraintMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Drag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InternalFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StiffnessMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttachmentStiffnessMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSubstepping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSkipCableUpdateWhenNotVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAttachNextParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WindStrength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableCableToCableCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableWakeUp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDisableSimulation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionFriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionFrictionStatic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TessellationMultiplierMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TessellationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CableForce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableGravityScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CableWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumSides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TileMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Velocity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCableParticle> Particles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttackImpulseMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<AActor*> IgnoreActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USceneComponent*> SnapComponents;

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class UPrimitiveComponent>, FTransform> ComponentTransforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* OverlapActor;
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class VOYAGE_API UVoyageCassetteComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoPlayCassette;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseAttenuationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StaticRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAffectAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAffectOverlapped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<ECollisionChannel>> OverlapChannels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* SoundAttenuation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDrawNRTVisualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NRTVisualizationScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector NRTVisualizationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemCassetteAttachment* DefaultCassette;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseNRT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NRTInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PostProcessBlendSpeed;

	UPROPERTY(BlueprintAssignable)
	FVoyageCassetteComponentOnCassettePlaybackDelegate OnCassettePlaybackDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageCassetteComponentOnCassettePlaybackEndDelegate OnCassettePlaybackEndDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageCassetteComponentOnCassettePlayStateDelegate OnCassettePlayStateDelegate;

	UPROPERTY(BlueprintAssignable)
	FVoyageCassetteComponentOnCassetteChanged OnCassetteChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USphereComponent* AreaCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPostProcessComponent* PostProcessComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* CassetteSoundComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCassetteState CassetteState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CassettePlaybackTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemCassetteAttachment* CurrentCassette;
};

UCLASS(Blueprintable, BlueprintType)
class VOYAGE_API UVoyageCharacterBatteryWidget : public UVoyageBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* ChargeArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* ChargeProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* ChargeTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* HealthArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UProgressBar* HealthProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* HealthTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPanelWidget* TemperatureRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTextBlock* TemperatureTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBorder* TemperatureBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageExpWidget* ExpWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCharacterInfoWidget* InventoryInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowHealthPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowTemperaturePercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowResourcePercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowResourceDelta;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TemperatureBaseValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor TemperatureMinColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor TemperatureMidColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor TemperatureMaxColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageCharacterData> CharacterData;
};
