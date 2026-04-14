@class PHImageRequestOptions, PHImageRequest, NSProgress, PHCompositeMediaResult;

@interface PHImageRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    PHImageRequest *_initialRequest;
    PHImageRequest *_intermediateRequest;
    PHImageRequest *_finalRequest;
    struct atomic_flag { _Atomic BOOL _Value; } _firstNonFastResultWasObserved;
    struct atomic_flag { _Atomic BOOL _Value; } _finalResultSent;
    PHCompositeMediaResult *_delayedFinalInvalidDataResult;
}

@property (readonly, nonatomic) PHImageRequestOptions *imageOptions;

- (void).cxx_destruct;
- (long long)type;
- (BOOL)isSynchronous;
- (id /* block */)progressHandler;
- (id)initialRequests;
- (BOOL)_isVideoFrameRequest;
- (id)_lazyProgress;
- (id)_produceFinalImageRequestForRequest:(id)a0;
- (id)_produceIntermediateImageRequestForRequest:(id)a0;
- (id)_videoBehavior;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 options:(id)a4 resultHandler:(id /* block */)a5;
- (BOOL)isNetworkAccessAllowed;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(BOOL)a1 isDegraded:(BOOL)a2 result:(id)a3;
- (id)progresses;
- (BOOL)representsShareableHighQualityResource;
- (BOOL)shouldLimitRepairRequestsPerProcess;
- (BOOL)shouldReportProgress;

@end
