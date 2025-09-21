@class NSURL;

@interface AVManagedAssetCacheInternal : NSObject {
    NSURL *url;
    char enableHLSCache;
    char enableCRABSCache;
}

@end
