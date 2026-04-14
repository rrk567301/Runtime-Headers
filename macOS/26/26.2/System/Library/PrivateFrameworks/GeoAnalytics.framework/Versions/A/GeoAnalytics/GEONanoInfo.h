@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)deviceSystemBuildVersion;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceProductTypeIfAvailable;
- (id)hasPairedDevice;
- (id)deviceSystemVersion;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductType;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)hasPairedDeviceIfAvailable;

@end
