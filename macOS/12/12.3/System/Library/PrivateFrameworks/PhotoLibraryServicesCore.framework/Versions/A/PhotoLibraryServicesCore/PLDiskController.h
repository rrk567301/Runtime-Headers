@interface PLDiskController : NSObject {
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct { unsigned char needToCheckDiskSpace : 1; unsigned char probablyLowOnDiskSpace : 1; unsigned char isAssetsd : 1; unsigned int extra : 28; } _flags;
}

+ (id)sharedInstance;
+ (long long)diskSpaceAvailableForPath:(id)a0;
+ (long long)diskSpaceAvailableForUse;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;
+ (id)mountPointForPath:(id)a0;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;

- (void)dealloc;
- (id)init;
- (void)updateAvailableDiskSpace;
- (void)_actuallyUpdateCookie;
- (void)_updateCookie;
- (void)_diskSpaceDidBecomeLow;
- (BOOL)hasEnoughDiskToTakePicture;
- (long long)bytesToAutomaticallyClear;

@end
