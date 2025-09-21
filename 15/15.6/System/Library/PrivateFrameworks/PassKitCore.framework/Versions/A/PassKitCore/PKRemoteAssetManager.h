@class PKDirectoryCoordinator, NSArray, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKRemoteAssetManager : NSObject {
    PKDirectoryCoordinator *_coordinator;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableDictionary *_sha1HexFromRelativeManifest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_completionHandlers;
}

@property (copy, nonatomic) NSArray *seids;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)_callCompletionHandlersWithFinishState:(char)a0 progress:(float)a1 error:(id)a2;
- (void)_downloadRemoteAssetItem:(id)a0 withCloudStoreCoordinatorDelegate:(id)a1 shouldWriteData:(char)a2 completion:(id /* block */)a3;
- (void)_downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 requireRequiredAssets:(char)a3 completion:(id /* block */)a4;
- (void)_flushBundleCaches;
- (char)addRemoteAssetData:(id)a0 forManifestItem:(id)a1 error:(id *)a2;
- (char)addRemoteAssetData:(id)a0 shouldWriteData:(char)a1 forManifestItem:(id)a2 error:(id *)a3;
- (char)assetExistsLocally:(id)a0;
- (id)deviceSpecificItems;
- (id)deviceSpecificItemsForScreenScale:(double)a0 suffix:(id)a1;
- (void)downloadRemoteAssetItem:(id)a0 withCloudStoreCoordinatorDelegate:(id)a1 completion:(id /* block */)a2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 ignoreRequiredAssetDownloadFailures:(char)a3 completion:(id /* block */)a4;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 completion:(id /* block */)a2;
- (char)hasEncryptedDeviceSpecificItemWithRelativePath:(id)a0;
- (id)initWithDirectoryCoordinator:(id)a0;
- (id)itemWithRelativePath:(id)a0;
- (id)pendingRemoteAssetsItems;
- (id)pendingRemoteAssetsItemsForScreenScale:(double)a0 suffix:(id)a1;
- (id)remoteAssetManifests;
- (id)sha1HexFromRelativeManifestWithRelativePath:(id)a0;

@end
