@class NSString, NSError, NSMutableArray, NSDate;

@interface PXPhotoAnalysisStatusController : PXObservable {
    struct { char graphStatus; } _needsUpdateFlags;
}

@property (nonatomic, setter=_setGraphStatus:) long long graphStatus;
@property (nonatomic, setter=_setHasBeenReadyForSomeTime:) char hasBeenReadyForSomeTime;
@property (nonatomic, setter=_setGraphFractionCompleted:) double graphFractionCompleted;
@property (nonatomic, setter=_setDidReceiveGraphFractionCompleted:) char _didReceiveGraphFractionCompleted;
@property (retain, nonatomic, setter=_setInitialUpdateDate:) NSDate *_initialUpdateDate;
@property (retain, nonatomic, setter=_setLastGraphBecameReadyDate:) NSDate *_lastGraphBecameReadyDate;
@property (nonatomic, getter=_isGraphReady, setter=_setGraphReady:) char _graphReady;
@property (retain, nonatomic, setter=_setGraphError:) NSError *_graphError;
@property (nonatomic, getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:) char _requestingGraphFractionCompleted;
@property (readonly, nonatomic) NSMutableArray *_retryBlocks;
@property (readonly, nonatomic) NSString *stateDescription;

+ (id)sharedStatusController;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (char)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)_dequeueAndPerformBlocks:(id)a0;
- (void)_handleGraphFractionCompletedReply:(id)a0 error:(id)a1;
- (void)_handleGraphReadyForSomeTimeForDate:(id)a0;
- (void)_handleGraphReadyReplyWithSuccess:(char)a0 error:(id)a1;
- (void)_handleInitialGraceDelay;
- (void)_invalidateGraphStatus;
- (char)_isWithinGracePeriod;
- (void)_requestGraphFractionCompleted;
- (void)_requestGraphReady;
- (void)_updateGraphStatusIfNeeded;
- (void)registerRetryBlock:(id /* block */)a0;

@end
