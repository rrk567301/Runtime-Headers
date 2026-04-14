@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MSASAssetDownloaderDelegate;

@interface MSASAssetDownloader : MSASAssetTransferer

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary *assetToItemInFlightMap;
@property (retain, nonatomic) NSMutableArray *finishedAssets;
@property (nonatomic) BOOL didEncounterNetworkConditionError;
@property (nonatomic) BOOL isDownloadingThumbnails;
@property (retain, nonatomic) NSString *currentFocusAlbumGUID;
@property (retain, nonatomic) NSString *currentFocusAssetCollectionGUID;
@property (nonatomic) BOOL isWaitingForFirstDownloadEvent;
@property (retain, nonatomic) NSString *objectGUID;
@property (retain, nonatomic) NSString *downloadBatchPerfGUID;
@property (weak, nonatomic) id<MSASAssetDownloaderDelegate> delegate;

- (void)MMCSEngine:(id)a0 didMakePutProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)_workQueueDidFinishWithItem:(id)a0 error:(id)a1;
- (void)registerAssets:(id)a0 completionBlock:(id /* block */)a1;
- (id)_pathForPersonID:(id)a0;
- (void)didEnqueueAsset:(id)a0 forAlbumGUID:(id)a1;
- (id)workQueueObjectGUID;
- (void)didFinishGettingAllAssets;
- (void)workQueueRegisterAssets:(id)a0 completionBlock:(id /* block */)a1;
- (void)MMCSEngine:(id)a0 didMakeGetProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)workQueueStop;
- (void)workQueueUnregisterAssets:(id)a0;
- (void)_workQueueStopTrackingItem:(id)a0;
- (void)MMCSEngine:(id)a0 didCreateRequestorContext:(id)a1 forAssets:(id)a2;
- (void)unregisterAssets:(id)a0;
- (void)workQueueCancel;
- (void).cxx_destruct;
- (void)workQueueDownloadNextBatch;
- (void)workQueueShutDownCompletionBlock:(id /* block */)a0;
- (void)MMCSEngine:(id)a0 didFinishPuttingAsset:(id)a1 error:(id)a2;
- (void)MMCSEngine:(id)a0 didFinishGettingAsset:(id)a1 path:(id)a2 error:(id)a3;
- (void)didFinishPuttingAllAssets;
- (void)_workQueueGoIdle;
- (id)_orphanedAssetError;
- (void)workQueueRetryOutstandingActivities;

@end
