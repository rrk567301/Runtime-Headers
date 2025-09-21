@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LNWatchdogTimer : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, getter=_isStopped) char stopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) double remainingInterval;
@property (nonatomic) double startTime;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)_reset;
- (void)cancel;
- (char)isStopped;
- (void)stop;
- (void)_cancel;
- (void)_start;
- (void)_stop;
- (char)isCanceled;
- (char)cancelIfNotAlreadyCanceled;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (char)_cancelIfNotAlreadyCanceled;
- (char)_isCanceled;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 singleUse:(char)a2 timeoutHandler:(id /* block */)a3;
- (id)initWithTimeoutInterval:(double)a0 singleUse:(char)a1 timeoutHandler:(id /* block */)a2;

@end
