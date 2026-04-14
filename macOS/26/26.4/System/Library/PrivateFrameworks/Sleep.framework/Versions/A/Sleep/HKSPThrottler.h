@class HKSPTask, HKSPLimitingScheduler;

@interface HKSPThrottler : NSObject {
    HKSPTask *_task;
    HKSPLimitingScheduler *_backingScheduler;
}

- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2 mutexGenerator:(id /* block */)a3;
- (void)execute;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1;

@end
