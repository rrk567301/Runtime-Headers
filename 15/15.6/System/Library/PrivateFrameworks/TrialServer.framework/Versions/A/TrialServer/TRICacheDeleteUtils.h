@interface TRICacheDeleteUtils : NSObject

+ (id)getFreeDiskSpace;
+ (id)getPurgeableDiskSpace;
+ (char)hasSufficientDiskSpaceForDownload:(unsigned long long)a0;

@end
