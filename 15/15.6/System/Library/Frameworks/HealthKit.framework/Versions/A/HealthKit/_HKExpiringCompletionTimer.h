@class NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKExpiringCompletionTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    double _expirationTime;
    double _timeout;
    id /* block */ _timeoutHandler;
    char _invalidated;
    id /* block */ _completion;
}

@property (readonly, nonatomic, getter=isExpired) char expired;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_start;
- (void)restart;
- (void)_cancelTimer;
- (id)initWithCompletion:(id /* block */)a0;
- (void)_invalidateAndInvokeCompletion:(char)a0 error:(id)a1;
- (id)initWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)invalidateAndInvokeCompletionWithError:(id)a0;
- (void)startWithTimeoutInterval:(double)a0 handler:(id /* block */)a1;

@end
