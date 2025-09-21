@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface SCDAWatchdogTimer : NSObject <NSCopying> {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _timeoutHandler;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

- (void)reset;
- (void)start;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)stop;
- (void)cancel;
- (BOOL)cancelIfNotAlreadyCanceled;
- (BOOL)isStopped;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
