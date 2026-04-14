@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDAssertionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    BOOL _invalidated;
    BOOL _consumeBudgets;
    NSObject<OS_dispatch_source> *_budgetConsumptionTimer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *budgetTimerQueue;
@property (readonly, nonatomic) BOOL hasActiveOrPendingAssertions;

- (void)invalidate;
- (id)ownerIdentifiersForAssertionIdentifier:(id)a0;
- (id)init;
- (id)activeAssertionsForIdentifier:(id)a0;
- (void)resumeBudgetConsumption;
- (BOOL)hasActiveAssertion:(id)a0;
- (void)removeObserver:(id)a0 forAssertionIdentifier:(id)a1;
- (void)_handleAssertionReleased:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasActiveAssertionForIdentifier:(id)a0;
- (void)suspendBudgetConsumption;
- (void)dealloc;
- (void)addObserver:(id)a0 forAssertionIdentifier:(id)a1 queue:(id)a2;
- (void)removeObserver:(id)a0;
- (BOOL)takeAssertion:(id)a0;
- (id)allAssertionsForIdentifier:(id)a0;
- (BOOL)takeAssertion:(id)a0 preNotificationBlock:(id /* block */)a1;
- (void)_releaseAssertion:(id)a0;

@end
