@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)deviceProductType;
- (id)deviceOsVersionIfAvailable;
- (id)hasPairedDevice;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceSystemBuildVersion;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceProductTypeIfAvailable;
- (id)hasPairedDeviceIfAvailable;

@end
