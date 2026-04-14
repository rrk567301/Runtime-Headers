@class PHImageRequestOptions, PHImageRequest, NSProgress, PHCompositeMediaResult;

@interface PHImageRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_highestResultPhaseDelivered;
}

@property (readonly, nonatomic) PHImageRequestOptions *imageOptions;

- (id /* block */)progressHandler;
- (id)_lazyProgress;
- (BOOL)_isVideoFrameRequest;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (long long)type;
- (BOOL)representsShareableHighQualityResource;
- (BOOL)shouldLimitRepairRequestsPerProcess;
- (id)progresses;
- (id)initialRequests;
- (BOOL)isSynchronous;
- (id)_produceFinalImageRequestForRequest:(id)a0;
- (BOOL)shouldReportProgress;
- (BOOL)isNetworkAccessAllowed;
- (id)_produceIntermediateImageRequestForRequest:(id)a0;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)_videoBehavior;
- (void).cxx_destruct;

@end
