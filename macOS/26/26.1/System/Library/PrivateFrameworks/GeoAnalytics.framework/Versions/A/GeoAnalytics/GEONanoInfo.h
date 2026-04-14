@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)deviceOsVersionIfAvailable;
- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)hasPairedDevice;
- (id)hasPairedDeviceIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceSystemBuildVersion;
- (id)deviceProductType;

@end
