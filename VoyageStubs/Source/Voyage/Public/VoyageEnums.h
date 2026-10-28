#pragma once

#include "CoreMinimal.h"

#include "VoyageEnums.generated.h"

UENUM(BlueprintType)
enum class EBarSlotType : uint8
{
	Active = 0,
	Activation = 1,
};

UENUM(BlueprintType)
enum class ECableSidePlugType : uint8
{
	Cable_None = 0,
	Cable_PlugA = 1,
	Cable_PlugB = 2,
};

UENUM(BlueprintType)
enum class ECargoType : uint8
{
	None = 0,
	Handheld = 1,
	FrontCarry = 2,
	ShoulderCarry = 3,
	Push = 4,
};

UENUM(BlueprintType)
enum class ECharacterInteract : uint8
{
	None = 0,
	Pointer = 1,
	Widget = 2,
	Equipment = 3,
	EquipmentInteract = 4,
	PhysicsGrab = 5,
	CableGrab = 6,
};

UENUM(BlueprintType)
enum class ECombatAttackType : uint8
{
	Unknown = 0,
	Directional = 1,
	Radial = 2,
	AreaEffect = 3,
	Force = 4,
	Count = 5,
};

UENUM(BlueprintType)
enum class ECombatDamageType : uint8
{
	Unknown = 0,
	Heat = 1,
	Cold = 2,
	Electric = 3,
	PhysicalForce = 4,
	Stun = 5,
	Organic = 6,
	Shred = 7,
	Count = 8,
};

UENUM(BlueprintType)
enum class EDatabaseDocumentType : uint8
{
	World = 0,
	Event = 1,
	Weather = 2,
	Unknown = 3,
};

UENUM(BlueprintType)
enum class EDatabaseFieldType : uint8
{
	Boolean = 0,
	Int32 = 1,
	Double = 2,
	String = 3,
	DateTime = 4,
	Map = 5,
	Array = 6,
	ArrayMap = 7,
	Unknown = 8,
};

UENUM(BlueprintType)
enum class EFocusableActivationBehaviour : uint8
{
	None = 0,
	ActivatePrimary = 1,
	ActivateSecondary = 2,
	Select = 3,
	ContextMenu = 4,
	OverlayContextMenu = 5,
	Focus = 6,
	RemoveMenu = 7,
	SelectMenu = 8,
};

UENUM(BlueprintType)
enum class EGameProgressFlags : uint8
{
	GP_None = 0,
	GP_ShowOpeningSequence = 1,
	GP_HasPreviousLocation = 2,
	GP_HasPreviousControllerRotation = 4,
	GP_HasInitialCarePackage = 8,
};

UENUM(BlueprintType)
enum class EGenericSwitchPowerType : uint8
{
	Disabled = 0,
	ToggleParentPower = 1,
	OnOffParentPower = 2,
};

UENUM(BlueprintType)
enum class EHandTargetChanged : uint8
{
	None = 0,
	Update = 1,
	Reset = 2,
};

UENUM(BlueprintType)
enum class EHudWidgetType : uint8
{
	Unknown = 0,
	Hud = 1,
	Overlay = 2,
};

UENUM(BlueprintType)
enum class EInGameMenuOption : uint8
{
	Continue = 0,
	Save = 1,
	Options = 2,
	Exit = 3,
	ExitToDesktop = 4,
	Stuck = 5,
	QuickSave = 6,
	LoadSaveFromFile = 7,
	ShowControls = 8,
	Feedback = 9,
	EarlyAccess = 10,
	Cheat = 255,
};

UENUM(BlueprintType)
enum class EInputActionStateType : uint8
{
	None = 0,
	Pending = 1,
	Success = 2,
	Cancel = 3,
	Failed = 4,
};

UENUM(BlueprintType)
enum class EInputActionType : uint8
{
	None = 0,
	Direct = 1,
	NavigationLocation = 2,
	SelectTarget = 3,
	GridOrganizerLocation = 4,
};

UENUM(BlueprintType)
enum class EInputControlBindType : uint8
{
	Default = 0,
	Elevated = 1,
	Demoted = 2,
	Ignore = 3,
};

UENUM(BlueprintType)
enum class EInputControlContextType : uint8
{
	Default = 0,
	Interface = 1,
	System = 2,
};

UENUM(BlueprintType)
enum class EInputDeviceCondition : uint8
{
	Always = 0,
	OnlyMouseKeyboard = 1,
	OnlyGamepad = 2,
	OnlyNonDesktop = 3,
	Never = 4,
};

UENUM(BlueprintType)
enum class EInputDeviceType : uint8
{
	Unknown = 0,
	MouseKeyboard = 1,
	Gamepad = 2,
};

UENUM(BlueprintType)
enum class EInputModeType : uint8
{
	Unknown = 0,
	Character = 1,
	Overlay = 2,
};

UENUM(BlueprintType)
enum class EInputPlatformType : uint8
{
	Unknown = 0,
	MouseKeyboard = 1,
	Gamepad = 2,
	Xbox = 3,
	PS = 4,
	Switch = 5,
};

UENUM(BlueprintType)
enum class EInteractWithGrabReturnValue : uint8
{
	Invalid = 0,
	No = 1,
	Yes = 2,
	YesNoDelay = 3,
};

UENUM(BlueprintType)
enum class EInteractionConditionType : uint8
{
	Allow = 0,
	Never = 1,
	InfoOnly = 2,
	Invalid = 255,
};

UENUM(BlueprintType)
enum class EInteractionScanState : uint8
{
	None = 0,
	Waiting = 1,
	Scanning = 2,
	Completed = 3,
};

UENUM(BlueprintType)
enum class ELocatorFlags : uint8
{
	Locator_None = 0,
	Locator_Visible = 1,
	Locator_Hidden = 2,
	Locator_New = 4,
	Locator_Arrive = 8,
	Locator_Departure = 16,
	Locator_Selected = 32,
	Locator_DoNotReveal = 64,
	Locator_Unloaded = 128,
};

UENUM(BlueprintType)
enum class EMainMenuOption : uint8
{
	NewGame = 0,
	Continue = 1,
	Options = 2,
	Exit = 3,
	Credits = 4,
	Benchmark = 5,
	Wishlist = 6,
	LoadGame = 7,
	Report = 8,
	Cheat = 255,
};

UENUM(BlueprintType)
enum class EMenuWidgetType : uint8
{
	None = 0,
	Welcome = 1,
	Main = 2,
	NewGame = 3,
	PreparePlay = 4,
	Options = 5,
	Credits = 6,
	PostBenchmark = 7,
};

UENUM(BlueprintType)
enum class EModuleCustomRequirementFlags : uint8
{
	None = 0,
	IgnoreAsError = 1,
	All = 1,
};

UENUM(BlueprintType)
enum class EModuleResourceCategory : uint8
{
	Unknown = 0,
	Electricity = 1,
	Water = 2,
	Gas = 3,
	Data = 4,
	Mooring = 5,
	Fuel = 6,
	Count = 7,
};

UENUM(BlueprintType)
enum class EModuleResourceRemovalType : uint8
{
	Consumption = 0,
	ConsumptionAfterModifiers = 1,
	Transfer = 2,
	Overflow = 3,
	Conversion = 4,
	Leak = 5,
	EfficiencyChange = 6,
	Count = 7,
};

UENUM(BlueprintType)
enum class EModuleResourceType : uint8
{
	Electricity = 0,
	Petrol = 1,
	Oil = 2,
	SaltWater = 3,
	FreshWater = 4,
	PhysicalEnergy = 5,
	Data = 6,
	Custom1 = 7,
	Custom2 = 8,
	Custom3 = 9,
	Methane = 10,
	Oxygen = 11,
	Steam = 12,
	Worker = 13,
	Unknown = 14,
	Mooring = 15,
	Diesel = 16,
	CarbonDioxide = 17,
	Count = 18,
};

UENUM(BlueprintType)
enum class EModuleSocketType : uint8
{
	ST_Any = 0,
	ST_Input = 1,
	ST_Output = 2,
	ST_Max = 3,
};

UENUM(BlueprintType)
enum class EMovablePlatformMeshDirection : uint8
{
	MPMD_X = 0,
	MPMD_Y = 1,
	MPMD_Z = 2,
};

UENUM(BlueprintType)
enum class EOnlineMode : uint8
{
	Offline = 0,
	LAN = 1,
	Online = 2,
};

UENUM()
enum class EOptionsProperties : int32
{
	AudioMasterVolume = 0,
	AudioMusicVolume = 1,
	AudioSfxVolume = 2,
	AudioMusicCassette = 3,
	AudioSfxVO = 4,
	VideoScalabilityQualityViewDistance = 50,
	VideoScalabilityQualityAntiAliasing = 51,
	VideoScalabilityQualityShadow = 52,
	VideoScalabilityQualityGlobalIllumination = 53,
	VideoScalabilityQualityReflection = 54,
	VideoScalabilityQualityPostProcess = 55,
	VideoScalabilityQualityTexture = 56,
	VideoScalabilityQualityVisualEffects = 57,
	VideoScalabilityQualityFoliage = 58,
	VideoScalabilityQualityShading = 59,
	VideoScalabilityQualityLandscape = 60,
	VideoRaytracing = 70,
	VideoRaytraceShadows = 71,
	VideoRaytraceReflections = 72,
	VideoScalabilityQuality = 100,
	VideoResolutionScale = 101,
	VideoVSync = 102,
	VideoMotionBlur = 103,
	VideoDisplayGamma = 104,
	VideoResolution = 105,
	VideoMonitor = 106,
	VideoRefreshRate = 107,
	VideoWindowMode = 108,
	VideoFps = 109,
	VideoFrameTime = 110,
	VideoUpScalingMethod = 140,
	VideoDLSS = 150,
	VideoDLSSQuality = 151,
	VideoNISSharpness = 152,
	VideoFSRQuality = 153,
	VideoFSRSharpness = 154,
	VideoXeSSQuality = 155,
	VideoXeSSSharpness = 156,
	VideoNISQuality = 157,
	VideoFrameRateLimit = 158,
	VideoFrameGenerationMethod = 159,
	VideoFrameGenerationModeDLSS = 160,
	VideoFrameGenerationModeFSR = 161,
	VideoFrameGenerationModeXeSS = 162,
	VideoResolutionAspectRatio = 165,
	VideoHDR = 166,
	VideoDLSSReflex = 170,
	VideoXeLL = 171,
	VideoAntiLag = 172,
	AccessibilityColorBlindMode = 180,
	AccessibilityColorBlindStrength = 181,
	AccessibilityMotionComfortEnabled = 185,
	AccessibilityMotionComfortMarker = 186,
	AccessibilityMotionComfortFrame = 187,
	AccessibilityMotionComfortHorizon = 188,
	AccessibilityMotionComfortColor = 189,
	InputMouseSensitivity = 200,
	InputMouseInvertHorizontal = 201,
	InputMouseInvertVertical = 202,
	InputMouseADSSensitivity = 203,
	InputGamepadVerticalSensitivity = 250,
	InputGamepadHorizontalSensitivity = 251,
	InputGamepadInvertHorizontal = 252,
	InputGamepadInvertVertical = 253,
	InputGamepadAcceleration = 254,
	InputGamepadVerticalADSSensitivity = 255,
	InputGamepadHorizontalADSSensitivity = 256,
	InputGamepadButtonStyle = 257,
	InputSprintMode = 270,
	InputCrouchMode = 271,
	InputForceFeedbackScale = 280,
	GameOnlineFeatures = 300,
	GameUnitSystem = 301,
	GameCameraMode = 302,
	GameCulture = 303,
	GameAutoSaveInterval = 304,
	InterfaceGlobal = 400,
	InterfaceScale = 401,
	InterfaceOverrideOverlayMargin = 402,
	InterfaceOverrideOverlayMarginSize = 403,
	SubtitleEnabled = 420,
	SubtitleFontSizeMul = 421,
	SocketInteractHoldDuration = 430,
	AccessibilityMotionComfortOpacity = 440,
	AccessibilityMotionComfortMarkerSize = 441,
	AccessibilityMotionComfortLineThickness = 442,
	AccessibilityMotionComfortMarkerGap = 443,
	AccessibilityMotionComfortMarkerOffsetX = 444,
	AccessibilityMotionComfortMarkerOffsetY = 445,
	AccessibilityMotionComfortFrameInset = 446,
	AccessibilityMotionComfortFrameDotSize = 447,
	AccessibilityMotionComfortFrameSegments = 448,
	AccessibilityMotionComfortFrameTickLength = 449,
	AccessibilityMotionComfortHorizonOffset = 450,
	AccessibilityMotionComfortHorizonLength = 451,
	AccessibilityMotionComfortCustomColor = 453,
	AccessibilityMotionComfortHorizonCenterTick = 454,
	AccessibilityMotionComfortHorizonClampToEdge = 455,
	AccessibilityMotionComfortOutline = 456,
	AccessibilityMotionComfortFrameEnabled = 457,
	AccessibilityMotionComfortHorizonEnabled = 458,
	AccessibilityMotionComfortMarkerEnabled = 459,
	Count = 460,
};

UENUM(BlueprintType)
enum class EPlayerDefaults : uint8
{
	DefaultBandwidthInput = 0,
	DefaultBandwidthOutput = 1,
};

UENUM(BlueprintType)
enum class EPlayerInputInterfaceActionType : uint8
{
	Central = 0,
	Context = 1,
	Hidden = 2,
};

UENUM(BlueprintType)
enum class ESocketConnectionResult : uint8
{
	Socket_ConnectionValid = 0,
	Socket_NotCharacter = 1,
	Socket_NoCables = 2,
	Socket_CableNotFound = 3,
	Socket_InUse = 4,
	Socket_OneSideConnected = 5,
	Socket_WrongCable = 6,
	Socket_InvalidOperation = 7,
	Socket_SwitchCables = 8,
	Socket_DisconnectAndReelIn = 9,
};

UENUM(BlueprintType)
enum class ETriggerProgressInputType : uint8
{
	Begin = 0,
	Ongoing = 1,
	Release = 2,
};

UENUM(BlueprintType)
enum class EUINavigationInputType : uint8
{
	Any = 0,
	Select = 1,
	Back = 2,
	Next = 3,
	Prev = 4,
	Right = 5,
	Left = 6,
	Up = 7,
	Down = 8,
	Special1 = 9,
	Special2 = 10,
	Special3 = 11,
	Special4 = 12,
	Special5 = 13,
	Special6 = 14,
	Action1 = 15,
	Action2 = 16,
	Action3 = 17,
	Delete = 18,
};

UENUM(BlueprintType)
enum class EVoyageActionType : uint8
{
	PhysicsGrab = 0,
	Tool = 1,
};

UENUM(BlueprintType)
enum class EVoyageAggroState : uint8
{
	None = 0,
	Seen = 1,
	Fleeing = 2,
	Aggro = 3,
	Killed = 4,
};

UENUM(BlueprintType)
enum class EVoyageButtonInfoState : uint8
{
	Default = 0,
	Hidden = 1,
	Collapsed = 2,
	Disabled = 3,
};

UENUM(BlueprintType)
enum class EVoyageCameraDroneMode : uint8
{
	Sample = 0,
	Photo = 1,
	Count = 2,
};

UENUM(BlueprintType)
enum class EVoyageCartridgeMusicType : uint8
{
	Sound = 0,
	Tracker = 1,
};

UENUM(BlueprintType)
enum class EVoyageCartridgeSystemType : uint8
{
	Any = 0,
	Peco = 1,
};

UENUM(BlueprintType)
enum class EVoyageCassetteActionType : uint8
{
	Play = 0,
	Stop = 1,
	Forward = 2,
	Backward = 3,
	Pause = 4,
	Mute = 5,
	Count = 6,
};

UENUM(BlueprintType)
enum class EVoyageCassetteState : uint8
{
	Stopped = 0,
	Playing = 1,
	Paused = 2,
	Finished = 3,
};

UENUM(BlueprintType)
enum class EVoyageCharacterWarning : uint8
{
	Unknown = 0,
	TooHeavy = 1,
	LowBattery = 2,
	LowHealth = 3,
	HighPressure = 4,
	Cold = 5,
};

UENUM(BlueprintType)
enum class EVoyageColorBlindMode : uint8
{
	Off = 0,
	Deuteranope = 1,
	Protanope = 2,
	Tritanope = 3,
};

UENUM(BlueprintType)
enum class EVoyageCommitteeFlags : uint8
{
	VCF_None = 0,
};

UENUM(BlueprintType)
enum class EVoyageCommitteePackageType : uint8
{
	Unknown = 0,
	Container = 1,
	Rocket = 2,
};

UENUM(BlueprintType)
enum class EVoyageCommitteeState : uint8
{
	None = 0,
	Active = 1,
};

UENUM(BlueprintType)
enum class EVoyageCraftingFilter : uint8
{
	None = 0,
	Player = 1,
	Fabricator = 2,
	FillStation = 4,
	Buildable = 8,
	FoodProcessor = 16,
};

UENUM(BlueprintType)
enum class EVoyageDeathScreenOption : uint8
{
	Prepare = 0,
	ExitMainMenu = 1,
	ContinueFromLast = 2,
};

UENUM(BlueprintType)
enum class EVoyageDialogConfirmType : uint8
{
	Default = 0,
	Mapped = 1,
	Custom = 2,
};

UENUM(BlueprintType)
enum class EVoyageDialogInteractType : uint8
{
	Anyone = 0,
	Owner = 1,
};

UENUM(BlueprintType)
enum class EVoyageDialogResultType : uint8
{
	Cancel = 0,
	Yes = 1,
	No = 2,
	Custom = 3,
};

UENUM(BlueprintType)
enum class EVoyageDialogType : uint8
{
	Default = 0,
	System = 1,
};

UENUM(BlueprintType)
enum class EVoyageDiscoveryGroup : uint8
{
	Item = 0,
	Location = 1,
	Profession = 2,
	GameVersion = 3,
	Count = 4,
};

UENUM(BlueprintType)
enum class EVoyageDispatchTickSlot : uint8
{
	TransformDispatch = 0,
	SubsystemTick = 1,
	Count = 2,
};

UENUM(BlueprintType)
enum class EVoyageDoorState : uint8
{
	Closed = 0,
	Opening = 1,
	Open = 2,
	Closing = 3,
	Paused = 4,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentActivationMode : uint8
{
	Automatic = 0,
	Single = 1,
	Charge = 2,
	ChargeAndTrigger = 3,
	ChargeLoop = 4,
	Disabled = 5,
	Custom = 6,
	Burst = 7,
	DynamicCharge = 8,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentAttachmenVisualizeType : uint8
{
	None = 0,
	Actor = 1,
	StaticMesh = 2,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentAvailabilityType : uint8
{
	Unknown = 0,
	Available = 1,
	Unavailable = 2,
	Cooldown = 3,
	Broken = 4,
	NoAmmo = 5,
	NoMagazine = 6,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentConsumptionResult : uint8
{
	Available = 0,
	Unavailable = 1,
	NoItem = 2,
	NoResource = 3,
	NoAmmo = 4,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentInteractSourceType : uint8
{
	AttachmentInventory = 0,
	PaintInventory = 1,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentInterpState : uint8
{
	None = 0,
	InterpolateIn = 1,
	InterpolateOut = 2,
	Completed = 3,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentInterpStateType : uint8
{
	ADS = 0,
	Inspect = 1,
	Count = 2,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentOverlay : uint8
{
	Radial = 0,
};

UENUM(BlueprintType)
enum class EVoyageEquipmentPoseType : uint8
{
	Unarmed = 0,
	Rifle = 1,
	RightHand = 2,
	Grenade = 3,
	HeavyGrenade = 4,
	Consumable = 5,
	Glowstick = 6,
};

UENUM(BlueprintType)
enum class EVoyageExperienceType : uint8
{
	Kill = 0,
	Loot = 1,
	Exploration = 2,
	Destroy = 3,
	Quest = 4,
	Cheat = 5,
	Recycle = 6,
	Scan = 7,
	Committee = 8,
	Unknown = 9,
};

UENUM(BlueprintType)
enum class EVoyageFishingNetState : uint8
{
	NetDown = 0,
	NetUp = 1,
	Idle = 2,
};

UENUM(BlueprintType)
enum class EVoyageFocusPriority : uint8
{
	Default = 0,
	Move = 1,
	Gameplay = 2,
	Task = 3,
};

UENUM(BlueprintType)
enum class EVoyageFocusableCheckBoxStyle : uint8
{
	On = 0,
	Enabled = 1,
	Show = 2,
	Custom = 3,
};

UENUM(BlueprintType)
enum class EVoyageFocusableContainerNavigationType : uint8
{
	Default = 0,
	Loop = 1,
	Espace = 2,
};

UENUM(BlueprintType)
enum class EVoyageFocusableGroupStateBehviour : uint8
{
	State = 0,
	Visiblity = 1,
};

UENUM(BlueprintType)
enum class EVoyageFocusableGroupType : uint8
{
	None = 0,
	Owner = 1,
	Child = 2,
};

UENUM(BlueprintType)
enum class EVoyageFocusablePlatform : uint8
{
	None = 0,
	Desktop = 1,
	XSX = 2,
	PS5 = 4,
	Switch2 = 8,
};

UENUM(BlueprintType)
enum class EVoyageFocusableVisibility : uint8
{
	Default = 0,
	Development = 1,
	Shipping = 2,
	NoDistribution = 3,
	NoDemo = 4,
	Demo = 5,
};

UENUM(BlueprintType)
enum class EVoyageFoodSeedType : uint8
{
	Root = 0,
	Evergreen = 1,
};

UENUM(BlueprintType)
enum class EVoyageFrameGenerationMethod : uint8
{
	Off = 0,
	DLSS = 1,
	FSR = 2,
	XeSS = 3,
	Count = 4,
};

UENUM(BlueprintType)
enum class EVoyageGameModeResetReason : uint8
{
	Death = 0,
};

UENUM(BlueprintType)
enum class EVoyageGamepadButtonStyle : uint8
{
	Default = 0,
	Xbox = 1,
	PS = 2,
	Switch = 3,
};

UENUM(BlueprintType)
enum class EVoyageGauntletPSOLocatorsState : uint8
{
	WaitingForWorld = 0,
	WaitingToStart = 1,
	Streaming = 2,
	Dwelling = 3,
	WaitingForExit = 4,
	Finished = 5,
};

UENUM(BlueprintType)
enum class EVoyageGroupTextValueSource : uint8
{
	None = 0,
	Counter = 1,
	Value = 2,
};

UENUM(BlueprintType)
enum class EVoyageHolidayType : uint8
{
	None = 0,
	Christmas = 1,
};

UENUM(BlueprintType)
enum class EVoyageHolsterSlotType : uint8
{
	Any = 0,
	Primary = 1,
	Secondary = 2,
	Throw = 3,
	Consumable = 4,
	Overlay = 5,
	Count = 6,
};

UENUM(BlueprintType)
enum class EVoyageHumanPropertyClass : uint8
{
	Physical = 0,
	Mental = 1,
};

UENUM(BlueprintType)
enum class EVoyageHumanPropertyModifierType : uint8
{
	Multiplicative = 0,
	Additive = 1,
};

UENUM(BlueprintType)
enum class EVoyageHumanPropertyRequirementType : uint8
{
	Greater = 0,
	Less = 1,
};

UENUM(BlueprintType)
enum class EVoyageInGameDynamicLayerAlignmentPreset : uint8
{
	TopLeft = 0,
	TopCenter = 1,
	TopRight = 2,
	CenterLeft = 3,
	Center = 4,
	CenterRight = 5,
	BottomLeft = 6,
	BottomCenter = 7,
	BottomRight = 8,
	Fill = 9,
	Manual = 10,
};

UENUM(BlueprintType)
enum class EVoyageInterfaceMode : uint8
{
	Default = 0,
	Hidden = 1,
	Custom = 2,
};

UENUM(BlueprintType)
enum class EVoyageInventoryAccessType : uint8
{
	Read = 0,
	Write = 1,
	ReadWrite = 2,
};

UENUM(BlueprintType)
enum class EVoyageInventoryType : uint8
{
	Undefined = 0,
	PlayerInventory = 1,
	PlayerVault = 2,
	Merchant_DEPRECATEAD = 3,
	Container = 4,
	Hidden = 5,
};

UENUM(BlueprintType)
enum class EVoyageItemAction : uint8
{
	Default = 0,
	NoAction = 1,
};

UENUM(BlueprintType)
enum class EVoyageItemCategory : uint8
{
	Undefined = 0,
	Seed = 1,
	Weapon = 2,
	FabricatorPattern_DEPRECATED = 3,
	GardenPattern_DEPRECATED = 4,
	Organic = 5,
	FoodMaterial = 6,
	HumanObject_DEPRECATED = 7,
	MultiToolBuilderPattern_DEPRECATED = 8,
	Ammo = 9,
	EmptyContainer_DEPRECATED = 10,
	Grenade = 11,
	Armor = 12,
	Cable = 13,
	Consumable = 14,
	Backpack = 15,
	Item = 16,
	Magazine = 17,
	Module = 18,
	Part = 19,
	Equipment = 20,
	Attachment = 21,
	Material = 22,
	InventoryContainer = 23,
	Food = 24,
	Memory = 25,
	Paint = 26,
	Decoration = 27,
	Trash = 28,
	Cartridge = 29,
	Quest = 30,
};

UENUM(BlueprintType)
enum class EVoyageItemDataFlags : uint8
{
	None = 0,
	GainedLootExp = 1,
	Fabricated = 2,
};

UENUM(BlueprintType)
enum class EVoyageItemDropVariationType : uint8
{
	Default = 0,
	Random = 1,
	ItemCount = 2,
};

UENUM(BlueprintType)
enum class EVoyageItemNetworkTransferDirection : uint8
{
	Push = 0,
	Pull = 1,
};

UENUM(BlueprintType)
enum class EVoyageItemOverlapEventsOverride : uint8
{
	Default = 0,
	Enabled = 1,
	Disabled = 2,
};

UENUM(BlueprintType)
enum class EVoyageItemQuality : uint8
{
	Poor = 0,
	Common = 1,
	Uncommon = 2,
	Rare = 3,
	Artifact = 4,
	Count = 5,
};

UENUM(BlueprintType)
enum class EVoyageItemSort : uint8
{
	Slot = 0,
	Name = 1,
	Weight = 2,
	Quality = 3,
	Age = 4,
	Category = 5,
	Count = 6,
};

UENUM(BlueprintType)
enum class EVoyageItemTargetInventory : uint8
{
	Inventory = 0,
	Vault = 1,
};

UENUM(BlueprintType)
enum class EVoyageKillExperienceType : uint8
{
	Small = 0,
	Medium = 1,
	Large = 2,
	Elite = 3,
	Unknown = 4,
};

UENUM(BlueprintType)
enum class EVoyageLFOShape : uint8
{
	Sine = 0,
	Triangle = 1,
	SawUp = 2,
	SawDown = 3,
	Square = 4,
};

UENUM(BlueprintType)
enum class EVoyageLanguageType : uint8
{
	System = 0,
	English = 1,
	Finnish = 2,
	French = 3,
	German = 4,
	Japanese = 5,
	ChineseSimplified = 6,
	SpanishLatam = 7,
	PortuguaseBrazil = 8,
	Swedish = 9,
	Polish = 10,
	Russian = 11,
	Ukrainian = 12,
	Italian = 13,
	SpanishSpain = 14,
	Count = 15,
};

UENUM(BlueprintType)
enum class EVoyageLocalPlayScreenType : uint8
{
	SplitScreen = 0,
	ShredScreen = 1,
};

UENUM(BlueprintType)
enum class EVoyageLocalPlayerPawnType : uint8
{
	None = 0,
	OwnPawn = 1,
	HostPawn = 2,
};

UENUM(BlueprintType)
enum class EVoyageLocatorStateFlag : uint8
{
	Always = 0,
	Never = 1,
	Discovered = 2,
	Undiscovered = 3,
};

UENUM(BlueprintType)
enum class EVoyageLocatorType : uint8
{
	Unknown = 0,
	Player = 1,
	Boat = 2,
	Waypoint = 3,
	Event = 4,
	Location = 5,
	Unit = 6,
	Portal = 7,
	Custom = 8,
};

UENUM(BlueprintType)
enum class EVoyageLocatorWidgetContext : uint8
{
	Hud = 0,
	Map = 1,
};

UENUM(BlueprintType)
enum class EVoyageLogItemType : uint8
{
	LogItem_Unknown = 0,
	LogItem_HumanObjectScan = 1,
	LogItem_ModuleScan = 2,
};

UENUM(BlueprintType)
enum class EVoyageLogicGateOperation : uint8
{
	And = 0,
	Or = 1,
	Xor = 2,
	Nand = 3,
	Nor = 4,
	Xnor = 5,
};

UENUM(BlueprintType)
enum class EVoyageMeltTipSide : uint8
{
	Auto = 0,
	Down = 1,
	Up = 2,
};

UENUM(BlueprintType)
enum class EVoyageModuleDataType : uint8
{
	DataType_None = 0,
	DataType_Float = 1,
	DataType_Int = 2,
	DataType_Bool = 3,
	DataType_Vector = 4,
	DataType_Text = 5,
	DataType_Object = 6,
	DataType_Map = 7,
	DataType_Enum = 8,
};

UENUM(BlueprintType)
enum class EVoyageModuleProductionType : uint8
{
	None = 0,
	LocalResource = 1,
	GroupResource = 2,
	GlobalResource = 3,
};

UENUM(BlueprintType)
enum class EVoyageModuleState : uint8
{
	Off = 0,
	Standby = 1,
	On = 2,
};

UENUM(BlueprintType)
enum class EVoyageModuleType : uint8
{
	Passive = 0,
	Active = 1,
};

UENUM(BlueprintType)
enum class EVoyageModuleWorkloadVisualization : uint8
{
	None = 0,
	Resource = 1,
	Dynamic = 2,
	State = 3,
};

UENUM(BlueprintType)
enum class EVoyageMotionComfortColor : uint8
{
	White = 0,
	Black = 1,
	Yellow = 2,
	Cyan = 3,
	Magenta = 4,
	Orange = 5,
	Custom = 6,
};

UENUM(BlueprintType)
enum class EVoyageMotionComfortFrame : uint8
{
	Off = 0,
	Box = 1,
	Circle = 2,
	Diamond = 3,
	CornerTicks = 4,
	DotRing = 5,
};

UENUM(BlueprintType)
enum class EVoyageMotionComfortHorizon : uint8
{
	Off = 0,
	ScreenFixed = 1,
	WorldAligned = 2,
};

UENUM(BlueprintType)
enum class EVoyageMotionComfortMarker : uint8
{
	Off = 0,
	Cross = 1,
	X = 2,
	Circle = 3,
	Diamond = 4,
};

UENUM(BlueprintType)
enum class EVoyageMotionComfortOutline : uint8
{
	Off = 0,
	ThinEdge = 1,
	ThickEdge = 2,
	SoftShadow = 3,
	StrongShadow = 4,
	EdgeAndShadow = 5,
};

UENUM(BlueprintType)
enum class EVoyageMusicPlaybackSource : uint8
{
	Default = 0,
	Combat = 1,
	Pawn = 2,
	Location = 3,
};

UENUM(BlueprintType)
enum class EVoyageNamedEquipmentSlots : uint8
{
	Unknown = 0,
	Head = 1,
	Torso = 2,
	Back1 = 3,
	Back2 = 4,
	Shoulder = 5,
	Legs = 6,
	Waist = 7,
	Data = 8,
	Count = 9,
};

UENUM(BlueprintType)
enum class EVoyageOwnerExpGainType : uint8
{
	None = 0,
	ActorDestoried = 1,
	SurvivalDeath = 2,
};

UENUM(BlueprintType)
enum class EVoyagePaintComponentRefType : uint8
{
	ComponentName = 0,
	Tag = 1,
	ActorTag = 2,
};

UENUM(BlueprintType)
enum class EVoyagePlanarMapping : uint8
{
	Biplanar = 0,
	Triplanar = 1,
};

UENUM(BlueprintType)
enum class EVoyagePlantNurishmentState : uint8
{
	Balanced = 0,
	Dry = 1,
	Shaded = 4,
	Undernurished = 8,
};

UENUM(BlueprintType)
enum class EVoyagePlantState : uint8
{
	Seed = 0,
	Germination = 1,
	Plant = 2,
	Bloom = 3,
	Ripening = 4,
	Ripen = 5,
};

UENUM(BlueprintType)
enum class EVoyagePlayerEnhancerItemActionType : uint8
{
	Dismantle = 0,
	Repair = 1,
	Build = 2,
	Craft = 3,
};

UENUM(BlueprintType)
enum class EVoyagePlayerEnhancerType : uint8
{
	None = 0,
	PressureResistance = 1,
	FallDamage = 2,
};

UENUM(BlueprintType)
enum class EVoyagePortalAddressConfidence : uint8
{
	Unknown = 0,
	Partial = 1,
	Unverified = 2,
	Confirmed = 3,
};

UENUM(BlueprintType)
enum class EVoyagePortalAddressSource : uint8
{
	Unknown = 0,
	Visited = 1,
	Dialed = 2,
	Quest = 3,
	Item = 4,
	Trace = 5,
};

UENUM(BlueprintType)
enum class EVoyagePortalCostMode : uint8
{
	Sustain = 0,
	Open = 1,
	OpenMinimum = 2,
	Extend = 3,
	Console = 4,
	Scan = 5,
};

UENUM(BlueprintType)
enum class EVoyagePortalDirectoryFilter : uint8
{
	All = 0,
	Favorites = 1,
	Recent = 2,
	Dead = 3,
	Count = 4,
};

UENUM(BlueprintType)
enum class EVoyagePortalEvent : uint8
{
	None = 0,
	HandshakeCompleted = 1,
	HandshakeFailed = 2,
	DestinationUnreachable = 3,
	DestinationLocked = 4,
	InsufficientResources = 5,
	Cancelled = 6,
	OpenTimedOut = 7,
	OpenFailed = 8,
	ExtendFailed = 9,
	TeleportFailed = 10,
	TraceRefused = 11,
	AutoExtended = 12,
	ClosedByLock = 13,
	ConnectionLost = 14,
	FarEndOpening = 15,
	FarEndOpenAbandoned = 16,
	DestinationBusy = 17,
	DestinationIsSelf = 18,
	RecallArmed = 19,
	RecallCleared = 20,
};

UENUM(BlueprintType)
enum class EVoyagePortalExitPlacement : uint8
{
	ExitLocation = 0,
	RelativeToEntry = 1,
};

UENUM(BlueprintType)
enum class EVoyagePortalExtendRefusal : uint8
{
	None = 0,
	NotActive = 1,
	NoDuration = 2,
	Disabled = 3,
	AlreadyFull = 4,
	Closing = 5,
	CannotAfford = 6,
	Refused = 7,
};

UENUM(BlueprintType)
enum class EVoyagePortalPowerState : uint8
{
	Off = 0,
	Standby = 1,
	On = 2,
};

UENUM(BlueprintType)
enum class EVoyagePortalResourceLevel : uint8
{
	Empty = 0,
	Critical = 1,
	Low = 2,
	Moderate = 3,
	High = 4,
	Ready = 5,
};

UENUM(BlueprintType)
enum class EVoyagePortalState : uint8
{
	None = 0,
	Inactive = 1,
	Handshake = 2,
	Opening = 3,
	Active = 4,
	Closing = 5,
};

UENUM(BlueprintType)
enum class EVoyagePropertyEditorBindType : uint8
{
	InteractSource = 0,
	InteractSourceOwner = 1,
	OuterBaseWidget = 2,
	OuterBaseMenuWidget = 3,
	Manual = 4,
};

UENUM(BlueprintType)
enum class EVoyagePropertyEditorGroupStateType : uint8
{
	Hidden = 0,
	Enabled = 1,
};

UENUM(BlueprintType)
enum class EVoyagePropertyEditorGroupType : uint8
{
	NoGrouping = 0,
	Owner = 1,
	Child = 2,
};

UENUM(BlueprintType)
enum class EVoyageQuestCableConnection : uint8
{
	NoCables = 0,
	AnyCables = 1,
};

UENUM(BlueprintType)
enum class EVoyageResultType : uint8
{
	None = 0,
	Success = 1,
	Failure = 2,
	Delivered = 3,
};

UENUM(BlueprintType)
enum class EVoyageRocketRewardComparison : uint8
{
	Always = 0,
	Equal = 1,
	GreaterEqual = 2,
	LessEqual = 3,
};

UENUM(BlueprintType)
enum class EVoyageRocketSimulatedState : uint8
{
	None = 0,
	Acceleration = 1,
	MaxQ = 2,
	MECO = 3,
	Separation = 4,
};

UENUM(BlueprintType)
enum class EVoyageRocketState : uint8
{
	None = 0,
	Startup = 1,
	Propellant = 2,
	Power = 3,
	Ground = 4,
	Payload = 5,
	Weather = 6,
	SystemCheck = 7,
	LaunchSequence = 8,
	Launched = 9,
	Landing = 10,
	Landed = 11,
	Catching = 12,
};

UENUM(BlueprintType)
enum class EVoyageRocketVehicleLineFormat : uint8
{
	Default = 0,
	Positive = 1,
	Negative = 2,
};

UENUM(BlueprintType)
enum class EVoyageSampleFilterType : uint8
{
	All = 0,
	Collected = 1,
	Uncollected = 2,
	NotDelivered = 3,
	Delivered = 4,
	Count = 5,
};

UENUM(BlueprintType)
enum class EVoyageSampleImageFormat : uint8
{
	RawBGRA8 = 0,
	JPEG = 1,
	PNG = 2,
};

UENUM(BlueprintType)
enum class EVoyageSampleType : uint8
{
	None = 0,
	Hologram = 1,
	Statue = 2,
	CavePainting = 3,
	Ruin = 4,
};

UENUM(BlueprintType)
enum class EVoyageScanTextType : uint8
{
	Default = 0,
	Pass = 1,
	Warning = 2,
	Error = 3,
};

UENUM(BlueprintType)
enum class EVoyageScreenshotFormat : uint8
{
	PNG = 0,
	JPEG = 1,
};

UENUM(BlueprintType)
enum class EVoyageSignalDelivery : uint8
{
	Held = 0,
	Trigger = 1,
};

UENUM(BlueprintType)
enum class EVoyageSignalMerge : uint8
{
	Latest = 0,
	Any = 1,
	Max = 2,
	Min = 3,
	Sum = 4,
};

UENUM(BlueprintType)
enum class EVoyageSignalOperation : uint8
{
	Add = 0,
	Subtract = 1,
	Multiply = 2,
	Divide = 3,
	Min = 4,
	Max = 5,
	Average = 6,
	Invert = 7,
	Negate = 8,
	Absolute = 9,
	Greater = 10,
	Less = 11,
	Equal = 12,
	And = 13,
	Or = 14,
	Xor = 15,
	Not = 16,
	Nand = 17,
	Nor = 18,
	Delay = 19,
	OnDelay = 20,
	OffDelay = 21,
	Pulse = 22,
	Toggle = 23,
	Latch = 24,
	Blink = 25,
	Counter = 26,
	Pass = 27,
};

UENUM(BlueprintType)
enum class EVoyageSignalType : uint8
{
	None = 0,
	Bool = 1,
	Int = 2,
	Float = 3,
	Vector = 4,
	Ref = 5,
};

UENUM(BlueprintType)
enum class EVoyageSkillUnlockMethod : uint8
{
	Unknown = 0,
	Level = 1,
	Tier = 2,
	Never = 3,
};

UENUM(BlueprintType)
enum class EVoyageSkillValidateFlag : uint8
{
	SVF_None = 0,
	SVF_NotEligibleLevel = 1,
	SVF_NoSkillPoints = 2,
	SVF_ParentLocked = 4,
	SVF_CustomRequirementLocked = 8,
};

UENUM(BlueprintType)
enum class EVoyageSkillValidateResult : uint8
{
	Available = 0,
	Exist = 1,
	NotEligible = 2,
	Error = 3,
};

UENUM(BlueprintType)
enum class EVoyageSoundClass : uint8
{
	Master = 0,
	Sfx = 1,
	Music = 2,
	MusicCassette = 3,
	VO = 4,
	Count = 5,
};

UENUM(BlueprintType)
enum class EVoyageSpawnCounterEvent : uint8
{
	Spawn = 0,
	Restore = 1,
	Unload = 2,
	Kill = 3,
	Destroy = 4,
};

UENUM(BlueprintType)
enum class EVoyageSpawnLocationObjectType : uint8
{
	None = 0,
	NPC = 1,
	Swarm = 2,
	Item = 4,
	Actor = 8,
};

UENUM(BlueprintType)
enum class EVoyageSpawnLocationType : uint8
{
	Exclude = 0,
	Include = 1,
};

UENUM(BlueprintType)
enum class EVoyageSurvivalAttributeType : uint8
{
	Unknown = 0,
	Temperature = 1,
	Nutrition = 2,
	Hydration = 3,
	Oxygen = 4,
	Radiation = 5,
	Fever = 6,
	Hypothermia = 7,
	Health = 8,
	Stamina = 9,
	Charge = 10,
	PlayerTriggers = 11,
	Pressure = 12,
	Level = 13,
	Count = 14,
};

UENUM(BlueprintType)
enum class EVoyageSwarmAllegiance : uint8
{
	Neutral = 0,
	Player = 1,
	Enemy = 2,
};

UENUM(BlueprintType)
enum class EVoyageSwarmAttractorType : uint8
{
	Undefined = 0,
	Default = 1,
	Player = 2,
	Enemy = 3,
	Electricity = 4,
	Petrol = 5,
	Boat = 6,
	Decoy = 7,
};

UENUM(BlueprintType)
enum class EVoyageSwarmLightReactionMovementType : uint8
{
	NoReaction = 0,
	SlowInLight = 1,
	SlowInDarkness = 2,
};

UENUM(BlueprintType)
enum class EVoyageSwarmLightReactionType : uint8
{
	NoReaction = 0,
	AvoidLight = 1,
	AttractedToLight = 2,
};

UENUM(BlueprintType)
enum class EVoyageSwarmMovement : uint8
{
	Stationary = 0,
	Default = 1,
	Steer = 2,
};

UENUM(BlueprintType)
enum class EVoyageSwarmTemperatureReactionType : uint8
{
	NoReaction = 0,
	AttractedToHeat = 1,
	AttractedToCold = 2,
};

UENUM(BlueprintType)
enum class EVoyageTaskActivationType : uint8
{
	None = 0,
	FabricationQueue = 1,
};

UENUM(BlueprintType)
enum class EVoyageTemperatureVolumeCascade : uint8
{
	Auto = 0,
	Fine = 1,
	Coarse = 2,
};

UENUM(BlueprintType)
enum class EVoyageTimeFormat : uint8
{
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
};

UENUM(BlueprintType)
enum class EVoyageUpscalingMethod : uint8
{
	TSR = 0,
	DLSS = 1,
	FSR = 2,
	XeSS = 3,
	NIS = 4,
	FXAA = 5,
	TemporalAA = 6,
	Off = 7,
	Count = 8,
};

UENUM(BlueprintType)
enum class EVoyageVersionCompare : uint8
{
	Older = 0,
	Same = 1,
	Newer = 2,
};

UENUM(BlueprintType)
enum class EVoyageVirtualKeyboardType : uint8
{
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
};

UENUM(BlueprintType)
enum class EVoyageWorldWeatherMask : uint8
{
	None = 0,
	Temperature = 1,
	Precipitation = 2,
	CloudCoverage = 4,
	FogDensity = 8,
	Wind = 16,
	Waves = 32,
	BaseWaves = 64,
	Thunder = 128,
};

UENUM(BlueprintType)
enum class EVoygeSaveGameBuildType : uint8
{
	Unknown = 0,
	Debug = 1,
	Test = 2,
	Development = 3,
	Shipping = 4,
	Distribution = 5,
};

UENUM(BlueprintType)
enum class EVoygeSaveGameGameType : uint8
{
	Unknown = 0,
	Full = 1,
	Demo = 2,
};

UENUM(BlueprintType)
enum class EVoygeSaveGameValidationResult : uint8
{
	Valid = 0,
	GameTypeMismatch = 1,
	GameTypeUnknown = 2,
	GameBuildTypeUnknown = 3,
	BuildTooOld = 4,
};

UENUM(BlueprintType)
enum class EWeaponAttachmentType : uint8
{
	Front = 0,
	Rail = 1,
	Cassette = 2,
	LeftSide = 3,
	RightSide = 4,
	Bottom = 5,
	Back = 6,
	Magazine = 7,
	Screen = 8,
	Count = 9,
};

UENUM(BlueprintType)
enum class EWeaponInventorySource : uint8
{
	WIS_Any = 0,
	WIS_PlayerInventory = 1,
	WIS_Holster = 2,
};

UENUM(BlueprintType)
enum class ExpansionSlotFlags : uint8
{
	Unused = 0,
};

UENUM(BlueprintType)
enum class ExpansionSlotTypes : uint8
{
	Small = 0,
	Big = 1,
};

UENUM(BlueprintType)
enum class FModuleRuntimeRequirementType : uint8
{
	MustBeFilled = 0,
	MustNotBeFilled = 1,
	Ignore = 2,
};

UENUM(BlueprintType)
enum class FVoyageAbilityConsumptionType : uint8
{
	None = 0,
	OnActivation = 1,
	OnRelease = 2,
	EachChargeTick = 3,
};

UENUM(BlueprintType)
enum class FVoyageAbilityDataStructType : uint8
{
	NotSet = 0,
	Equipment = 1,
	Weapon = 2,
};

UENUM(BlueprintType)
enum class FVoyageAchievementUnlockType : uint8
{
	LinkedPlatformStat = 0,
	Manual = 1,
};

UENUM(BlueprintType)
enum class FVoyageInteractFilter : uint8
{
	Never = 0,
	WhenGrabbing = 1,
	Equipment = 2,
	Holster = 3,
	NoHolster = 4,
	CableGrab = 5,
	NoCableGrab = 6,
	WhenPowerless = 7,
};

UENUM(BlueprintType)
enum class FVoyageInteractType : uint8
{
	Direct = 0,
	WidgetOverlay = 1,
	Dialog = 2,
	None = 3,
	FocusWidgetComponent = 4,
	ItemSelector = 5,
};

UENUM(BlueprintType)
enum class FVoyageLootFilterType : uint8
{
	Include = 0,
	Exclude = 1,
	Require = 2,
};

UENUM(BlueprintType)
enum class FVoyageLootTableSelector : uint8
{
	Single = 0,
	All = 1,
};

UENUM(BlueprintType)
enum class FVoyageQuestActionType : uint8
{
	None = 0,
	Accept = 1,
	Return = 2,
	Abandon = 3,
};

UENUM(BlueprintType)
enum class FVoyageQuestConditionType : uint8
{
	Have = 0,
	Interact = 1,
	Use = 2,
	Possess = 3,
	ModuleGroup = 4,
	Module = 5,
	PlayerExperience = 6,
	PlayerLevel = 7,
	Build = 8,
	Recycle = 9,
	Skill = 10,
	Equip = 11,
	ActionBar = 12,
	Custom = 13,
	Craft = 14,
	Repair = 15,
	Dismantle = 16,
	Discover = 17,
	BlueprintLogic = 18,
};

UENUM(BlueprintType)
enum class FVoyageQuestModuleConditionType : uint8
{
	Resource = 0,
	State = 1,
	Power = 2,
	Durability = 3,
	SocketConnection = 4,
	CableConnection = 5,
};

UENUM(BlueprintType)
enum class FVoyageQuestModuleResourcCompare : uint8
{
	Equal = 0,
	LessThan = 1,
	MoreThan = 2,
	MoreOrEqual = 3,
	LessOrEqual = 4,
	Not = 5,
};

UENUM(BlueprintType)
enum class FVoyageQuestStatus : uint8
{
	None = 0,
	Available = 1,
	Unavailable = 2,
	Starting = 3,
	InProgress = 4,
	Ready = 5,
	Completed = 6,
	Failed = 7,
	Aborted = 8,
	Count = 9,
};

UENUM(BlueprintType)
enum class FVoyageQuestType : uint8
{
	Default = 0,
	Main = 1,
	Secondary = 2,
	Committee = 3,
};

UENUM(BlueprintType)
enum class FVoyageStatAggregationType : uint8
{
	Sum = 0,
	Lastest = 1,
	Min = 2,
	Max = 3,
};

UENUM(BlueprintType)
enum class FVoyageStatCompareType : uint8
{
	Equal = 0,
	LessThan = 1,
	MoreThan = 2,
	MoreOrEqual = 3,
	LessOrEqual = 4,
	Not = 5,
};

UENUM(BlueprintType)
enum class FVoyageStatConditionType : uint8
{
	Stat = 0,
};

UENUM(BlueprintType)
enum class FVoyageSubmixActivation : uint8
{
	Any = 0,
	Source = 1,
	Listener = 2,
	Both = 3,
};

UENUM(BlueprintType)
enum class OutpostModuleFlags : uint8
{
	ForceZAxisUp = 0,
};

UENUM(BlueprintType)
enum class UVoyageLocationStatus : uint8
{
	Unknown = 0,
	Discovered = 1,
	Visited = 2,
};

UENUM(BlueprintType)
enum class VoyageCharacterType : uint8
{
	Player = 0,
	Monster = 1,
	Neutral = 2,
};
