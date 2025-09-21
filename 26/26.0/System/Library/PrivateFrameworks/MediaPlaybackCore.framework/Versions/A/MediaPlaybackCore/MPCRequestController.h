@class NSString, NSError, NSObject;
@protocol MPRequestCancellationToken, OS_dispatch_source, OS_dispatch_queue, MPCRequestControllerDelegate;

@interface MPCRequestController : NSObject {
    long long _numberOfObservers;
    NSString *_requestID;
    BOOL _shouldAutomaticallyLoad;
    BOOL _needsReload;
    id<MPRequestCancellationToken> _cancelToken;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSError *_lastError;
    id _pendingResponse;
    unsigned long long _stateHandle;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id response;
@property (retain, nonatomic) id request;
@property (weak, nonatomic) id<MPCRequestControllerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void)setNeedsReload;
- (void).cxx_destruct;
- (void)reloadIfNeeded;
- (void)_onQueue_reloadIfNeeded;
- (void)_onQueue_scheduleRetryAfterInterval:(double)a0;
- (id)_onQueue_stateDictionary;
- (void)_onQueue_updateRequestID;
- (void)_responseDidInvalidate:(id)a0;
- (void)beginAutomaticResponseLoading;
- (void)endAutomaticResponseLoading;
- (void)setNeedsReloadForSignificantRequestChange;

@end
