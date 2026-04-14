@class NSArray, _VZCPUEmulatorConfiguration, _VZPanicDeviceConfiguration, _VZDebugStubConfiguration, VZBootLoader, VZPlatformConfiguration;

@interface VZVirtualMachineConfiguration : NSObject <NSCopying> {
    NSArray *_keyboards;
    NSArray *_acceleratorDevices;
    NSArray *_powerSourceDevices;
    NSArray *_audioDevices;
    NSArray *_biometricDevices;
    NSArray *_directorySharingDevices;
    NSArray *_entropyDevices;
    NSArray *_memoryBalloonDevices;
    NSArray *_networkDevices;
    NSArray *_socketDevices;
    NSArray *_storageDevices;
    NSArray *_serialPorts;
    NSArray *_consoleDevices;
    NSArray *_graphicsDevices;
    NSArray *_pointingDevices;
    NSArray *_multiTouchDevices;
    NSArray *_customVirtioDevices;
    NSArray *_customMMIODevices;
    NSArray *_mailboxDevices;
    _VZDebugStubConfiguration *_debugStub;
    _VZPanicDeviceConfiguration *_panicDevice;
    _VZCPUEmulatorConfiguration *_cpuEmulator;
    NSArray *_coprocessors;
    struct vector<HvCore::SharedRamEntry, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *__begin_; struct SharedRamEntry *__end_; struct SharedRamEntry *__cap_; } _sharedRamRegions;
    struct optional<Base::FileDescriptor> { union { char __null_state_; struct FileDescriptor { int _fd; } __val_; } ; BOOL __engaged_; } _coprocessorStorageFileDescriptor;
    struct optional<VzCore::VirtualMachineConfiguration::Coprocessor::ApConfiguration> { union { char __null_state_; struct ApConfiguration { unsigned long long ecid; unsigned int board_id; BOOL production_mode_enabled; } __val_; } ; BOOL __engaged_; } _apConfiguration;
    NSArray *_usbControllers;
    NSArray *_bifrostDevices;
    NSArray *_pciPassthroughDevices;
    BOOL _memoryOvercommitmentAllowed;
    BOOL _terminationUnderMemoryPressureEnabled;
    BOOL _testIgnoreEntitlementChecks;
    struct optional<Base::DispatchGroup> { union { char __null_state_; struct DispatchGroup { struct OpaqueId *_object; } __val_; } ; BOOL __engaged_; } _configuration_group;
    long long _fatalErrorAction;
    long long _panicAction;
    long long _restartAction;
}

@property (class, readonly) unsigned long long _maximumAllowedOvercommittedMemorySize;

@property (retain, setter=_setDebugStub:) _VZDebugStubConfiguration *_debugStub;
@property (retain, setter=_setPanicDevice:) _VZPanicDeviceConfiguration *_panicDevice;
@property (retain, setter=_setCPUEmulator:) _VZCPUEmulatorConfiguration *_cpuEmulator;
@property (setter=_setMemoryOvercommitmentAllowed:) BOOL _memoryOvercommitmentAllowed;
@property (setter=_setTerminationUnderMemoryPressureEnabled:) BOOL _terminationUnderMemoryPressureEnabled;
@property (copy, setter=_setCustomVirtioDevices:) NSArray *_customVirtioDevices;
@property (copy, setter=_setCoprocessors:) NSArray *_coprocessors;
@property (copy, setter=_setAcceleratorDevices:) NSArray *_acceleratorDevices;
@property (copy, setter=_setBiometricDevices:) NSArray *_biometricDevices;
@property (copy, setter=_setPowerSourceDevices:) NSArray *_powerSourceDevices;
@property (copy, setter=_setMultiTouchDevices:) NSArray *_multiTouchDevices;
@property (copy, setter=_setCustomMMIODevices:) NSArray *_customMMIODevices;
@property (copy, setter=_setBifrostDevices:) NSArray *_bifrostDevices;
@property (copy, setter=_setMailboxDevices:) NSArray *_mailboxDevices;
@property (copy, setter=_setPCIPassthroughDevices:) NSArray *_pciPassthroughDevices;
@property (setter=_setFatalErrorAction:) long long _fatalErrorAction;
@property (setter=_setPanicAction:) long long _panicAction;
@property (setter=_setRestartAction:) long long _restartAction;
@property (setter=_setSharedRamRegions:) struct vector<HvCore::SharedRamEntry, std::allocator<HvCore::SharedRamEntry>> { struct SharedRamEntry *x0; struct SharedRamEntry *x1; struct SharedRamEntry *x2; } _sharedRamRegions;
@property (setter=_setCoprocessorStorageFileDescriptor:) struct optional<Base::FileDescriptor> { union { char x0; struct FileDescriptor { int x0; } x1; } x0; BOOL x1; } _coprocessorStorageFileDescriptor;
@property (setter=_setApConfiguration:) struct optional<VzCore::VirtualMachineConfiguration::Coprocessor::ApConfiguration> { union { char x0; struct ApConfiguration { unsigned long long x0; unsigned int x1; BOOL x2; } x1; } x0; BOOL x1; } _apConfiguration;
@property (setter=_setTestIgnoreEntitlementChecks:) BOOL _testIgnoreEntitlementChecks;
@property (retain) VZBootLoader *bootLoader;
@property unsigned long long memorySize;
@property unsigned long long CPUCount;
@property (retain) VZPlatformConfiguration *platform;
@property (copy) NSArray *audioDevices;
@property (copy) NSArray *consoleDevices;
@property (copy) NSArray *directorySharingDevices;
@property (copy) NSArray *entropyDevices;
@property (copy) NSArray *memoryBalloonDevices;
@property (copy) NSArray *networkDevices;
@property (copy) NSArray *serialPorts;
@property (copy) NSArray *socketDevices;
@property (copy) NSArray *storageDevices;
@property (copy) NSArray *keyboards;
@property (copy) NSArray *pointingDevices;
@property (copy) NSArray *graphicsDevices;
@property (copy) NSArray *usbControllers;

+ (unsigned long long)maximumAllowedCPUCount;
+ (unsigned long long)maximumAllowedMemorySize;
+ (unsigned long long)minimumAllowedCPUCount;
+ (unsigned long long)minimumAllowedMemorySize;

- (BOOL)validateWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isDuplicateUSBDeviceConfigurationAt:(unsigned long long)a0 usbDeviceIndex:(unsigned long long)a1;
- (BOOL)validateSaveRestoreSupportWithError:(id *)a0;

@end
