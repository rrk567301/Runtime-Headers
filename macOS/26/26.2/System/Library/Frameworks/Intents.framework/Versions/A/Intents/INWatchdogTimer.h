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
- (void)cancel;
- (BOOL)isCanceled;
- (void)stop;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)_stop;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)start;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (void)_start;
- (BOOL)_isCanceled;
- (void)_reset;
- (void)dealloc;

@end
