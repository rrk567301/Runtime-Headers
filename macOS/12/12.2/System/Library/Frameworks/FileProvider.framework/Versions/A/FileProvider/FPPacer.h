@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPPacer : NSObject {
    double _lastFireTime;
    double _minFireInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    _Atomic int _sourceSuspendCount;
}

@property (copy, nonatomic) id /* block */ eventBlock;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)signal;
- (void)_fire;
- (id)initWithName:(id)a0 queue:(id)a1 minFireInterval:(double)a2;
- (void)_scheduleNextFire;
- (double)_computeNextTime;

@end
