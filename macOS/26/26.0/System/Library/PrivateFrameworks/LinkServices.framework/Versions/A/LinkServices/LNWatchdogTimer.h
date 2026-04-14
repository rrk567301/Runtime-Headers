@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LNWatchdogTimer : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, getter=_isStopped) BOOL stopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) double remainingInterval;
@property (nonatomic) double startTime;

- (void)_stop;
- (void)_reset;
- (void)_start;
- (BOOL)isCanceled;
- (void)reset;
- (void)start;
- (void)dealloc;
- (BOOL)_isCanceled;
- (void)_cancel;
- (void)stop;
- (void)cancel;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (BOOL)cancelIfNotAlreadyCanceled;
- (BOOL)isStopped;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 singleUse:(BOOL)a2 timeoutHandler:(id /* block */)a3;
- (id)initWithTimeoutInterval:(double)a0 singleUse:(BOOL)a1 timeoutHandler:(id /* block */)a2;

@end
