@class NSMutableArray, NSString, NSObject, PEResourceLoadRequest;
@protocol OS_dispatch_queue, PEAsset;

@interface PEResourceLoader : NSObject

@property (nonatomic, setter=_setResourcesAvailability:) long long resourcesAvailability;
@property (retain, nonatomic) PEResourceLoadRequest *currentRequest;
@property (retain, nonatomic, setter=_setEnqueuedRequests:) NSMutableArray *_enqueuedRequests;
@property (nonatomic, setter=_setContentEditingRequestID:) unsigned long long _contentEditingRequestID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;
@property (retain, nonatomic) NSString *adjustmentIdentifierAndVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) id<PEAsset> asset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) char skipDisplaySizeImage;
@property (nonatomic) char simulateEditEntryError;
@property (nonatomic) char forceRunAsUnadjustedAsset;

+ (void)_processResult:(id)a0 forRequest:(id)a1 resultHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (char)cancelAllRequests;
- (void)enqueueRequest:(id)a0;
- (id)initWithAsset:(id)a0 loadingQueue:(id)a1;
- (char)_adjustmentDataIsSupported:(id)a0;
- (void)_dequeueRequestIfNeeded;
- (void)_downloadSignpostEvent:(const char *)a0;
- (void)_handleSuccess:(char)a0 withResult:(id)a1 forRequest:(id)a2 error:(id)a3;
- (void)_initiateRequest:(id)a0;
- (void)_processContentEditingInputRequestCompletion:(id)a0 info:(id)a1 forRequest:(id)a2;
- (void)_processLoadedContentEditingInput:(id)a0 info:(id)a1 forRequest:(id)a2;
- (void)_requestContentEditingInputForRequest:(id)a0 networkAccessAllowed:(char)a1;
- (long long)workImageVersionForContentEditingInput:(id)a0;

@end
