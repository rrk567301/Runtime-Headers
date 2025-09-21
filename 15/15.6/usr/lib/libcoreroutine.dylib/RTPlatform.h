@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (char)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (char)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;
+ (char)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (char)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (char)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;

- (id)systemVersion;
- (id)serialNumber;
- (id)deviceClass;
- (id)productType;
- (id)buildVersion;
- (char)paired;
- (unsigned long long)deviceMemorySize;
- (char)internalInstall;
- (char)iPhoneDevice;
- (char)iPhonePlatform;
- (char)isTinkerPaired;
- (char)isWatchPaired;
- (char)lowEndHardware;
- (char)macOSPlatform;
- (char)realityDevice;
- (char)simulatorPlatform;
- (char)supportsCoreRoutineCapability;
- (char)supportsMultiUser;
- (char)supportsPairedDevice;
- (char)supportsScenarioTriggers;
- (id)systemModel;
- (id)userAssignedDeviceName;
- (char)usesTSCForClustering;
- (char)watchPlatform;

@end
