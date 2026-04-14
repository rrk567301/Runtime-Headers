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

- (void)stop;
- (void)_reset;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void)_cancel;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)cancel;
- (BOOL)cancelIfNotAlreadyCanceled;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (void)start;
- (void)_stop;
- (BOOL)_isCanceled;
- (void)dealloc;
- (void)_start;

@end
