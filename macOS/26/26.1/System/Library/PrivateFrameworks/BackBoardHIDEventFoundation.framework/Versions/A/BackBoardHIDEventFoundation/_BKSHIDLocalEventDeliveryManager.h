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

- (id)deferEventsMatchingPredicate:(id)a0 toTarget:(id)a1 withReason:(id)a2;
- (id)transactionAssertionWithReason:(id)a0;
- (id)dispatchDiscreteEventsForReason:(id)a0 withRules:(id)a1;
- (void)dealloc;
- (void)_lock_flushIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
