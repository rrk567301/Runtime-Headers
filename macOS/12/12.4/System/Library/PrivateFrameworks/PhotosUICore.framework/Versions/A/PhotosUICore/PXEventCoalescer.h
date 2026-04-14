@class NSHashTable;

@interface PXEventCoalescer : NSObject {
    NSHashTable *_observers;
}

+ (id)delayedCoalescerWithDelay:(double)a0;
+ (id)rateLimitingCoalescerWithRate:(double)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)inputEvent;
- (void)signalObservers;

@end
