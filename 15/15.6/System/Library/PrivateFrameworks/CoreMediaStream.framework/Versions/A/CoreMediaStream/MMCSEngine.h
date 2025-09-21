@class NSTimer, NSString, NSURL, NSThread, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray;
@protocol MMCSEngineDelegate, OS_dispatch_queue;

@interface MMCSEngine : NSObject {
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    struct _mmcs_engine { } *_engine;
    struct { long long version; void *context; void /* function */ *getFileDescriptorAndContentTypeFromItemCallback; void /* function */ *getItemProgressCallback; void /* function */ *getItemDoneCallback; void /* function */ *putItemProgressCallback; void /* function */ *putItemDoneCallback; void /* function */ *requestCompletedCallback; } _engineClientContext;
    NSMutableDictionary *_itemIDToAssetMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
}

@property (retain, nonatomic) NSTimer *threadKeepAliveTimer;
@property (nonatomic) char isDone;
@property (weak, nonatomic) id<MMCSEngineDelegate> delegate;
@property (readonly, nonatomic) char hasOutstandingActivity;
@property (nonatomic) char autoGenerateItemID;
@property (nonatomic) char isMetricsGatheringEnabled;
@property (retain, nonatomic) NSThread *workThread;

+ (id)logStringForGetItemState:(int)a0;
+ (id)logStringForPutItemState:(int)a0;

- (void).cxx_destruct;
- (char)isActive;
- (void)cancelAllOperations;
- (void)performBlock:(id /* block */)a0;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)_registerAsset:(id)a0;
- (id)_assetWithItemID:(unsigned long long)a0;
- (void)_doNothingTimerHandler:(id)a0;
- (char)_getFileDescriptorAndContentTypeFromItemID:(unsigned long long)a0 outFD:(int *)a1 outItemType:(id *)a2 outError:(id *)a3;
- (void)_getItemDoneItemID:(unsigned long long)a0 path:(id)a1 requestorContext:(id)a2 error:(id)a3;
- (void)_getItemProgressItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 requestorContext:(id)a3 error:(id)a4;
- (void)_initItemIDPersistence;
- (unsigned long long)_nextItemID;
- (void)_putItemDoneItemID:(unsigned long long)a0 requestorContext:(id)a1 putReceipt:(id)a2 error:(id)a3;
- (void)_putItemProgressItemID:(unsigned long long)a0 state:(int)a1 progress:(double)a2 requestorContext:(id)a3 error:(id)a4;
- (void)_registerRequestorContext:(id)a0;
- (void)_removeAssetForItemID:(unsigned long long)a0;
- (void)_removeRequestorContext:(id)a0;
- (void)_requestCompletedRequestorContext:(id)a0;
- (void)cancelOperationsWithContext:(id)a0;
- (void)getAssets:(id)a0 requestURL:(id)a1 DSID:(id)a2 options:(id)a3;
- (id)initWithWorkPath:(id)a0 appIDHeader:(id)a1 dataClass:(id)a2 options:(id)a3;
- (id)initWithWorkPath:(id)a0 appIDHeader:(id)a1 dataClass:(id)a2 options:(id)a3 modes:(id)a4;
- (void)performBlockOnWorkThread:(id /* block */)a0;
- (void)performBlockOnWorkThread:(id /* block */)a0 waitUntilDone:(char)a1;
- (void)putAssets:(id)a0 requestURL:(id)a1 DSID:(id)a2 options:(id)a3;
- (void)registerAssetForUpload:(id)a0 completionBlock:(id /* block */)a1;
- (void)registerAssets:(id)a0 forDownloadCompletionBlock:(id /* block */)a1;
- (void)reregisterAssetForDownload:(id)a0;
- (void)reregisterAssetForUpload:(id)a0;
- (void)threadMain:(id)a0;
- (void)unregisterAsset:(id)a0;
- (void)unregisterAssets:(id)a0;

@end
