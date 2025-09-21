@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ARDispatchSourceExecutor : NSObject <ARRepetitiveExecutor> {
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

- (void)stop;
- (id)init;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)executeWithInterval:(double)a0 initialDelay:(double)a1 block:(id /* block */)a2;

@end
