@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLDelayedActionTimer : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_timer;
    double _start;
    double _delay;
    double _end;
}

@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) double timeRemaining;

- (id)initWithTargetQueue:(id)a0;
- (void)dealloc;
- (void)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)cancel;
- (id)description;
- (void).cxx_destruct;

@end
