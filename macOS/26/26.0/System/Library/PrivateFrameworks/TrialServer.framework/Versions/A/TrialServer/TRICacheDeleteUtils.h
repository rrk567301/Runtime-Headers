@interface TRICacheDeleteUtils : NSObject

+ (BOOL)hasSufficientDiskSpaceForDownload:(unsigned long long)a0;
+ (id)getFreeDiskSpace;
+ (id)getPurgeableDiskSpace;

@end
