@class NSArray, VZBootLoader, _VZDebugStubConfiguration, VZPlatformConfiguration;

@interface VZVirtualMachineConfiguration : NSObject <NSCopying> {
    NSArray *_audioDevices;
    NSArray *_directorySharingDevices;
    NSArray *_entropyDevices;
    NSArray *_memoryBalloonDevices;
    NSArray *_networkDevices;
    NSArray *_socketDevices;
    NSArray *_storageDevices;
    NSArray *_serialPorts;
    NSArray *_graphicsDevices;
    NSArray *_keyboards;
    NSArray *_pointingDevices;
    NSArray *_customVirtioDevices;
    _VZDebugStubConfiguration *_debugStub;
    BOOL _testIgnoreEntitlementChecks;
}

@property (retain, setter=_setDebugStub:) _VZDebugStubConfiguration *_debugStub;
@property (copy, setter=_setCustomVirtioDevices:) NSArray *_customVirtioDevices;
@property (retain) VZBootLoader *bootLoader;
@property unsigned long long memorySize;
@property unsigned long long CPUCount;
@property (retain) VZPlatformConfiguration *platform;
@property (copy) NSArray *audioDevices;
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

+ (unsigned long long)maximumAllowedMemorySize;
+ (unsigned long long)minimumAllowedMemorySize;
+ (unsigned long long)maximumAllowedCPUCount;
+ (unsigned long long)minimumAllowedCPUCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validateWithError:(id *)a0;
- (BOOL)_testIgnoreEntitlementChecks;
- (void)_setTestIgnoreEntitlementChecks:(BOOL)a0;

@end
