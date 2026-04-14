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
- (id)initialRequests;
- (long long)type;
- (id)_produceFinalImageRequestForRequest:(id)a0;
- (BOOL)representsShareableHighQualityResource;
- (id)progresses;
- (BOOL)isNetworkAccessAllowed;
- (id)_videoBehavior;
- (id)_produceIntermediateImageRequestForRequest:(id)a0;
- (void).cxx_destruct;
- (id)_lazyProgress;
- (BOOL)_isVideoFrameRequest;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (BOOL)isSynchronous;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (BOOL)shouldReportProgress;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (BOOL)shouldLimitRepairRequestsPerProcess;

@end
