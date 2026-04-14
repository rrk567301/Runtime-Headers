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

- (BOOL)isCanceled;
- (void)_reset;
- (void)_start;
- (void)start;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)cancel;
- (void)_cancel;
- (void)dealloc;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)stop;
- (BOOL)_isCanceled;
- (void).cxx_destruct;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void)_stop;

@end
