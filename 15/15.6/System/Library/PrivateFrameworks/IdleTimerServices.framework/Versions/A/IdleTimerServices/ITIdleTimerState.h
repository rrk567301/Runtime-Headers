@class ITIdleTimerStateModel;
@protocol ITIdleTimerStateRequestHandling;

@interface ITIdleTimerState : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    ITIdleTimerStateModel *_model;
    id<ITIdleTimerStateRequestHandling> _requestHandler;
}

@property (class, readonly, nonatomic) char isIdleTimerServiceAvailable;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithModel:(id)a0;
- (char)isIdleTimerServiceAvailable;
- (id)newAssertionToDisableIdleTimerForReason:(id)a0;
- (id)newAssertionToDisableIdleTimerForReason:(id)a0 error:(id *)a1;
- (id)newIdleTimerAssertionWithConfiguration:(id)a0 forReason:(id)a1;
- (id)newIdleTimerAssertionWithConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;

@end
