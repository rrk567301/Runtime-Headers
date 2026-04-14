@class NSSet, NSArray, NSMutableSet, NSMutableArray, BSCompoundAssertion;

@interface _BKSHIDLocalEventDeliveryManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_discreteDispatchingSeed;
    NSMutableSet *_lock_discreteDispatchingRoots;
    NSSet *_lock_lastSentDiscreteDispatchingRoots;
    unsigned int _lock_deferringSeed;
    NSMutableArray *_lock_deferringRules;
    NSArray *_lock_lastSentDeferringRules;
    long long _lock_preventFlushingSeed;
    BSCompoundAssertion *_preventFlushingAssertion;
}

@property (copy, nonatomic) id /* block */ transactionHandler;

- (void)dealloc;
- (void)_lock_flushIfNeeded;
- (id)transactionAssertionWithReason:(id)a0;
- (id)init;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (void).cxx_destruct;

@end
