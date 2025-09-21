@class NSError, PHAsset, PHImageResourceChooser, NSString, PHImageDisplaySpec, NSMutableDictionary, NSObject, NSMutableArray, NSMutableSet, NSProgress;
@protocol OS_dispatch_queue, PHMediaRequestContextDelegate;

@interface PHMediaRequestContext : NSObject <PHImageRequestDelegate, PHAdjustmentDataRequestDelegate> {
    id /* block */ _resultHandler;
    _Atomic unsigned long long _nextID;
    _Atomic int _repairAttemptCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_requests;
    NSMutableSet *_inflightRequestIdentifiers;
    char _isCancelled;
    NSMutableDictionary *_progressByTaskIdentifier;
    NSProgress *_totalProgress;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *chooserQueue;

@property (retain, nonatomic) PHImageResourceChooser *imageResourceChooser;
@property (retain, nonatomic) PHMediaRequestContext *supplementaryRequestContext;
@property (retain, nonatomic) PHImageDisplaySpec *displaySpec;
@property (retain, nonatomic) NSError *prestartError;
@property (weak, nonatomic) id<PHMediaRequestContextDelegate> delegate;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) unsigned long long signpostLayoutID;
@property (readonly, nonatomic) int requestID;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long managerID;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)contentEditingInputRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 options:(id)a3 useRAWAsUnadjustedBase:(char)a4 resultHandler:(id /* block */)a5;
+ (id)imageRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 imageRequestOptions:(id)a3 displaySpec:(id)a4 resultHandler:(id /* block */)a5;
+ (id)livePhotoRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 livePhotoRequestOptions:(id)a3 displaySpec:(id)a4 resultHandler:(id /* block */)a5;
+ (id)videoRequestContextWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 videoRequestOptions:(id)a3 intent:(long long)a4 resultHandler:(id /* block */)a5;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isCancelled;
- (id /* block */)progressHandler;
- (char)isSynchronous;
- (char)isNetworkAccessAllowed;
- (id)initialRequests;
- (void)mediaRequest:(id)a0 didReportProgress:(id)a1;
- (id)_produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(char)a1 isDegraded:(char)a2;
- (id)_produceChildRequestsForRequest:(id)a0 withResult:(id)a1;
- (void)_registerAndStartRequests:(id)a0;
- (id)_requestWithIdentifier:(id)a0;
- (void)_setupProgressIfNeeded;
- (void)adjustmentDataRequest:(id)a0 didReportProgress:(double)a1 completed:(char)a2 error:(id)a3;
- (void)beginCustomAsyncWorkWithIdentifier:(id)a0;
- (void)finishCustomAsyncWorkWithIdentifier:(id)a0;
- (void)imageRequest:(id)a0 isQueryingCacheAndDidWait:(char *)a1 didFindImage:(char *)a2 resultHandler:(id /* block */)a3;
- (void)imageRequest:(id)a0 isRequestingScheduledWorkBlock:(id /* block */)a1;
- (id)initWithRequestID:(int)a0 managerID:(unsigned long long)a1 asset:(id)a2 displaySpec:(id)a3 resultHandler:(id /* block */)a4;
- (int)maxRepairRequests;
- (void)mediaRequest:(id)a0 didFindLocallyAvailableResult:(char)a1 isDegraded:(char)a2;
- (void)mediaRequest:(id)a0 didFinishWithResult:(id)a1;
- (void)mediaRequest:(id)a0 didRequestRetryWithHintsAllowed:(char)a1;
- (char)mediaRequestCanRequestRepair:(id)a0;
- (unsigned long long)nextRequestIndex;
- (void)processMediaResult:(id)a0 forRequest:(id)a1;
- (id)produceChildRequestsForRequest:(id)a0 reportingIsLocallyAvailable:(char)a1 isDegraded:(char)a2 result:(id)a3;
- (id)progresses;
- (char)representsShareableHighQualityResource;
- (void)requestWithIdentifier:(id)a0 didReportProgress:(double)a1 completed:(char)a2 error:(id)a3;
- (char)retryMediaRequest:(id)a0 afterFailureWithError:(id)a1;
- (void)setProgress:(id)a0 forRequestIdentifier:(id)a1;
- (char)shouldLimitRepairRequestsPerProcess;
- (char)shouldReportProgress;
- (double)totalProgressFraction;

@end
