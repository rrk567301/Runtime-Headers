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

- (void)_cancel;
- (BOOL)isCanceled;
- (void)cancel;
- (void)start;
- (void)_reset;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)stop;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)_stop;
- (BOOL)_isCanceled;
- (void)_start;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void)dealloc;
- (BOOL)_cancelIfNotAlreadyCanceled;

@end
