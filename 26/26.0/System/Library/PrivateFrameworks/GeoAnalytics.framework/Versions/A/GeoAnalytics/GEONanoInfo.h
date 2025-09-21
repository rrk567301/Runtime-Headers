@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)hasPairedDevice;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductType;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceSystemBuildVersion;
- (id)hasPairedDeviceIfAvailable;

@end
