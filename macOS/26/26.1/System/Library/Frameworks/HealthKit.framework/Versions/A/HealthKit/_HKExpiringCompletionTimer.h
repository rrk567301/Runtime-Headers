@class NSObject, NSString, NSDate;
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
@property (readonly, nonatomic) NSString *name;

- (void)_cancelTimer;
- (void)_start;
- (void)invalidate;
- (void)dealloc;
- (void)restart;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)_invalidateAndInvokeCompletion:(BOOL)a0 error:(id)a1;
- (id)initWithName:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)invalidateAndInvokeCompletionWithError:(id)a0;
- (void)startWithTimeoutInterval:(double)a0 handler:(id /* block */)a1;

@end
