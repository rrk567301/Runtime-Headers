@interface AdPlatformsCommon.NoDeviceCapabilityConfiguration : NSObject <AdPlatformsCommon.DeviceCapabilityConfigurator>

- (id)init;
- (BOOL)isCapabilityAvailable:(unsigned int)a0 for:(long long)a1;

@end
