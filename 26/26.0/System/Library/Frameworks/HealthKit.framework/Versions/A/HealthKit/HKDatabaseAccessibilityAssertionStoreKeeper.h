@interface HKDatabaseAccessibilityAssertionStoreKeeper : NSObject {
    void /* unknown type, empty encoding */ _healthStore;
    void /* unknown type, empty encoding */ _dbAccessibilityAssertionsLock;
    void /* unknown type, empty encoding */ _dbAccessibilityAssertions;
    void /* unknown type, empty encoding */ _pendingRequestsTimer;
    void /* unknown type, empty encoding */ _pendingRequests;
    void /* unknown type, empty encoding */ _healthdRequests;
    void /* unknown type, empty encoding */ _didBecomeAvailableNotificationToken;
    void /* unknown type, empty encoding */ $__lazy_storage_$__queue;
}

- (void)connectionConfigured;
- (void)dealloc;
- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void)invalidateAllDatabaseAccessibilityAssertions;
- (void).cxx_destruct;
- (void)fetchDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 contextType:(long long)a1 isRecovery:(BOOL)a2 timeout:(double)a3 completion:(id /* block */)a4;
- (void)fetchDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 isRecovery:(BOOL)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (void)invalidateDatabaseAccessibilityAssertionWithAssertion:(id)a0;

@end
