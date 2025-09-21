@class PHContentEditingInputRequestOptions, PHImageResourceChooser, PHAdjustmentDataRequest, NSArray, PAImageConversionServiceClient, PHRepairRequest, PHContentEditingInputResult, NSProgress, PHImageRequest, PHVideoRequest, NSMutableIndexSet;

@interface PHContentEditingInputRequestContext : PHMediaRequestContext {
    PHContentEditingInputResult *_contentEditingInputResult;
    char _useRAWAsUnadjustedBase;
    PHAdjustmentDataRequest *_adjustmentRequest;
    PHVideoRequest *_videoRequest;
    unsigned long long _imageBaseRequestIndex;
    PHImageRequest *_displayImageRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _inflightMediaRequestCount;
    NSProgress *_adjustmentProgress;
    NSProgress *_videoProgress;
    NSProgress *_imageProgress;
    PHRepairRequest *_repairRequest;
    PHImageResourceChooser *_backupChooser;
    NSArray *_assetResources;
    NSMutableIndexSet *_requestIndexesOfAssetResourceRequests;
    PAImageConversionServiceClient *_imageConversionClient;
}

@property (readonly, nonatomic) PHContentEditingInputRequestOptions *options;

+ (id)contentEditingInputRequestContextForAsset:(id)a0 requestID:(int)a1 managerID:(unsigned long long)a2 networkAccessAllowed:(char)a3 downloadIntent:(long long)a4 progressHandler:(id /* block */)a5 resultHandler:(id /* block */)a6;
+ (char)shouldUseRAWResourceAsUnadjustedBaseForAsset:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (long long)type;
- (void)start;
- (void)cancel;
- (id /* block */)progressHandler;
- (char)isNetworkAccessAllowed;
- (id)initialRequests;
- (id)_assetResources;
- (long long)_adjustmentBaseVersionFromResult:(id)a0 request:(id)a1 canHandleAdjustmentData:(char *)a2;
- (id)_assetResourceForType:(long long)a0;
- (long long)_assetResourceTypeForResourceType:(unsigned int)a0 withBaseVersion:(long long)a1;
- (id)_baseMediaRequestsForBaseVersion:(long long)a0 error:(id *)a1;
- (char)_canSkipMediaMetadataCheckWithBaseVersion:(long long)a0;
- (id)_largestUnadjustedDerivativeImageResource;
- (id)_lazyAdjustmentProgress;
- (id)_lazyImageProgress;
- (id)_lazyVideoProgress;
- (void)_prepareAndAddMediaRequestsToChildRequests:(id)a0;
- (void)_renderTemporaryVideoForObjectBuilder:(id)a0 resultHandler:(id /* block */)a1;
- (void)_renderVideoFromVideoURL:(id)a0 asset:(id)a1 adjustmentData:(id)a2 canHandleAdjustmentData:(char)a3 resultHandler:(id /* block */)a4;
- (id)_resourceRequestForAssetResource:(id)a0 wantsURLOnly:(char)a1 progress:(id)a2;
- (char)_shouldRequestImage;
- (char)_shouldRequestVideo;
- (id)_videoBehaviorSpecForBaseVersion:(long long)a0;
- (long long)downloadIntent;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 useRAWAsUnadjustedBase:(char)a4 resultHandler:(id /* block */)a5;
- (void)processAndReturnResultsWithRequest:(id)a0;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(char)a1 isDegraded:(char)a2 result:(id)a3;
- (id)progresses;

@end
