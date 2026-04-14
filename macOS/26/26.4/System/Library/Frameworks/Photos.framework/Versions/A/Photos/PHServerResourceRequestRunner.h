@class NSString, NSProgress, PLProgressFollower;
@protocol PLResourceDataStore;

@interface PHServerResourceRequestRunner : NSObject {
    NSProgress *_progress;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLProgressFollower *_dataStoreFollower;
    id<PLResourceDataStore> _dataStore;
    long long _state;
}

@property (readonly, nonatomic) NSString *taskIdentifier;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)dealloc;
- (long long)state;
- (id)_applyCorrectionsToAssetObjectIDURL:(id)a0 resourceIdentity:(id)a1 errorCodes:(id)a2 clientBundleID:(id)a3 library:(id)a4 reply:(id /* block */)a5;
- (id)_assetAndRelatedObjectsFromAssetObjectIDURL:(id)a0 inManagedObjectContext:(id)a1 error:(id *)a2;
- (id)_avAssetProxyForOutOfBandHintsAboutAssetForResource:(id)a0;
- (void)_cancelWithReply:(id /* block */)a0;
- (void)_handleLocalAvailabilityChangeWithFileURL:(id)a0 transientData:(id)a1 isExpectingOnlyData:(BOOL)a2 resourceCPLType:(unsigned long long)a3 library:(id)a4 expectedMasterThumbnailURL:(id)a5 assetObjectID:(id)a6 resourceObjectID:(id)a7 resourceVersion:(unsigned int)a8 resourceUTIString:(id)a9 resourceOrientation:(unsigned int)a10 error:(id)a11 reply:(id /* block */)a12;
- (void)_handleProgress:(id)a0;
- (void)_replyToVideoRequestWithURL:(id)a0 mediaItemMakerData:(id)a1 mutableInfo:(id)a2 internalInfo:(id)a3 error:(id)a4 pathForAdjustmentFileIfNeeded:(id)a5 reply:(id /* block */)a6;
- (BOOL)_resourceQualifiesForCacheMetricsCollection:(id)a0 isLivePhoto:(BOOL)a1;
- (void)_safeReply:(id /* block */)a0;
- (id)_urlByAttachingOutOfBandHintsToVideoURL:(id)a0 assetProxy:(id)a1 signpostId:(unsigned long long)a2 hintsBase64String:(id *)a3;
- (void)addClientSystemInformationToMutableStreamingHints:(id)a0;
- (id)applyAssetScopeCorrectionsWithRequest:(id)a0 errorCodes:(id)a1 clientBundleID:(id)a2 library:(id)a3 reply:(id /* block */)a4;
- (id)applyResourceScopeCorrectionsWithRequest:(id)a0 errorCodes:(id)a1 clientBundleID:(id)a2 library:(id)a3 reply:(id /* block */)a4;
- (id)chooseVideoWithRequest:(id)a0 library:(id)a1 clientBundleID:(id)a2 reply:(id /* block */)a3;
- (BOOL)currentSystemSupportsProMotionDisplay;
- (id)initWithTaskIdentifier:(id)a0;
- (id)makeResourceAvailableWithRequest:(id)a0 library:(id)a1 clientBundleID:(id)a2 reply:(id /* block */)a3;
- (void)makeResourceUnavailableWithRequest:(id)a0 library:(id)a1;
- (id)mutableStreamingHintsForAVAssetProxy:(id)a0;
- (id)startDownloadForRequest:(id)a0 backingResource:(id)a1 clientBundleID:(id)a2 shouldReturnAdjustmentInfo:(BOOL)a3 needsDownload:(BOOL)a4 shouldApplyTimeRange:(BOOL)a5 reply:(id /* block */)a6;
- (void)startWalrusTimeRangeDownloadForRequest:(id)a0 backingResource:(id)a1 clientBundleID:(id)a2 shouldReturnAdjustmentInfo:(BOOL)a3 partialVideoURL:(id)a4 reply:(id /* block */)a5;
- (id)videoResourceChoiceForAsset:(id)a0 context:(id)a1 loadingMode:(long long *)a2 request:(id)a3 shouldReturnAdjustmentInfo:(BOOL *)a4 error:(id *)a5;

@end
