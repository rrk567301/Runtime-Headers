@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;

- (id)systemVersion;
- (id)serialNumber;
- (id)productType;
- (id)deviceClass;
- (BOOL)internalInstall;
- (id)buildVersion;
- (BOOL)paired;
- (unsigned long long)deviceMemorySize;
- (id)userAssignedDeviceName;
- (id)systemModel;
- (BOOL)lowEndHardware;
- (BOOL)supportsCoreRoutineCapability;
- (BOOL)supportsMultiUser;
- (BOOL)simulatorPlatform;
- (BOOL)iPhonePlatform;
- (BOOL)watchPlatform;
- (BOOL)macOSPlatform;
- (BOOL)iPhoneDevice;
- (BOOL)supportsPairedDevice;
- (BOOL)supportsScenarioTriggers;
- (BOOL)isWatchPaired;
- (BOOL)usesTSCForClustering;
- (BOOL)isTinkerPaired;

@end
