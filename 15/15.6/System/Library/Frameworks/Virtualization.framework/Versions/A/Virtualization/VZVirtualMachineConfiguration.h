@class NSArray, VZBootLoader, _VZPanicDeviceConfiguration, _VZDebugStubConfiguration, NSObject, VZPlatformConfiguration;
@protocol OS_dispatch_group;

@interface VZVirtualMachineConfiguration : NSObject <NSCopying> {
    NSArray *_keyboards;
    NSArray *_acceleratorDevices;
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
    NSArray *_MMIODevices;
    _VZDebugStubConfiguration *_debugStub;
    _VZPanicDeviceConfiguration *_panicDevice;
    NSArray *_usbControllers;
    char _nestedVirtualizationEnabled;
    char _testIgnoreEntitlementChecks;
    struct optional<Base::DispatchGroup> { union { char __null_state_; struct DispatchGroup { struct CfPtr<NSObject<OS_dispatch_group> *> { NSObject<OS_dispatch_group> *_ptr; } _group; } __val_; } ; BOOL __engaged_; } _configuration_group;
}

@property (retain, setter=_setDebugStub:) _VZDebugStubConfiguration *_debugStub;
@property (retain, setter=_setPanicDevice:) _VZPanicDeviceConfiguration *_panicDevice;
@property (copy, setter=_setCustomVirtioDevices:) NSArray *_customVirtioDevices;
@property (setter=_setNestedVirtualizationEnabled:) char _nestedVirtualizationEnabled;
@property (copy, setter=_setAcceleratorDevices:) NSArray *_acceleratorDevices;
@property (copy, setter=_setBiometricDevices:) NSArray *_biometricDevices;
@property (copy, setter=_setMultiTouchDevices:) NSArray *_multiTouchDevices;
@property (copy, setter=_setMMIODevices:) NSArray *_MMIODevices;
@property (readonly, copy) NSArray *_localFileSystemResources;
@property (setter=_setTestIgnoreEntitlementChecks:) char _testIgnoreEntitlementChecks;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)validateWithError:(id *)a0;
- (char)_isDuplicateIOUSBHostPassthroughDeviceConfigurationAt:(unsigned long long)a0 usbDeviceIndex:(unsigned long long)a1;

@end
