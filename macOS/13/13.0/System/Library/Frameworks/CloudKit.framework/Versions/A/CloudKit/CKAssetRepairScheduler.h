@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSURL, CKUploadRequestConfiguration, NSObject, CKContainer;
@protocol OS_dispatch_queue, OS_dispatch_source, CKAssetRepairSchedulerDelegate;

@interface CKAssetRepairScheduler : NSObject {
    CKContainer *_container;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_uploadOperationQueue;
    NSObject<OS_dispatch_source> *_uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> *_uploadSuspensionTimer;
    NSMutableDictionary *_remainingAssetsToRequestCallbacks;
    NSMutableDictionary *_assetCache;
    NSMutableSet *_confirmedMissingAssets;
    NSMutableSet *_assetsBeingRequested;
    NSMutableSet *_assetsBeingUploaded;
    NSMutableDictionary *_retryCountForAssets;
}

@property (copy, nonatomic) NSURL *temporaryAssetDirectory;
@property (nonatomic) double requestTimeout;
@property (nonatomic) long long repairBatchCountLimit;
@property (nonatomic) long long cacheCountLimit;
@property (nonatomic) double defaultSuspensionTime;
@property (nonatomic) long long repairRetryCount;
@property (weak) id<CKAssetRepairSchedulerDelegate> delegate;

+ (id)nameForEvent:(long long)a0;
+ (long long)estimatedSizeForAssetOrPackage:(id)a0;
+ (long long)canCopyFromFileURL:(id)a0 toDirectoryURL:(id)a1;
+ (unsigned long long)remainingCapacityAtURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (id)initWithContainer:(id)a0 repairContainerOverrides:(id)a1;
- (void)addUploadRequestsWithMetadata:(id)a0 requestBlocks:(id)a1;
- (void)removeUploadRequestWithRecordID:(id)a0;
- (void)tickle;
- (void)clearAssetCache;
- (id)clonedAsset:(id)a0 withError:(id *)a1;
- (BOOL)hasPendingWork;
- (id)allRemainingRequestableAssets;
- (id)allRemainingUploadableAssets;

@end
