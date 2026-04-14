@class NSArray, VZBootLoader, _VZDebugStubConfiguration, VZPlatformConfiguration;

@interface VZVirtualMachineConfiguration : NSObject <NSCopying> {
    NSArray *_keyboards;
    NSArray *_acceleratorDevices;
    NSArray *_audioDevices;
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
    _VZDebugStubConfiguration *_debugStub;
    BOOL _testIgnoreEntitlementChecks;
}

@property (retain, setter=_setDebugStub:) _VZDebugStubConfiguration *_debugStub;
@property (copy, setter=_setCustomVirtioDevices:) NSArray *_customVirtioDevices;
@property (copy, setter=_setAcceleratorDevices:) NSArray *_acceleratorDevices;
@property (copy, setter=_setMultiTouchDevices:) NSArray *_multiTouchDevices;
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

+ (unsigned long long)maximumAllowedCPUCount;
+ (unsigned long long)maximumAllowedMemorySize;
+ (unsigned long long)minimumAllowedCPUCount;
+ (unsigned long long)minimumAllowedMemorySize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateWithError:(id *)a0;

@end
