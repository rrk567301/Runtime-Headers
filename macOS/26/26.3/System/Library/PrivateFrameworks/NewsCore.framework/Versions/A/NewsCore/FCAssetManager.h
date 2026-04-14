@class FCMapTable, NSString, FCCacheCoordinator, NFUnfairLock, FCKeyValueStore, NSURL, FCAssetStore, NSObject;
@protocol FCAssetKeyManagerType, FCNetworkReachabilityType, FCNetworkBehaviorMonitor, FCAVAssetFactoryType, OS_dispatch_queue, FCResourceURLGenerating;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {
    BOOL _shouldUseSecureConnectionForCKAssetDownloads;
    NSString *_name;
    NSString *_parentDirectory;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCMapTable *_assetHandles;
    NFUnfairLock *_assetHandlesLock;
    id<FCNetworkBehaviorMonitor> _networkBehaviorMonitor;
    id<FCNetworkReachabilityType> _networkReachability;
    id<FCAssetKeyManagerType> _keyManager;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSURL *_directoryURLForCachedAssets;
    id<FCAVAssetFactoryType> _avAssetFactory;
    id<FCResourceURLGenerating> _resourceURLGenerator;
}

@property (readonly, nonatomic) long long storageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (void)save;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (id)assetHandleForResourceID:(id)a0 contentContext:(id)a1;
- (id)assetHandleForRecordID:(id)a0 field:(long long)a1 lifetimeHint:(long long)a2 contentDatabase:(id)a3;
- (id)assetHandleForResourceID:(id)a0 lifetimeHint:(long long)a1 contentContext:(id)a2;
- (id)importAsset:(id)a0 remoteURL:(id)a1 fileURL:(id)a2;
- (id)init;
- (id)assetHandleForCKAssetURL:(id)a0 lifetimeHint:(long long)a1;
- (id)assetHandleForURL:(id)a0 prefetchedFileURL:(id)a1 importMethod:(long long)a2 lifetimeHint:(long long)a3;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)assetHandleForCKAssetURLString:(id)a0 lifetimeHint:(long long)a1;
- (id)initWithName:(id)a0 directory:(id)a1 keyManager:(id)a2 avAssetFactory:(id)a3 resourceURLGenerator:(id)a4 networkBehaviorMonitor:(id)a5 networkReachability:(id)a6;
- (void).cxx_destruct;
- (void)t_save;
- (id)contentArchiveForAssetHandle:(id)a0;
- (void)d_resetAssetHandle:(id)a0;
- (id)operationToFetchDataProviderForAssetHandle:(id)a0 completion:(id /* block */)a1;
- (id)assetHandleForCKAssetURLString:(id)a0 prefetchedData:(id)a1 unzipIfNeeded:(BOOL)a2 lifetimeHint:(long long)a3;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (id)assetHandleForURL:(id)a0 lifetimeHint:(long long)a1;
- (id)interestTokenForAssetURLs:(id)a0;

@end
