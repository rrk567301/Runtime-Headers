@class NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKExpiringCompletionTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    double _expirationTime;
    double _timeout;
    id /* block */ _timeoutHandler;
    BOOL _invalidated;
    id /* block */ _completion;
}

@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_start;
- (void)_cancelTimer;
- (id)initWithCompletion:(id /* block */)a0;
- (void)restart;
- (id)initWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)startWithTimeoutInterval:(double)a0 handler:(id /* block */)a1;
- (void)invalidateAndInvokeCompletionWithError:(id)a0;
- (void)_invalidateAndInvokeCompletion:(BOOL)a0 error:(id)a1;

@end
