@class NSMutableSet;
@protocol HKSPMutexProvider, NAScheduler;

@interface HKSPLimitingScheduler : NSObject {
    id<NAScheduler> _orderPreservingScheduler;
    id<HKSPMutexProvider> _mutexProvider;
    NSMutableSet *_identifiers;
    char _ignoreDelays;
}

- (void).cxx_destruct;
- (void)scheduleTask:(id)a0;
- (id)initWithScheduler:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)initWithScheduler:(id)a0 mutexGenerator:(id /* block */)a1;
- (id)initWithScheduler:(id)a0 mutexGenerator:(id /* block */)a1 ignoreDelays:(char)a2;

@end
