@interface GEONanoInfo : NSObject {
    BOOL _nanoRegEntitled;
}

+ (id)sharedInfo;

- (id)init;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)hasPairedDevice;
- (id)hasPairedDeviceIfAvailable;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (id)deviceSystemVersion;
- (id)deviceSystemVersionIfAvailable;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (id)deviceSystemBuildVersion;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (id)deviceProductType;
- (id)deviceProductTypeIfAvailable;
- (id)deviceOsVersionIfAvailable;

@end
