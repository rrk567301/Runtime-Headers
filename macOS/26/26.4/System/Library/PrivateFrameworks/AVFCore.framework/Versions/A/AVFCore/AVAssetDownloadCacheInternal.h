@class AVAsset, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetDownloadCacheInternal : NSObject {
    AVAsset *asset;
    struct CMBaseObject { } *assetCacheInspector;
    NSObject<OS_dispatch_queue> *workQueue;
}

- (void).cxx_destruct;

@end
