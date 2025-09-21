@interface PLDiskController : NSObject

+ (long long)fileSystemSizeForPath:(id)a0;
+ (id)mountPointForPath:(id)a0;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForPath:(id)a0;
+ (long long)diskSpaceAvailableForUse;

@end
