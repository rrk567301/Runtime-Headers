@interface TRICacheDeleteUtils : NSObject

+ (id)getFreeDiskSpace;
+ (BOOL)hasSufficientDiskSpaceForDownload:(unsigned long long)a0;
+ (id)getPurgeableDiskSpace;

@end
