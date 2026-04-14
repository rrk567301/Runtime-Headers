@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceSystemVersion;
- (id)hasPairedDeviceIfAvailable;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)hasPairedDevice;
- (id)deviceSystemBuildVersion;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductType;

@end
