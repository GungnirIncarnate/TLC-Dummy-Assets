#pragma once

#include "VoyageCommon.h"
#include "VoyageStructs.generated.h"

USTRUCT(BlueprintType)
struct FAccessToken
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSuccess = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UserId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AccessToken = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ExpiresIn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TokenType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RefreshToken = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IdToken = {};

};

USTRUCT(BlueprintType)
struct FActivationSphere
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Activation = {};

};

USTRUCT(BlueprintType)
struct FActiveSoundData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SoundName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ComponentName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OwnerName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ObjectId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InstanceID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayOrder = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Volume = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlaybackTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMusic = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SoundClassName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaveInstanceDistance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float pitch = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float duration = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsStarted = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsPaused = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsStopping = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsFinished = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsOccluded = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReverb = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ResourceBytes = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsingSpatialization = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Attenuation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttenuationDistance = {};

};

USTRUCT(BlueprintType)
struct FActorGroups
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSet<uint32> Groups = {};

	UPROPERTY(EditAnywhere)
	TSet<TWeakObjectPtr<class AActor>> actors = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HasElectricity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HasElectricityLast = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasResourceConsumptionInterface = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsConsumptionDynamic = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> Consumption = {};

};

USTRUCT(BlueprintType)
struct FAttackImpulse
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FAttackInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<AActor*> actors = {};

};

USTRUCT(BlueprintType)
struct FAutoWeldInfo
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FBarDropValidateArguments
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LandedIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DraggedIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* DraggedComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* LandedComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryItem* DraggedWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInventoryItem* LandedWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseUserWidget* DraggedOuterWidget = {};

};

USTRUCT(BlueprintType)
struct FBarSlotConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBarSlotType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReadOnly = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHidden = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> SlotIcon = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OverrideSlotIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> WhitelistedPrimaryAssetTypes = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> BlacklistedPrimaryAssetTypes = {};

};

USTRUCT(BlueprintType)
struct FBuildChangeInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Desc = {};

};

USTRUCT(BlueprintType)
struct FBuildInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Version = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 date = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Body = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Footer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBuildChangeInfo> changelist = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FBuildChangeInfo> All = {};

};

USTRUCT(BlueprintType)
struct FCableParticleVoyage
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector position = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFree = {};

};

USTRUCT(BlueprintType)
struct FCharacterModifierData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ValueCurve = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* VelocityCurve = {};

};

USTRUCT(BlueprintType)
struct FCheckpointData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint32 ID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

};

USTRUCT(BlueprintType)
struct FComponentContainer
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FConnectionInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Actor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyagePhysicalSnapSocket*> ClosestArray = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintComponent* Constraint = {};

};

USTRUCT(BlueprintType)
struct FContextAwareAction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActionID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ActionName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* ActionIcon = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCategory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemCategory Category = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseItem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount = {};

};

USTRUCT(BlueprintType)
struct FDatabaseFieldValue
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDatabaseFieldType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Boolean = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Integer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Double = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime DateTime = {};

};

USTRUCT(BlueprintType)
struct FDatabaseMapField
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FDatabaseFieldValue> Fields = {};

};

USTRUCT(BlueprintType)
struct FDynamicCollisionComponentInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageDynamicCollisionComponent> Comp = {};

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<class UPrimitiveComponent>, FAutoWeldInfo> AutoweldPrimitives = {};

};

USTRUCT(BlueprintType)
struct FEngineStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawFrameTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawGameThreadTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawGameThreadWaitTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawRenderThreadTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawRenderThreadWaitTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawRenderThreadTimeTotal = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawRHITTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RawInputLatencyTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FPS = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrameGeneratedFPS = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrameTimeMs = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GPUFrameTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint RawRenderResolution = {};

};

USTRUCT(BlueprintType)
struct FEquipmentComponentInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UActorComponent> ComponentClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UActorComponent* ComponentTemplate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference ComponentReference = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Shared = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AttachToCharacter = {};

};

USTRUCT(BlueprintType)
struct FFocusableActivateData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPrimaryAction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bModifier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMouseInput = {};

};

USTRUCT(BlueprintType)
struct FFocusableAnimData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartAtTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumLoopsToPlay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PlaybackSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRestoreState = {};

};

USTRUCT(BlueprintType)
struct FFocusableGroupLink
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GroupKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Whitelist = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Blacklist = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInverse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFocusableGroupStateBehviour Behaviour = {};

};

USTRUCT(BlueprintType)
struct FGameDataAssetSync
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssetID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description = {};

};

USTRUCT(BlueprintType)
struct FGlobalContextAwareConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInventoryOperation = {};

};

USTRUCT(BlueprintType)
struct FGridConnectionVisualInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* SourceModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* TargetModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* SourceSocket = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UModuleSocketComponent* TargetSocket = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TransferRatePerSecond = {};

};

USTRUCT(BlueprintType)
struct FGridModuleGroupVisualInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 GroupId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GroupKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageModuleComponent*> Members = {};

};

USTRUCT(BlueprintType)
struct FGridNodeVisualInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* Module = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageModuleComponent*> Modules = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D position = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseModuleManagementWidget* ManagementWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBaseModuleManagementWidget*> SwitchManagementWidgets = {};

};

USTRUCT(BlueprintType)
struct FGridResourceSummaryInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double TotalAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double TotalCapacity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double TotalDeltaPerSecond = {};

};

USTRUCT(BlueprintType)
struct FInputACti
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FInputState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StackName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceGameOnly = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMouseCursor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMouseLockMode MouseLockMode = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideCursorDuringCapture = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WidgetConsumesInputs = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EInputControlContextType, EInputControlBindType> CustomContext = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UWidget> InWidgetToFocus = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusWidgetData* FocusWidgetData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

};

USTRUCT(BlueprintType)
struct FInventoryDropActionState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageBaseInventoryComponent> SourceInventory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageItem> Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Slot = {};

};

USTRUCT(BlueprintType)
struct FListBoxOption
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CustomString = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* OptionImage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideTextWhenImageSet = {};

};

USTRUCT(BlueprintType)
struct FLocationSync
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Coordinates = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Extent = {};

};

USTRUCT(BlueprintType)
struct FMessageContent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UniqueContentKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Group = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GroupSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Body = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Footer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageGroupTextValueSource GroupHeaderTextValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageGroupTextValueSource GroupBodyTextValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageGroupTextValueSource GroupFooterTextValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText GroupHeaderText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText GroupBodyText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText GroupFooterText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowIconWhenGrouped = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float duration = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Delay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowImage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageMessageWidget> SubClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UTexture2D> Image = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMatchImageSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DesiredImageWidth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DesiredImageHeight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CustomCounter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageInputContextAsset* ActionContext = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UInputAction*, FText> Actions = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UUserWidget>> ExtensionSubClasses = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText HeaderFormatting = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BodyFormatting = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText FooterFormatting = {};

};

USTRUCT(BlueprintType)
struct FModuleConfigData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ModuleResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseModuleManagementWidget> ManagementWidgetOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoStartModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleType ModuleType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ModulePriority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleProductionType ModuleResourceProduction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAcceptResourceOffer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAcceptResourceOfferOff = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAcceptResourceOfferProduction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ResourceBandwidthOutput = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ResourceBandwidthInput = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double DefaultResourceAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MaxResourceAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ResourceConsumptionStandby = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ResourceConsumptionOn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStandbyWhenOnTurnOff = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStandbyWhenOnTurnOn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBalanceResourceDistributionInput = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBalanceResourceDistributionOutput = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BalanceLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShareResources = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShareResourcesOff = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowOverconsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowOverflow = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInstancedGroupId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGroupChildren = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExcludeFromChildrenGroup = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TrackingIntervalInSeconds = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DurabilityReductionPerWorkload = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> Requirements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> RequirementsFills = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowScanText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowOwnerInventoryUsage = {};

};

USTRUCT(BlueprintType)
struct FModuleCustomRequirement
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequirementMet = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Required = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USceneComponent> TargetComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UObject> TargetObject = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Flags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Persistent = {};

};

USTRUCT(BlueprintType)
struct FModuleRuntimeRequirements
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModuleRuntimeRequirementType RequirementType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFilled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> Requirements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> RequirementsFills = {};

};

USTRUCT(BlueprintType)
struct FModuleSocketBandwidth
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Input = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Output = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemBandwidthInKg = {};

};

USTRUCT(BlueprintType)
struct FModuleSocketIOData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleSocketType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FModuleSocketBandwidth Bandwidth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreCableBandwidth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleSocketType DefaultDirection = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBalanceResourceLevels = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMatchByResourceCategory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceCategory ResourceCategory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<EModuleResourceType> AdditionalAcceptedResourceTypes = {};

};

USTRUCT(BlueprintType)
struct FOverrideModuleResources
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideInitialLoad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LoadPercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideMaxCapacity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCapacity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideInitialDurability = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Durability = {};

};

USTRUCT(BlueprintType)
struct FPersistentActorIndicator
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWidgetComponentData* WidgetData = {};

};

USTRUCT(BlueprintType)
struct FPersistentContainer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyagePersistentActorComponent*> Comps = {};

};

USTRUCT(BlueprintType)
struct FPersistentRuntimeActorList
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TMap<uint64, TWeakObjectPtr<AActor>> actors = {};

};

USTRUCT(BlueprintType)
struct FPersistentSubsystem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Version = {};

};

USTRUCT(BlueprintType)
struct FPersistentSubsystemList
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSubclassOf<class USubsystem>, FPersistentSubsystem> Subsystems = {};

};

USTRUCT(BlueprintType)
struct FPersistentWorldComponentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteData = {};

};

USTRUCT(BlueprintType)
struct FPlayerInputInterfaceAction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UObject>> ReferencedObjects = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UInputAction* InputAction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Category = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TextError = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAppendTargetName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerOnce = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CrosshairPriority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TriggerTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TriggerProgress = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* CrosshairWidgetData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D CrosshairPosition = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerInputInterfaceActionType Type = {};

};

USTRUCT(BlueprintType)
struct FPortalCameraFade
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FromAlpha = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ToAlpha = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float duration = {};

};

USTRUCT(BlueprintType)
struct FPrimitiveInfo
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FRepairResources
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* RepairItem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RepairEfficiency = {};

};

USTRUCT(BlueprintType)
struct FResourceIndicatorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSetColors = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ColorLow = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ColorFull = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSetGlow = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Glow = {};

};

USTRUCT(BlueprintType)
struct FSkeletalMeshInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMesh = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BuoyancyMul = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DampingMul = {};

};

USTRUCT(BlueprintType)
struct FSlotComponentArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UActorComponent*, bool> Components = {};

};

USTRUCT(BlueprintType)
struct FSlotSharedComponent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UActorComponent* Component = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Counter = {};

};

USTRUCT(BlueprintType)
struct FSocketAlignmentResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform AlignedRootTransform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* WorldTargetPrimitive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* SourceAnchorPrimitive = {};

};

USTRUCT(BlueprintType)
struct FSocketRoute
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> TargetModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UModuleSocketComponent> TargetSocket = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UModuleSocketComponent*> Path = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtualShareToGroup = {};

};

USTRUCT(BlueprintType)
struct FSpawnActorCallback
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FStepContextAwareCondition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseCustomText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CustomText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageOverlayWidgetData* OverlayWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FContextAwareAction> Actions = {};

};

USTRUCT(BlueprintType)
struct FSurvivalResourceModifierData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMuted = {};

};

USTRUCT(BlueprintType)
struct FTabControlConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Key = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETextTransformPolicy TransformPolicy = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Icon = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class UVoyageBaseBadgeWidget>> BadgeWidgetClasses = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 HideOnPlatforms = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnlyWithKeyboardAndMouse = {};

};

USTRUCT(BlueprintType)
struct FThrottledCall
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FUnderWaterGeneratedTileInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageLevelInstanceComponent*> LevelInstances = {};

};

USTRUCT(BlueprintType)
struct FUnderWaterTileInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UWorld> LevelToLoad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Chance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TileSize = {};

};

USTRUCT(BlueprintType)
struct FUnderWaterTileOverride
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UWorld> LevelToLoad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Offset = {};

};

USTRUCT(BlueprintType)
struct FVelocityInfo
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageAbilityConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UEquipmentAbilityComponent> AbilityComponentClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseAbilityData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageAbilityData* Ability = {};

};

USTRUCT(BlueprintType)
struct FVoyageAbilitySfxData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* AbilityActiveSound = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* AbilityMetaSound = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* AbilityActivationSound = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ImpactSound = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ImpactMetaSound = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* ActivationSystem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnSystemForEachActivation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ActivationSystemRotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ActivationSystemScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* CustomSystem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* ChargeSystem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* ImpactSystem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraSystem* AttackSystem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UCameraShakeBase> ChargeCameraShake = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChargeCamereShakeMultiplier = {};

};

USTRUCT(BlueprintType)
struct FVoyageAchievementCompare
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageStatCompareType CompareType = {};

};

USTRUCT(BlueprintType)
struct FVoyageAchievementRequirement
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageStatConditionType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageStat* Stat = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAchievementCompare Compare = {};

};

USTRUCT(BlueprintType)
struct FVoyageAnalyticEvent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveEvent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime Timestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> Parameters = {};

};

USTRUCT(BlueprintType)
struct FVoyageAudioComponentInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> AudioComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> OtherComponent = {};

};

USTRUCT(BlueprintType)
struct FVoyageBasedPosition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> base = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector position = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector OriginalWorldPosition = {};

};

USTRUCT(BlueprintType)
struct FVoyageBenchmarkData
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageBenchmarkResult
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageBindablePropertyGroupRule
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SourcePropertyName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInverse = {};

};

USTRUCT(BlueprintType)
struct FVoyageBindablePropertyInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Sort = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OverridePropClassName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageFocusableWidget> OverrideWidgetClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsNumeric = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsFloat = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinFractionDecimals = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFractionDecimals = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StepValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnitMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText UnitText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePropertyEditorGroupType Grouping = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GroupName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageBindablePropertyGroupRule> GroupRules = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePropertyEditorGroupStateType GroupState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> LinkedProperties = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageContextMenuWidget> ContextMenuClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasSubText = {};

};

USTRUCT(BlueprintType)
struct FVoyageBodyHandle
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageCableParticle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector position = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector OldPosition = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector3f Velocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> MovementBase = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> Component = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ComponentTimer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Impulse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFree = {};

};

USTRUCT(BlueprintType)
struct FVoyageCartridgeMusicData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCartridgeMusicType MusicType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> Music = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteeActionState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CommitteeKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StateKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVisible = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActionIndex = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteeDataAssetInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItem*> DataAssets = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteePackageMetaData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCommitteePackageType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TransportTimeInSeconds = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* SourceObject = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteeProgressRequirements
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinPlayerLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinGrownHumans = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinHumansInSpace = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedEventEndInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Value = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedEventPropertyInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString meta = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Value = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedSocketsCache
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UModuleSocketComponent*, UModuleSocketComponent*> ConnectedSockets = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UModuleSocketComponent*> ConnectedSocketsArray = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCached = {};

};

USTRUCT(BlueprintType)
struct FVoyageContextMenuBindState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAvailable = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

};

USTRUCT(BlueprintType)
struct FVoyageContextMenuDelegateWrapper
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageContinousSoundInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TMap<uint64, FVoyageAudioComponentInfo> AttachedAudio = {};

};

USTRUCT(BlueprintType)
struct FVoyageControllerInputOverlayData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class APawn> PawnSubClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> OverlayName = {};

};

USTRUCT(BlueprintType)
struct FVoyageCraftingLocationGeneratorResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSuccess = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* AttachToComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText FailureReason = {};

};

USTRUCT(BlueprintType)
struct FVoyageCreditsBlockData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Lines = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Image = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImageScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AspectOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin Margin = {};

};

USTRUCT(BlueprintType)
struct FVoyageCreditsData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCreditsBlockData> Blocks = {};

};

USTRUCT(BlueprintType)
struct FVoyageCustomGameUserSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeMaster = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeSfx = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeMusic = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeMusicCassette = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VolumeVO = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvertVerticalMouse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvertHorizontalMouse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvertVerticalGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInvertHorizontalGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SprintMode = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CrouchMode = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionBlurAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisplayGamma = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnlineFeatures = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseMetricUnitSystem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFirstPersonBoatControls = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SensitivityMouse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ADSSensitivityMouse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VerticalSensitivityGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HorizontalSensitivityGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VerticalADSSensitivityGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HorizontalADSSensitivityGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AccelerationGamepad = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResolutionScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLanguageType LanguageType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVideoShowFps = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVideoShowFrameTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableHDR = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HDRLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HDRUILevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageUpscalingMethod UpscalingMethod = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFrameGenerationMethod FrameGenerationMethod = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FrameGenerationModeDLSS = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DLSSQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DLSSReflex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NISQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NISSharpness = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FSRQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FrameGenerationModeFSR = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FSRSharpness = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AntiLag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 XeSSQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FrameGenerationModeXeSS = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 XeLL = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FOV = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageInterfaceMode InterfaceGlobal = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoPickup = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveHeadBob = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bConfirmBuild = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudHolster = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudQuests = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudKeybinds = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudHolsterKeybinds = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudCharacter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudPrimaryMessages = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudSecondaryMessages = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudTertiaryMessages = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudActions = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudCrosshair = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudActionBar = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudQueue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudActionTexts = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceHudLocators = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceWorldMarkers = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceBoatCompass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceBoatAnctor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceBoatSpeedometer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInterfaceBoatCharacter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageColorBlindMode ColorBlindMode = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ColorBlindStrength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForceFeedbackScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AutoSaveInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UIScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOverrideOverlayUIMargin = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverrideOverlayUIMarginSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMotionComfortEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortLineThickness = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMotionComfortMarkerEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMotionComfortMarker MotionComfortMarker = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortMarkerSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortMarkerGap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortMarkerOffsetX = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortMarkerOffsetY = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMotionComfortFrameEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMotionComfortFrame MotionComfortFrame = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortFrameInset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortFrameDotSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MotionComfortFrameSegments = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortFrameTickLength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMotionComfortHorizonEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMotionComfortHorizon MotionComfortHorizon = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortHorizonOffset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortHorizonLength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMotionComfortHorizonCenterTick = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMotionComfortHorizonClampToEdge = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMotionComfortColor MotionComfortColor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor MotionComfortCustomColor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MotionComfortOpacity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMotionComfortOutline MotionComfortOutline = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSubtitles = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SubtitleFontSizeMul = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageGamepadButtonStyle GamepadButtonStyle = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserQualityPreset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserViewDistanceQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserAntiAliasingQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserShadowQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserGlobalIlluminationQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserReflectionQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserPostProcessQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserTextureQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserEffectsQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserFoliageQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserShadingQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UserLandscapeQuality = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ResolutionAspectRatio = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseMegaLights = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRayTracing = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRayTraceReflections = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRayTraceShadows = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRayTraceLumen = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InteractHoldDuration = {};

};

USTRUCT(BlueprintType)
struct FVoyageCustomModuleItemConversion
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Input = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType OutputType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OutputMultiplier = {};

};

USTRUCT(BlueprintType)
struct FVoyageCustomModuleResourceConversion
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> Inputs = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> Outputs = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequiresPower = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequired = {};

};

USTRUCT(BlueprintType)
struct FVoyageDamageResistance
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class AActor>> FilterBySource = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECombatDamageType, float> DamageTypeResistanceReduction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECombatDamageType, float> DamageTypeResistancePercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GenericReduction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GenericResistance = {};

};

USTRUCT(BlueprintType)
struct FVoyageDataBlobData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FString> MetaData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> BlobData = {};

};

USTRUCT(BlueprintType)
struct FVoyageDataLayerState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDataLayerRuntimeState State = {};

};

USTRUCT(BlueprintType)
struct FVoyageDbBaseData
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageDbDataSettings : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DBName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* properties = {};

};

USTRUCT(BlueprintType)
struct FVoyageDbFieldDataProperties : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DBName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Modifier = {};

};

USTRUCT(BlueprintType)
struct FVoyageDialogConfirmConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDialogResultType Result = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CustomIndex = {};

};

USTRUCT(BlueprintType)
struct FVoyageDialogData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString String = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Context = {};

};

USTRUCT(BlueprintType)
struct FVoyageDialogResultData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString String = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector VectorValue = {};

};

USTRUCT(BlueprintType)
struct FVoyageDiscoveryArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageBaseDataAsset*> DataAssets = {};

};

USTRUCT(BlueprintType)
struct FVoyageDiscoveryData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPrimaryAssetId> DataAssets = {};

};

USTRUCT(BlueprintType)
struct FVoyageDoorVariationData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference TargetComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStreamableRenderAsset> RenderAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, TSoftObjectPtr<class UMaterialInterface>> MaterialOverridesBySlotName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, TSoftObjectPtr<UMaterialInterface>> MaterialOverridesBySlotIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVisible = {};

};

USTRUCT(BlueprintType)
struct FVoyageDummyTerminalData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LineText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LineSuffixText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Indent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLineBreakBefore = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LinePrefix = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseFillCharacter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DesiredCharacterAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FillCharacter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETextTransformPolicy TransformPolicy = {};

};

USTRUCT(BlueprintType)
struct FVoyageDurabilityIndicatorDamagePoint
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Time = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 ComponentHash = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BoneName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UPrimitiveComponent> PrimitiveComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UNiagaraComponent* NiagaraComponent = {};

};

USTRUCT(BlueprintType)
struct FVoyageDurationAttack
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float duration = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Damage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiusMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpulseOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Interval = {};

};

USTRUCT(BlueprintType)
struct FVoyageEnhancerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Points = {};

};

USTRUCT(BlueprintType)
struct FVoyageEnhancerInfoLogicResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FText> Values = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LongText = {};

};

USTRUCT(BlueprintType)
struct FVoyageEquipmentAbilityActivationArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Origin = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Direction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActivationMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> InstigatorController = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> InstigatorActor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AttackID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHitResult TraceResult = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActivationIndex = {};

};

USTRUCT(BlueprintType)
struct FVoyageEquipmentAbilityChargeResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldActivate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldRelease = {};

};

USTRUCT(BlueprintType)
struct FVoyageEquipmentAttachmentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* AttachmentComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageEquipmentModifierComponent*> ModifierComponents = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItemEquipmentAttachment* AttachmentItem = {};

};

USTRUCT(BlueprintType)
struct FVoyageEquipmentInterpStateConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequireHold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExclusiveState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InterpInSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InterpOutSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraInterpSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageEquipmentInteractComponent> InteractClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* EnterStateSound = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundBase* ExitStateSound = {};

};

USTRUCT(BlueprintType)
struct FVoyageExperienceArguments
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageExperienceType Source = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UObject> SourceObject = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SourceLocation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSourceLocation = {};

};

USTRUCT(BlueprintType)
struct FVoyageExperienceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageExperienceType ExpType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BaseExp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level = {};

};

USTRUCT(BlueprintType)
struct FVoyageFabricatorCalculationResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> ItemsRequired = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> MaterialsRequired = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> TotalItems = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> LocalItems = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeRequirementTotal = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeRequirement = {};

};

USTRUCT(BlueprintType)
struct FVoyageFabricatorUsedComponents
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> Items = {};

};

USTRUCT(BlueprintType)
struct FVoyageFastUpdateThrottleInfo
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageFlags
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Value = {};

};

USTRUCT(BlueprintType)
struct FVoyageFloat16
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageFloat3Packed
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageFloat3Packed16
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageFluidImpulse
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Direction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Strength = {};

};

USTRUCT(BlueprintType)
struct FVoyageFocusableContainerEscape
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Left = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Right = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Up = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Down = {};

};

USTRUCT(BlueprintType)
struct FVoyageFocusableWidgetConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDrag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAllowDrop = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanFocus = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanHover = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnHover = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanSelect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnSelect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFocusOnActivation = {};

};

USTRUCT(BlueprintType)
struct FVoyageFrameAttacks
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageGPUInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 IdLow = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 IdHigh = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DedicatedVideoMemory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DedicatedSystemMemory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SharedSystemMemory = {};

};

USTRUCT(BlueprintType)
struct FVoyageGameProgressConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageExperienceType, int32> ExpTypeExperience = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageExperienceType, float> ExpGlobalMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageItemQuality, float> ExpLootQualityMultplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetType, float> ExpLootAssetMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageKillExperienceType, float> ExpKillMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageDiscoveryGroup, float> ExpDiscoveryMultipliers = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageItemQuality, float> ExpScanMultipliers = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ExpScanBase = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExpScanFirstMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* CharacterLevels = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UDataTable* CharacterSecurityLevels = {};

};

USTRUCT(BlueprintType)
struct FVoyageGameProgressLevelRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ExperienceRequirement = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UnlockedSkillTier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GrantedSkillPoints = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GrantedEnhancerPoints = {};

};

USTRUCT(BlueprintType)
struct FVoyageGameProgressSecurityLevelRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LevelMin = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LevelMax = {};

};

USTRUCT(BlueprintType)
struct FVoyageGameVersion
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MajorVersion = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinorVersion = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PatchVersion = {};

};

USTRUCT(BlueprintType)
struct FVoyageGameVersionData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasDiscoveryVersion = {};

};

USTRUCT(BlueprintType)
struct FVoyageGameVersionRange
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGameVersion InitialVersion = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasSunsetVersion = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGameVersion SunsetVersion = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletPSOLocatorEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HashKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLocatorType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtual = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletTestConfigPSOCache
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnActors = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRecursiveClasses = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRecursivePaths = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> IgnoreAssetPaths = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ClassNames = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ClassPaths = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PackageNames = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> PackagePaths = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnsPerTick = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActorLifetime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxRows = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxColumns = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Offset = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletTestConfigPSOLocators
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> LocatorTypes = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> IgnoreLocators = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIncludeVirtualLocators = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxLocators = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSortByDistance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCellCoverage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinLocatorDistance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartDelay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinStreamingWait = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StreamingTimeout = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TeleportHeightOffset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DwellTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DwellTimeout = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DwellSettleFrames = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRotateView = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ViewPitch = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSpectatorPawn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SpectatorPawnClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressLogInterval = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletValueCompareResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Value1 = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Value2 = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Suffix = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletValueFloat
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ErrorTolerance = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletValueInt
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 ErrorTolerance = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletValueVector
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float X = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Y = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Z = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ErrorTolerance = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletValues
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> StringValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageGauntletValueInt> IntValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageGauntletValueFloat> FloatValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageGauntletValueVector> VectorValues = {};

};

USTRUCT(BlueprintType)
struct FVoyageHIDInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DeviceName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VendorID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ProductId = {};

};

USTRUCT(BlueprintType)
struct FVoyageHUDLine
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D StartPosition = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D EndPosition = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Thickness = {};

};

USTRUCT(BlueprintType)
struct FVoyageHUDPersistentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IntValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StringValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsString = {};

};

USTRUCT(BlueprintType)
struct FVoyageHUDTransientData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IntValue = {};

};

USTRUCT(BlueprintType)
struct FVoyageHolsterSlotConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageHolsterSlotType Type = {};

};

USTRUCT(BlueprintType)
struct FVoyageHolsterSlotOverride
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageItemBaseEquipment> Item = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanDescendantInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Seed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime BirthDate = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanDisplaySlider
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanGrowResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageResultType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UniqueID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Timestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 DeliveryTimestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> Traits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, double> properties = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UniqueID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FirstName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MiddleName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LastName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime BirthDate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime SpaceDate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Profession = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FText> Committees = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageHumanDescendantInfo> Children = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageResultType LatestResultType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Traits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Physical = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Mental = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanPropertyModifier
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ValueMax = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageHumanPropertyModifierType Type = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanPropertyRequirement
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageHumanPropertyRequirementType Type = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulationCommittee
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FString> Members = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulationCommitteeProgressRequirements
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinPlayerLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinGrownHumans = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinHumansInSpace = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulationCommitteeQuestInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RevealAfterSecondsFromActivation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* QuestChain = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulationTraitInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPercentageBenefit = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPercentageDecay = {};

};

USTRUCT(BlueprintType)
struct FVoyageImpactEffect
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> ImpactEffect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> ImpactEffectProjectile = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ImpactEffectActorClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ImpactEffectActorClassProjectile = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMaterialInterface> ImpactDecalMaterial = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMaterialInterface> ImpactDecalMaterialProjectile = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ImpactDecalSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ImpactDecalSizeAddPerImpulse = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpactDecalLifeSpan = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpactDecalFadeTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NoiseLoudness = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NoiseMaxRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NoiseTag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> ImpactAudio = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> ImpactAudioProjectile = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USoundWave*> ImpactAudioWaveAssetsLight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USoundWave*> ImpactAudioWaveAssetsHard = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> ContinousAudio = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundWave> ContinousAudioDragWaveAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundWave> ContinousAudioRollWaveAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpulseDivider = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpulseThreshold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

};

USTRUCT(BlueprintType)
struct FVoyageImpactMap
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EPhysicalSurface>, FVoyageImpactEffect> ImpactEffects = {};

};

USTRUCT(BlueprintType)
struct FVoyageInGameDynamicLayerAlignment
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageInGameDynamicLayerAlignmentPreset Preset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D PresetPositionOffset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnchorData ManualAnchor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CanvasZOrder = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanvasAutoSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D CanvasDesiredSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NamedSlotName = {};

};

USTRUCT(BlueprintType)
struct FVoyageInGameDynamicLayerArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LayerName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UUserWidget> WidgetClass = {};

};

USTRUCT(BlueprintType)
struct FVoyageInputDeviceState
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageInventoryItemDropEvent
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ScreenPosition = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ScreenDelta = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemConsumableUsefulResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseful = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemDataArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemDropVariation
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStreamableRenderAsset> RenderAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UVoyagePhysicalMaterial> PhysicalMaterialOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, TSoftObjectPtr<class UMaterialInterface>> MaterialOverridesBySlotName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, TSoftObjectPtr<UMaterialInterface>> MaterialOverridesBySlotIndex = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemNetworkRequest
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemObjectArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class UObject>> Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemSelectorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AVoyagePlayerController> Instigator = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* OwningWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* SelectedWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageBaseInventoryComponent> SourceInventory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageItem> Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ContextIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEmptySlot = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemSpawnSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LinearVelocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AngularVelocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoCollectRadius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceAutoCollect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bResolveOverlaps = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAwake = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSimulatePhysics = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BoxHalfExtents = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemUsageArguments
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* SourceInventory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SlotIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlaySound = {};

};

USTRUCT(BlueprintType)
struct FVoyageJoinUpdateObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UObject> Object = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequiresGameThread = {};

};

USTRUCT(BlueprintType)
struct FVoyageLevelSequenceSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageBaseUserWidget> OverlayWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMovieSceneSequencePlaybackSettings PlaybackSettings = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector PlaybackTransformOrigin = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLevelSequenceCameraSettings CameraSettings = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPlaybackTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundSubmix* SoundSubmix = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundEffectSubmixPreset* SoundEffectSubmixPreset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundSubmix* EndRemoveSoundSubmix = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClearAllSubmixEffects = {};

};

USTRUCT(BlueprintType)
struct FVoyageLightInfo
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageLocalPlayerStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, double> Achievements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, int32> Stats = {};

};

USTRUCT(BlueprintType)
struct FVoyageLocationPersistentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UVoyageLocationStatus Status = {};

};

USTRUCT(BlueprintType)
struct FVoyageLocatorConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLocatorType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVirtual = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector VirtualLocation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D VisibilityRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ArrivalDistance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseParentRotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowInHud = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowIconInHud = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowGroupInHud = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowNameInHud = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowDistanceInHud = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowInMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowIconInMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowGroupInMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowNameInMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ShowDistanceInMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForwardLineLength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTrackArrival = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ArrivalFlags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTrackDeparture = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 DepartureFlags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTrackLocation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> CustomShape = {};

};

USTRUCT(BlueprintType)
struct FVoyageLocatorProperties
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Group = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Address = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 InitialFlags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageMusicData* Music = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageQuest*> Quests = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseConfigAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLocatorConfig Config = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocatorPropertyData* ConfigAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HashKey = {};

};

USTRUCT(BlueprintType)
struct FVoyageLootArgument
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLootAll = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowNotifications = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int32> InventorySlots = {};

};

USTRUCT(BlueprintType)
struct FVoyageLootItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UVoyageItem> ItemType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMinimum = {};

};

USTRUCT(BlueprintType)
struct FVoyageLootItemTables
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageLootItemTable*, float> ItemTables = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootTableSelector Selector = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMinimum = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMaximum = {};

};

USTRUCT(BlueprintType)
struct FVoyageLootItems
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageLootItem> Items = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootTableSelector Selector = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMinimum = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMaximum = {};

};

USTRUCT(BlueprintType)
struct FVoyageLootResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSuccess = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> LootedItems = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> FailedItems = {};

};

USTRUCT(BlueprintType)
struct FVoyageMemoryInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UsedGiB = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalGiB = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UsedPercent = {};

};

USTRUCT(BlueprintType)
struct FVoyageMenuFocusArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ContainerIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CursorIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FocusIdentifier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageFocusableWidget* NewFocus = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bByUser = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bByHover = {};

};

USTRUCT(BlueprintType)
struct FVoyageMeshCacheEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ScalarValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor VectorValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HashValue = {};

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> Materials = {};

};

USTRUCT(BlueprintType)
struct FVoyageMeshComponentCache
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UStaticMeshComponent*> StaticMeshes = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USkeletalMeshComponent*> SkeletalMeshes = {};

};

USTRUCT(BlueprintType)
struct FVoyageMeshScalarCache
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageMinMax
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float min = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float max = {};

};

USTRUCT(BlueprintType)
struct FVoyageMinimapIconOption
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush Brush = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Size = {};

};

USTRUCT(BlueprintType)
struct FVoyageModPakRecord
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PakPath = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FirstSeenBuild = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastSeenBuild = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime FirstSeenUtc = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime LastSeenUtc = {};

};

USTRUCT(BlueprintType)
struct FVoyageModularOutpostModuleConfiguration
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Optional = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> Module = {};

};

USTRUCT(BlueprintType)
struct FVoyageModularOutpostPath
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Length = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StartAtLength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> EndModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Target = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleDataType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Vector = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UObject> Object = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleDataFilter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSubclassOf<class AActor>> ActorType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSocketOnly = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleDataRef
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageModuleEngineProduction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ProductionType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceProduced = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleModifierData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProductionMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ConsumptionMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> ProductionMultiplierByResource = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> ConsumptionMultiplierByResource = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceCategory, float> ProductionMultiplierByResourceCategory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceCategory, float> ConsumptionMultiplierByResourceCategory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemConsumptionMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ItemProductionMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProductionSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDefault = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleQuestCondition
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenPowerOn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenPowerOff = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenBroken = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenRepaired = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenResources = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> DesiredResources = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenDesiredState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleState DesiredState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleState State = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bTriggerWhenActivated = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleReading
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Key = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalType Type = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleWidgetConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OverrideRootSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D OverrideItemSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPowerOverlay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowControls = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleWorkVisualization
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float VisualizationAmount = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleWorkVisualizationConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageModuleWorkloadVisualization Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceDeltaType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResourceDeltaThreshold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageModuleState, float> StateVisualizeValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStateRequiresPower = {};

};

USTRUCT(BlueprintType)
struct FVoyageMusicPlaybackArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageMusicPlaybackSource PlaybackSource = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumLoops = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float startTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bResetLoopIndex = {};

};

USTRUCT(BlueprintType)
struct FVoyageNearbyInventoryQueryResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* Inventory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> Items = {};

};

USTRUCT(BlueprintType)
struct FVoyageNumberFormattingOptions
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlwaysSign = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseGrouping = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERoundingMode> RoundingMode = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumIntegralDigits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumIntegralDigits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumFractionalDigits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumFractionalDigits = {};

};

USTRUCT(BlueprintType)
struct FVoyageOverlayMaterialInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* MaterialInstance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Counter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Fade = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Tagged = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UMeshComponent*> MeshComponents = {};

};

USTRUCT(BlueprintType)
struct FVoyageOverlayMaterialMap
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageOverlayMaterialInfo> Map = {};

};

USTRUCT(BlueprintType)
struct FVoyageOverlayValidatorResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsValid = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowResultText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ResultText = {};

};

USTRUCT(BlueprintType)
struct FVoyagePackedLocalTransform
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyagePackedTransform
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyagePaintPart
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UMaterialInterface> Material = {};

};

USTRUCT(BlueprintType)
struct FVoyagePaintSet
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyagePaintPart> Parts = {};

};

USTRUCT(BlueprintType)
struct FVoyagePaintSlotData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* OverrideMaterial = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* OriginalMaterial = {};

};

USTRUCT(BlueprintType)
struct FVoyagePaintSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SlotDisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> SlotIcon = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MaterialSlotName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PartName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePaintComponentRefType MeshReferenceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FComponentReference TargetMesh = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TargetMeshTag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TargetActorTag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewDistance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewPitch = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewYaw = {};

};

USTRUCT(BlueprintType)
struct FVoyagePendingStateData
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyagePersistentActorReferenceRedirection
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> ActorReference = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Tag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> TaggedActors = {};

};

USTRUCT(BlueprintType)
struct FVoyagePersistentActorReferences
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<uint64> actors = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlacedMapIcon
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName IconId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Location = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlantSimulateData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StateTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DecayTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SoilAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePlantState CurrentState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NurishmentState = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlantStateArgument
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StateTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WaterConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SoilConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePlantState NextState = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanDecay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDecayTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bApplyDecayToProgressDevelopment = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlaySessionCsvEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime Timestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Event = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> Data = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlayerCameraFOVOverride
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FOV = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlayerCameraPostOverride
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyagePlayerLocationData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageLocationPersistentData> LocationsData = {};

};

USTRUCT(BlueprintType)
struct FVoyagePointerActionArguments
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageActionType ActionType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LoopTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Progress = {};

};

USTRUCT(BlueprintType)
struct FVoyagePointerProjectScreenArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreOwner = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreGrabbed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Reach = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSweep = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> CollisionChannel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverrideSweepRadius = {};

};

USTRUCT(BlueprintType)
struct FVoyagePoolActorInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ActivationTime = {};

};

USTRUCT(BlueprintType)
struct FVoyagePoolActorSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InitialSpawnCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanExpand = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanSteal = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Lifetime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseDefaultActivation = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalClosingWarning
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeRemaining = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalDestination
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName LocatorName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocation* LocationAsset = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalFavorite
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Address = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalPersistentState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLocked = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFavorite = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalAddressConfidence Confidence = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KnownOctets = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalAddressSource Source = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bProbed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAnswered = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 FirstSeenUtc = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastSeenUtc = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalResourceRequirement
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseOwnModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> SourceActor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ModuleName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyagePortalResourceCost* CostAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequireModuleLive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double SustainAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ConsoleAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double OpenCost = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MinOpenCost = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ExtendCost = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double ScanCost = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double RunningCostPerSecond = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double IdleCostPerSecond = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalResourceStatus
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ModuleName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Available = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Required = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MinimumRequired = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Shortfall = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bResolved = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSourceLive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMet = {};

};

USTRUCT(BlueprintType)
struct FVoyagePortalTestCall
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyagePortalTraceResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Address = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalAddressConfidence Confidence = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyagePortalAddressSource Source = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 KnownOctets = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Hop = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Distance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlreadyKnown = {};

};

USTRUCT(BlueprintType)
struct FVoyagePostProcessLUT
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture* LUT = {};

};

USTRUCT(BlueprintType)
struct FVoyageProfessionData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Percentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewPercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPreviewPercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PhysicalNames = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PhysicalValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MentalNames = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText MentalValues = {};

};

USTRUCT(BlueprintType)
struct FVoyagePropertyStringFormatArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStyleRequirements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPreviewValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowExactValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, FVoyageHumanPropertyRequirement> Requirements = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestActorReferences
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyagePersistentActorReference*> References = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestChangedArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStatusChanged = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMessage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestStatus OverrideStatus = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestInteractResult
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageQuestLocationReward
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageLocation* Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELocatorFlags LocatorFlags = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestLocatorReward
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageLocatorType LocatorType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LocatorGroup = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LocatorName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELocatorFlags LocatorFlags = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestLogicPersistentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteData = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestLogicResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSuccess = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Output = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFinished = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestModuleConnection
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Amount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRequireFullConnection = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestModuleTask
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint32 Amount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestModuleResourcCompare Compare = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestObjective
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 TaskIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* Quest = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestRequirements
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRequirements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMinPlayerLevelRequirement = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinPlayerLevelRequirement = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMaxPlayerLevelRequirement = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxPlayerLevelRequirement = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMinHumanGrown = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinHumanGrown = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMinPlaytime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinPlaytime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMinSkillsUnlocked = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinSkillsUnlocked = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLevelCapped = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInventoryItem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* InventoryItem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVaultItem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* VaultItem = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestTask
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TaskCompletionGroup = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOptional = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHidden = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestConditionType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description = {};

	UPROPERTY(EditAnywhere)
	uint32 Count = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestModuleResourcCompare CountCompare = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseDataAsset* Source = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuestLogic* CustomTaskLogic = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bConsumeSource = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageItemTargetInventory HaveInventory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<APawn> PossessType = {};

	UPROPERTY(EditAnywhere)
	uint32 PlayerLevel = {};

	UPROPERTY(EditAnywhere)
	uint32 PlayerExperience = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageExperienceType ExperienceSourceType = {};

};

USTRUCT(BlueprintType)
struct FVoyageRelevantLight
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageRocketStateResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Progress = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Texts = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bWaiting = {};

};

USTRUCT(BlueprintType)
struct FVoyageRocketVehicleLine
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageRocketVehicleLineFormat Format = {};

};

USTRUCT(BlueprintType)
struct FVoyageSampleCollectData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 CollectedTimeUtc = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SentTimeUtc = {};

};

USTRUCT(BlueprintType)
struct FVoyageScanData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 FirstScanTimeUtc = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastScanTimeUtc = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScanCount = {};

};

USTRUCT(BlueprintType)
struct FVoyageScanTextField
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageScanTextType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Sort = {};

};

USTRUCT(BlueprintType)
struct FVoyageScheduledAction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeRemaining = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActivationRadius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIgnoreVerticalDistance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageScheduledActionLogic* ActionLogic = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> MetaData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RevealExpiredInHud = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RevealExpiredInMap = {};

};

USTRUCT(BlueprintType)
struct FVoyageSeedFruitGrowInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> ActorReference = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowTimer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSeedFruitInfo* FruitReference = {};

};

USTRUCT(BlueprintType)
struct FVoyageSeedMeshInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UStreamableRenderAsset> RenderAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInstancedSkinnedMesh = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InstanceAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTwoVectors OffsetRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange RotationRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTwoVectors ScaleRange = {};

};

USTRUCT(BlueprintType)
struct FVoyageSeedStage
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Rooted = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanDecay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageItemDropVariation> MeshVariations = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSeedMeshInfo MeshInfo = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EndScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> ResourceProduction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ScaleProductionByGrowth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSeedFruitInfo*> Fruits = {};

};

USTRUCT(BlueprintType)
struct FVoyageSignalOption
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath Ref = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Label = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Group = {};

};

USTRUCT(BlueprintType)
struct FVoyageSignalValue
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Scalar = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Vector = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath Ref = {};

};

USTRUCT(BlueprintType)
struct FVoyageSkillCustomRequirementResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLocked = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText LockedText = {};

};

USTRUCT(BlueprintType)
struct FVoyageSkillUnlock
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSkillUnlockMethod UnlockMethod = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSkill* ParentSkill = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Cost = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Requirement = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageSkillCustomRequirement*> CustomRequirements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* QuestOnUnlock = {};

};

USTRUCT(BlueprintType)
struct FVoyageSlotFileData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SlotIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SlotName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime LastModified = {};

};

USTRUCT(BlueprintType)
struct FVoyageSocketInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType ResourceType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleSocketType SocketType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RelativeLocation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator RelativeRotation = {};

};

USTRUCT(BlueprintType)
struct FVoyageSourceBusSendInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSubmixActivation Activation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoundSourceBusSendInfo Info = {};

};

USTRUCT(BlueprintType)
struct FVoyageSpawnCounter
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTickTimer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTimer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCounter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ActiveCounter = {};

};

USTRUCT(BlueprintType)
struct FVoyageSpawnCountersArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageSpawnCounter> Counters = {};

};

USTRUCT(BlueprintType)
struct FVoyageSpawnRange
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float min = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float max = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Exponent = {};

};

USTRUCT(BlueprintType)
struct FVoyageSpawnedInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* Object = {};

	UPROPERTY(EditAnywhere)
	uint64 HashKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnArrayHashKey = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeAddResourceInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Target = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Amount = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeAttackTargetInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageNPCSimpleAIController* AIController = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeFindFlyingWanderLocationInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FStateTreePropertyRef Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Querier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRadius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiusStep = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHeightAboveGround = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinGroundHeight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHeightAboveGround = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeFindRandomLocationInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FStateTreePropertyRef Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Querier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RetryInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxAttempts = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeModuleHasPowerConditionInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Actor = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeModuleResourceConditionInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Actor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RequiredLevel = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeSwimDownInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageNPCSimpleAIController* AIController = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Querier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DiveDepth = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeSwimInCirclesInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageNPCSimpleAIController* AIController = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Querier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Center = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDepthBelowSurface = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FallbackSurfaceHeight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RepickInterval = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeSwimToInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageNPCSimpleAIController* AIController = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Querier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Target = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Radius = {};

};

USTRUCT(BlueprintType)
struct FVoyageStateTreeWhaleBreachInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AVoyageNPCSimpleAIController* AIController = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* Querier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForcePerMass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForceOffsetAhead = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurfaceHeight = {};

};

USTRUCT(BlueprintType)
struct FVoyageSubmixSendInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSubmixActivation Activation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoundSubmixSendInfo Info = {};

};

USTRUCT(BlueprintType)
struct FVoyageSubmixSendSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSubmixSendInfo> SubmixSends = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSourceBusSendInfo> SourceBusSends = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableMainSubmixOutput = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalGuideSection
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Content = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalModifierProperty
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName FromID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSurvivalAttributeType ToAttributeType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalResourceModifiers
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FSurvivalResourceModifierData> Modifiers = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalSimulateState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageSurvivalAttributeType, float> StateValues = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalValue
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSurvivalAttributeType AttributeType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChangePerTick = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UpdateInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NextUpdateRemaining = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRemoveWhenReachesMinMax = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ModifiersInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> Modifiers = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DebugName = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalValueOverride
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSurvivalAttributeType AttributeType = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmAttractorDamageSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Multiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageMultiplierSelf = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> DamageMultiplierResources = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmAttractorSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSwarmAttractorType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangeMinimum = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Multiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Velocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxVelocityIncrease = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmLightReaction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ColorFilter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSwarmLightReactionType LightReaction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightReactionThreshold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightReactionStrength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightReactionClamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageFromLight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageFromLightThreshold = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmMesh
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCenterToParticleBottom = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmParticle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageSwarmTemplate* SwarmTemplate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Velocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FQuat Rotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent> HitComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> Instigator = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SelectedVolumeID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyOnUnload = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSleeping = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmTemperatureReaction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TemperatureThresholdMin = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TemperatureThresholdMax = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSwarmTemperatureReactionType TemperatureReaction = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TemperatureReactionStrength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TemperatureReactionClamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MovementMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageFromTemperature = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageFromTemperatureThreshold = {};

};

USTRUCT(BlueprintType)
struct FVoyageSwarmTemplateRange
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float min = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float max = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Exponent = {};

};

USTRUCT(BlueprintType)
struct FVoyageTaskData
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FVoyageTaskSerializeData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Amount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowInHud = {};

};

USTRUCT(BlueprintType)
struct FVoyageTemporaryPrimitiveInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* Primitive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Life = {};

};

USTRUCT(BlueprintType)
struct FVoyageTerminalAppData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor HeaderBackground = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Status = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor StatusBackground = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StyleIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TickInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> OutputLines = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasDynamicCommands = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageTerminalCommandData*> Commands = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageTerminalScreenBaseLayerWidget> LayerWidgetClassOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRegisterNavigationContainers = {};

};

USTRUCT(BlueprintType)
struct FVoyageTerminalAppState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TickInterval = {};

};

USTRUCT(BlueprintType)
struct FVoyageTerminalAppTickData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClearScreen = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> Lines = {};

};

USTRUCT(BlueprintType)
struct FVoyageTerminalCommand
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CommandName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CommandLabel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalActionObject* Action = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalActionDynamicDataObject* DynamicData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName HudKey = {};

};

USTRUCT(BlueprintType)
struct FVoyageTerminalOperatorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText OperatorName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageTerminalActionObject* Action = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UObject> TargetObject = {};

};

USTRUCT(BlueprintType)
struct FVoyageThrottledCallMap
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UObject> Owner = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FThrottledCall> CallMap = {};

};

USTRUCT(BlueprintType)
struct FVoyageTotalHumans
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalNumGrownHumans = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalNumHumansInEarth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalNumHumansInSpace = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalNumHumanFails = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HighestLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItemMemoryTrait*, int32> HumanTraits = {};

};

USTRUCT(BlueprintType)
struct FVoyageUnitFormattingArg
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseMetricUnits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIncludePercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseShortFormat = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLargeNumber = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRoundToWhole = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseGrouping = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseKs = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumFractionalDigits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumFractionalDigits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumDigits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAlwaysIncludeSign = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ReplacementUnitText = {};

};

USTRUCT(BlueprintType)
struct FVoyageVaultInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Body = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ValueText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseDataAsset* AssociatedDataAsset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* IconOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> DetailsRowTexts = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentageValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowProgressBar = {};

};

USTRUCT(BlueprintType)
struct FVoyageVirtualKeyContainers
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> ContainerIndices = {};

};

USTRUCT(BlueprintType)
struct FVoyageWaveInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LengthMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HeightMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SteepnessMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UVoyageWavesPreset> WavePreset = {};

};

USTRUCT(BlueprintType)
struct FVoyageWidgetPersistentData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageWorldIslandRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IslandID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OriginalSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bForceRegenerate = {};

};

USTRUCT(BlueprintType)
struct FVoyageWorldState
{
	GENERATED_BODY()

};

USTRUCT(BlueprintType)
struct FWorldLocationsSync
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FLocationSync> Locations = {};

};

USTRUCT(BlueprintType)
struct FAttachmentTransformData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USceneComponent> AttachParent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform AttachTransform = {};

};

USTRUCT(BlueprintType)
struct FDatabaseArrayField
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDatabaseFieldValue> Fields = {};

};

USTRUCT(BlueprintType)
struct FDatabaseArrayMapField
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDatabaseMapField> Fields = {};

};

USTRUCT(BlueprintType)
struct FDatabaseField
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDatabaseFieldValue FieldValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDatabaseMapField FieldMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDatabaseArrayField FieldArray = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDatabaseArrayMapField FieldMapArray = {};

};

USTRUCT(BlueprintType)
struct FFocusableUserData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Index = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString String = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageMinMax Range = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Unit = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StepSize = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnitMul = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsFloatValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsPercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinFractionDecimals = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxFractionDecimals = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFocusableGroupType GroupType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bApplyChildPadding = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GroupKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFocusableGroupStateBehviour GroupBehaviour = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LinkedGroupOwnerIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInverseGroupOwner = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, EVoyageFocusableGroupStateBehviour> LinkedGroupOwnerStates = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> LinkedGroupOwnerWhitelist = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> LinkedGroupOwnerBlacklist = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FFocusableGroupLink> AdditionalGroupLinks = {};

};

USTRUCT(BlueprintType)
struct FGameAssetsSync
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameDataAssetSync> Assets = {};

};

USTRUCT(BlueprintType)
struct FGridSignalLinkVisualInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* SourceModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageModuleComponent* TargetModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Key = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSignalValue Value = {};

};

USTRUCT(BlueprintType)
struct FIslandSocketRoutes
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageModuleComponent> SourceModule = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UModuleSocketComponent> SourceSocket = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSocketRoute> Routes = {};

};

USTRUCT(BlueprintType)
struct FPersistentLocatorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFlags Flags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVector> PathPoints = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInside = {};

};

USTRUCT(BlueprintType)
struct FPersistentPlayerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LastLocation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator ControllerRotation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFlags Flags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SecurityLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 exp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageExperienceType, int32> ExpHistory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageExperienceType, int32> LevelCapExpHistory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LevelCapExp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, int64> LevelPlaytime = {};

};

USTRUCT(BlueprintType)
struct FPersistentWorldComponentTransform
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform Transform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFloat3Packed16 LinearVelocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFloat3Packed16 AngularVelocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> CollisionObjectType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Mass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFlags Flags = {};

};

USTRUCT(BlueprintType)
struct FPersistentWorldComponentTransformArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FPersistentWorldComponentTransform> Transforms = {};

};

USTRUCT(BlueprintType)
struct FPersistentWorldComponentTransformNonPhysical
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform Transform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFlags Flags = {};

};

USTRUCT(BlueprintType)
struct FResourceGrid
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageModuleComponent*> Modules = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FIslandSocketRoutes> OutputRoutes = {};

	UPROPERTY(EditAnywhere)
	TMap<TWeakObjectPtr<UModuleSocketComponent>, int32> SocketRouteMap = {};

};

USTRUCT(BlueprintType)
struct FUnloadedLocatorInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform Transform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageAbilityDataStruct
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActivationTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumActivationMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ActivationCooldown = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomSpreadAngle = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> ItemsPerActivation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAbilityConsumptionType ConsumptionType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, float> ResourcePerActivation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SubActivationCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SubActivationDelay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPlayActivationSoundForEachSubActivation = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSubActivationDivideEffect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAbilitySfxData SfxData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* CrosshairWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* ADSCrosshairWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageCrosshairWidgetData* InspectCrosshairWidget = {};

};

USTRUCT(BlueprintType)
struct FVoyageAttack
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class UVoyageDamageType> DamageTypeClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NoiseLoudness = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NoiseMaxRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NoiseTag = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DamageVariance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Velocity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InnerRadius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OuterRadius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadiusIncrementPerRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ImpulseOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseLineOfSight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDamageInstigator = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RadialDamageFalloff = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageDurationAttack DurationAttack = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECombatAttackType AttackType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHitResult Hit = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> Target = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> Instigator = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> DamageCauser = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AttackID = {};

};

USTRUCT(BlueprintType)
struct FVoyageAudioOcclusionInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSubmixSendSettings> CurrentSubmixSend = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteePackageItemExchangeInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItem*> Items = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables RewardLootTables = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinimumItemsToReceive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumItemsToReceive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSendItemsPerType = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedEventActorInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Location = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString gridname = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Path = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageConnectedEventPropertyInfo> properties = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedEventActorPropertyInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString persistentId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageConnectedEventPropertyInfo> properties = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedEventStateInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageConnectedEventActorInfo> actors = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageConnectedEventPropertyInfo> properties = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageConnectedEventActorPropertyInfo> Overrides = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString zone = {};

};

USTRUCT(BlueprintType)
struct FVoyageContainerItemTables
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* ContainerItem = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageLootItemTables ItemTables = {};

};

USTRUCT(BlueprintType)
struct FVoyageDelayedSignal
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSignalValue Value = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeLeft = {};

};

USTRUCT(BlueprintType)
struct FVoyageDestructibleObjectProperties
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestroyedLootMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DirectDamageMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionDamageMultiplier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionDamageThreshold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestructionDamageThreshold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestructionExtraDamageTotal = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* ItemToSpawn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemToSpawnCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemSpawnSettings ItemToSpawnSettings = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageContainerItemTables DestructionLoot = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemSpawnSettings DestructionLootSpawnSettings = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> DestructionLootEffect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> ActorToSpawn = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AVoyageDestroyedActor> DestroyedActor = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DestroyedActorScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UGeometryCollection> DestroyedGeometryCollection = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USoundBase> DestructionAudio = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UNiagaraSystem> DestructionEffect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform DestructionEffectTransform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SpawnGenericRecycleEffect = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageWeaponData* DestructionWeaponData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform DestructionWeaponTransform = {};

};

USTRUCT(BlueprintType)
struct FVoyageDialogResult
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageDialogResultType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CustomIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UUserWidget> ContextWidget = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageDialogResultData Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageDoorVariation
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageDoorVariationData> Components = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<class UObject>> Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageDurationAttacks
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAttack Attack = {};

};

USTRUCT(BlueprintType)
struct FVoyageEggSackInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFullyGrown = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableOverlapBurst = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TentacleSegmentsMin = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TentacleSegmentsMax = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TentaclesAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 RandomSeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TentacleThickness = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D TentacleAngle = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Size = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IncreaseScalePerSegment = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TentacleHealth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanGrow = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestructionSpeed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TentacleRegenerationTimer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EggRegenerationTimer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SegmentLength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MeshLength = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float LightThreshold = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TentacleSweepProfileName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TentacleOverlapProfileName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* TentacleThicknessCurve = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* TentacleLengthCurve = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* DisabledOverlayMaterial = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageAttack TentacleAttack = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<class AActor>> ApplyDamageAgainstActorClasses = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxHealth = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SplineKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EggRegenerationTimerCurrent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector EggRootScale = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InternalSecondCounter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Health = {};

};

USTRUCT(BlueprintType)
struct FVoyageEggSackTentacleSegmentInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedLocalTransform Transform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFloat16 Health = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* OverlapBox = {};

};

USTRUCT(BlueprintType)
struct FVoyageFabricatorQueueItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDependency = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FabricationId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSoftObjectPtr<class UVoyageBaseInventoryComponent>, FVoyageFabricatorUsedComponents> ReservedItems = {};

};

USTRUCT(BlueprintType)
struct FVoyageFocusableContainerData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseInnerNavigationContainers = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NavigationContainerIndex = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageFocusableContainerNavigationType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFocusableContainerEscape Escape = {};

};

USTRUCT(BlueprintType)
struct FVoyageGauntletTestConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AutoEndAfter = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CSVProfilerEnabled = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CSVProfilerDelay = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CSVProfilerDuration = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Map = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TakeScreenshotTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScreenshotPeriod = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VerboseLevel = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> SaveGameFilenames = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> SettingsOverride = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGauntletValues ExitValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsePersistentActorValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseModuleValues = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SetValuesTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnTestPawnTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TestPawnClassName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGauntletTestConfigPSOCache PSOCache = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageGauntletTestConfigPSOLocators PSOLocators = {};

};

USTRUCT(BlueprintType)
struct FVoyageHolsterSlotStateConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageNumberFormattingOptions PrimaryTextNumberOption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageNumberFormattingOptions SecondaryTextNumberOption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowKeybind = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowMode = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPrimaryImage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowPrimaryText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSecondaryImage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShowSecondaryText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MinSizeWhenHighlighted = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MaxSizeWhenHighlighted = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MinSizeWhenNotHighlighted = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D MaxSizeWhenNotHighlighted = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulation
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastHumanCacheUpdateTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CacheDurationInSeconds = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageHumanInfo> Humans = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageHumanSimulationCommittee> Committees = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ItemData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageItemDataArray> ItemDataMap = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 Timestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Flags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Version = {};

};

USTRUCT(BlueprintType)
struct FVoyageItemSerialize
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPrimaryAssetType AssetType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AssetName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageItem> Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemData Data = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleEngineConsumption
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EModuleResourceType FuelType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FuelConsumptionIdle = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FuelConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FuelEfficiency = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageModuleEngineProduction> Productions = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleGroupState
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> TotalResourceAmount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> TotalResourceConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> TotalResourceDelta = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> PendingConsumption = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EModuleResourceType, double> PendingConsumptionGroupedActors = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, float> RequirementsFills = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleModifierData ModifierData = {};

};

USTRUCT(BlueprintType)
struct FVoyagePoolActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<AActor*, FVoyagePoolActorInfo> ActivePool = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> InactivePool = {};

};

USTRUCT(BlueprintType)
struct FVoyageQuestData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageQuestStatus Status = {};

	UPROPERTY(EditAnywhere)
	TMap<uint8, uint32> TaskProgress = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastUpdate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 startTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageQuestLogicResult> PersistentLogicResults = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FVoyageQuestLogicPersistentData> PersistentLogicPersistentData = {};

};

USTRUCT(BlueprintType)
struct FVoyageScanText
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Header = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Footer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageScanTextField> TextFields = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVisible = {};

};

USTRUCT(BlueprintType)
struct FVoyageSignalInputDesc
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Key = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalMerge Merge = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalDelivery Delivery = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bResetOnLoss = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResetValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bClampToRange = {};

	UPROPERTY(EditAnywhere)
	uint32 SocketID = {};

	UPROPERTY(EditAnywhere)
	uint64 SourceModuleAddress = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAnyKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bMatchType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHidden = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSignalOption> Options = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bQueryOptions = {};

};

USTRUCT(BlueprintType)
struct FVoyageSignalKeyInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Key = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalMerge Merge = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageSignalDelivery Delivery = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHidden = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCommand = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSignalOption> Options = {};

};

USTRUCT(BlueprintType)
struct FVoyageSignalOutputRecord
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint32 SocketID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Key = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSignalValue Value = {};

	UPROPERTY(EditAnywhere)
	uint64 Sequence = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleDataFilter Filter = {};

	UPROPERTY(EditAnywhere)
	uint64 TargetModuleAddress = {};

};

USTRUCT(BlueprintType)
struct FVoyageSpawnInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UObject* Object = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnOffset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BlockingCheckOffset = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BlockingCheckRadius = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RandomYawRange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnChance = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SpawnTickInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSpawnActive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxSpawnLifetime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyOnUnload = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSpawnRange SpawnInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageSpawnRange RespawnInterval = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HashKey = {};

};

USTRUCT(BlueprintType)
struct FVoyageSurvivalGuideArticle
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageSurvivalGuideSection> Sections = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> Image = {};

};

USTRUCT(BlueprintType)
struct FBarWidgetArguments
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Index = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PrimaryText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SecondaryText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageItem* Item = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageBaseInventoryComponent* SourceInventory = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsInactive = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHighlight = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageItemData Data = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility Visiblity = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D* OverrideIcon = {};

};

USTRUCT(BlueprintType)
struct FDatabaseDocument
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Path = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDatabaseDocumentType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FDatabaseField> Fields = {};

};

USTRUCT(BlueprintType)
struct FPersistentWorldActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint64 persistentId = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageFlags Flags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ActorClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActorName = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> ActorTemplate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class AActor> Owner = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePackedTransform Transform = {};

	UPROPERTY(EditAnywhere)
	TMap<uint32, FPersistentWorldComponentTransform> ComponentTransforms = {};

	UPROPERTY(EditAnywhere)
	TMap<uint32, FPersistentWorldComponentTransformNonPhysical> ComponentTransformsNonPhysical = {};

	UPROPERTY(EditAnywhere)
	TMap<uint32, FPersistentWorldComponentTransformArray> BoneTransforms = {};

	UPROPERTY(EditAnywhere)
	TMap<uint32, FPersistentWorldComponentData> ComponentData = {};

	UPROPERTY(EditAnywhere)
	TMap<uint32, uint64> PersistentComponentIds = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> ByteData = {};

	UPROPERTY(EditAnywhere)
	uint16 Version = {};

};

USTRUCT(BlueprintType)
struct FPersistentWorldActorList
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TMap<uint64, FPersistentWorldActor> actors = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteePackageData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCommitteePackageType Type = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 AvailableTimestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageItemSerialize> Items = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<uint8> Data = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageBaseDataAsset*, int32> DataAssets = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteePackageExchangeInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGiveItemsToPlayer = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, FVoyageCommitteePackageItemExchangeInfo> ItemExhange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageBaseDataAsset*, FVoyageCommitteePackageItemExchangeInfo> DataAssetExhange = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayerExperience = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UVoyageQuest* QuestChain = {};

};

USTRUCT(BlueprintType)
struct FVoyageConnectedEventInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ID = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString zone = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString startTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString endTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString createdAt = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString updatedAt = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Status = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageConnectedEventStateInfo> states = {};

};

USTRUCT(BlueprintType)
struct FVoyageContainedActorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPersistentWorldActor Data = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ActorClass = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform = {};

};

USTRUCT(BlueprintType)
struct FVoyageEggSackTentacleInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageEggSackTentacleSegmentInfo> Segments = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRandomStream Stream = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class USplineComponent> SplineComponent = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform CurrentTransform = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentSegment = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumSegments = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GrowTimer = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulationCommitteeInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CommitteeKey = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CommitteeText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CommitteeDescription = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CommitteeTier = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<class UTexture2D> CommitteeIcon = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCommitteeProgressRequirements ProgressRequirements = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemMemoryTrait*> RequiredProfessions = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumOperationalMemberPercentage = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinRequiredAge = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageItemMemoryTrait*> RequiredTraits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HumanValue = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UVoyageCommitteeAction*> Actions = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageHumanSimulationCommitteeQuestInfo> QuestChains = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCommitteePackageExchangeInfo> PackageExchanges = {};

};

USTRUCT(BlueprintType)
struct FVoyageModuleGroup
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint32 GroupId = {};

	UPROPERTY(EditAnywhere)
	TMap<uint64, TWeakObjectPtr<UVoyageModuleComponent>> Modules = {};

	UPROPERTY(EditAnywhere)
	TMap<uint64, TWeakObjectPtr<UVoyageModuleComponent>> ConnectedModules = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageModuleGroupState State = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AVoyageLocationVolume> Volume = {};

};

USTRUCT(BlueprintType)
struct FVoyagePlayerQuestData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageQuestData> QuestState = {};

};

USTRUCT(BlueprintType)
struct FVoyageCommitteeData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageCommitteeState State = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastStateUpdateTimestamp = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Flags = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText StatusText = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, uint8> StateDatas = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageCommitteePackageData> PackageDatas = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageItem*, int32> ReceivedItems = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageBaseDataAsset*, int32> ReceivedDataAssets = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanCommitteeDisplay
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageHumanSimulationCommitteeInfo Info = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyageCommitteeData Data = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText> MemberTexts = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsOperational = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MemberCount = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TotalValue = {};

};

USTRUCT(BlueprintType)
struct FVoyageHumanSimulationArgs
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoyageResultType ResultType = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Seed = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime BirthDate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime SpaceDate = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UVoyageItemMemoryTrait*> Traits = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<UVoyageHumanProperty*, double> properties = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageCommitteeData> CommitteeData = {};

};

USTRUCT(BlueprintType)
struct FGameProgress
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPersistentPlayerData PlayerData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int32, FVoyageItemSerialize> ActionBar = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FPrimaryAssetId> Skills = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVoyagePlayerQuestData Quests = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FPersistentWorldActorList> PersistentActors = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPersistentSubsystemList PersistentSubsystems = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FPersistentLocatorData> Locators = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 CreationTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastUpdateTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 LastLoginTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlaytimeTime = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCheckpointData LastCheckpointData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, int32> Stats = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageTaskSerializeData> Tasks = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageEnhancerData> Enhancers = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FVoyageHumanGrowResult> HumanGrow = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EVoyageDiscoveryGroup, FVoyageDiscoveryData> Discovered = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageScanData> Scanned = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageHUDPersistentData> PersistentHUDData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FVoyageCommitteeData> CommitteeData = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FPrimaryAssetId, FVoyageSampleCollectData> CollectedSamples = {};

};

USTRUCT(BlueprintType)
struct FPendingLocalPlayerRequest
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UVoyageLocalPlayer> Player = {};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameProgress Progress = {};

};
