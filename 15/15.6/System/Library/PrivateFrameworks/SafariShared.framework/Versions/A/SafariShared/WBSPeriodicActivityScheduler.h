@class NSBackgroundActivityScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPeriodicActivityScheduler : NSObject {
    id /* block */ _block;
    char _invalidated;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_performActivity;
- (void)_scheduleActivityWithInterval:(double)a0;
- (id)initWithInterval:(double)a0 minimumDelay:(double)a1 lastFireDate:(id)a2 block:(id /* block */)a3;

@end
