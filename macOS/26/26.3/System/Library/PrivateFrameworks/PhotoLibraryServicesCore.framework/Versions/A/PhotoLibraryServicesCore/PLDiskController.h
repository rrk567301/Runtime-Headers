@interface PLDiskController : NSObject

+ (id)mountPointForPath:(id)a0;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;
+ (long long)diskSpaceAvailableForPath:(id)a0;
+ (long long)freeDiskSpaceThreshold;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (long long)diskSpaceAvailableForUse;

@end
