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

- (void)_stop;
- (void)_reset;
- (void)_start;
- (BOOL)isCanceled;
- (void)start;
- (void)dealloc;
- (BOOL)_isCanceled;
- (void)_cancel;
- (void)stop;
- (void)cancel;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (BOOL)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (void).cxx_destruct;

@end
