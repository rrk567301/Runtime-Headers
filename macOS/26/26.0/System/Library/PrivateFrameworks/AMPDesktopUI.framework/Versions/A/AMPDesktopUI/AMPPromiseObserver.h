@protocol AMPTaskScheduler;

@interface AMPPromiseObserver : NSObject {
    id /* block */ _resolveBlock;
    id /* block */ _rejectBlock;
    id<AMPTaskScheduler> _scheduler;
}

- (void)notifyRejectedWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithResolveBlock:(id /* block */)a0 rejectBlock:(id /* block */)a1 scheduler:(id)a2;
- (void)notifyResolvedWihValue:(id)a0;

@end
