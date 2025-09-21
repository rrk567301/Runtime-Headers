@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MSASAssetDownloaderDelegate;

@interface MSASAssetDownloader : MSASAssetTransferer

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary *assetToItemInFlightMap;
@property (retain, nonatomic) NSMutableArray *finishedAssets;
@property (nonatomic) char didEncounterNetworkConditionError;
@property (nonatomic) char isDownloadingThumbnails;
@property (retain, nonatomic) NSString *currentFocusAlbumGUID;
@property (retain, nonatomic) NSString *currentFocusAssetCollectionGUID;
@property (nonatomic) char isWaitingForFirstDownloadEvent;
@property (retain, nonatomic) NSString *objectGUID;
@property (retain, nonatomic) NSString *downloadBatchPerfGUID;
@property (weak, nonatomic) id<MSASAssetDownloaderDelegate> delegate;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)a0 didFinishGettingAsset:(id)a1 path:(id)a2 error:(id)a3;
- (void)MMCSEngine:(id)a0 didMakePutProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)MMCSEngine:(id)a0 didCreateRequestorContext:(id)a1 forAssets:(id)a2;
- (void)MMCSEngine:(id)a0 didFinishPuttingAsset:(id)a1 error:(id)a2;
- (void)MMCSEngine:(id)a0 didMakeGetProgress:(float)a1 state:(int)a2 onAsset:(id)a3;
- (void)registerAssets:(id)a0 completionBlock:(id /* block */)a1;
- (void)workQueueCancel;
- (id)_orphanedAssetError;
- (id)_pathForPersonID:(id)a0;
- (void)_workQueueDidFinishWithItem:(id)a0 error:(id)a1;
- (void)_workQueueGoIdle;
- (void)_workQueueStopTrackingItem:(id)a0;
- (void)didEnqueueAsset:(id)a0 forAlbumGUID:(id)a1;
- (void)didFinishGettingAllAssets;
- (void)didFinishPuttingAllAssets;
- (void)unregisterAssets:(id)a0;
- (void)workQueueDownloadNextBatch;
- (id)workQueueObjectGUID;
- (void)workQueueRegisterAssets:(id)a0 completionBlock:(id /* block */)a1;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id /* block */)a0;
- (void)workQueueStop;
- (void)workQueueUnregisterAssets:(id)a0;

@end
