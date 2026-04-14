@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AXUserEventTimer : NSObject {
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSHashTable *_assertions;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_startTrackingPoorMansAssertion:(id)a0;
- (void)_stopTrackingPoorMansAssertion:(id)a0;
- (void)userEventOccurred;
- (BOOL)_canUseIdleTimerServices;
- (id)acquireAssertionToDisableIdleTimerWithReason:(id)a0;

@end
