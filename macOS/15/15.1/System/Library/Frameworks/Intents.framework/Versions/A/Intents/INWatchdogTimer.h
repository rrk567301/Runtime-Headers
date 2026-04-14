@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface INWatchdogTimer : NSObject {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)_reset;
- (void)cancel;
- (void)stop;
- (void)_start;
- (void)_cancel;
- (void)_stop;
- (BOOL)_isCanceled;
- (BOOL)isCanceled;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;

@end
