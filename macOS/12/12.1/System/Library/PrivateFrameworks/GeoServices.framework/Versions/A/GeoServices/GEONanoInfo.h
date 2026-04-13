@interface GEONanoInfo : NSObject

+ (id)sharedInfo;

- (id)init;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (id)hasPairedDevice;
- (id)hasPairedDeviceIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceSystemVersionIfAvailable;
- (id)deviceSystemBuildVersion;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceProductType;
- (id)deviceProductTypeIfAvailable;
- (id)deviceOsVersionIfAvailable;

@end
