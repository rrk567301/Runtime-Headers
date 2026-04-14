@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LNWatchdogTimer : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, getter=_isStopped) BOOL stopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) double remainingInterval;
@property (nonatomic) double startTime;

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
- (BOOL)isStopped;
- (void)reset;
- (void)start;
- (void)_stop;
- (BOOL)_isCanceled;
- (void)dealloc;
- (void)_start;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 singleUse:(BOOL)a2 timeoutHandler:(id /* block */)a3;
- (id)initWithTimeoutInterval:(double)a0 singleUse:(BOOL)a1 timeoutHandler:(id /* block */)a2;

@end
