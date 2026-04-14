@interface GEONanoInfo : NSObject {
    BOOL _nanoRegEntitled;
}

+ (id)sharedInfo;

- (id)init;
- (id)hasPairedDevice;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)deviceOsVersionIfAvailable;
- (id)deviceProductType;
- (id)deviceProductTypeIfAvailable;
- (id)deviceSystemBuildVersion;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)deviceSystemVersion;
- (id)deviceSystemVersionIfAvailable;
- (id)hasPairedDeviceIfAvailable;

@end
