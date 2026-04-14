@interface PLDiskController : NSObject

+ (long long)diskSpaceAvailableForPath:(id)a0;
+ (id)mountPointForPath:(id)a0;
+ (long long)fileSystemSizeForPath:(id)a0;
+ (long long)diskSpaceAvailableForUse;
+ (long long)freeDiskSpaceThreshold;
+ (BOOL)freeSpaceBelowDesiredSpaceThresholdForPath:(id)a0;

@end
