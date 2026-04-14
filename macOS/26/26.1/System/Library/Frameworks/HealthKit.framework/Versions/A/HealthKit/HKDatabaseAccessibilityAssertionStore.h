@interface HKDatabaseAccessibilityAssertionStore : NSObject <_HKXPCExportable> {
    void /* unknown type, empty encoding */ $__lazy_storage_$__proxyProvider;
    void /* unknown type, empty encoding */ _healthStore;
}

- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;
- (void)fetchDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 contextType:(long long)a1 isRecovery:(BOOL)a2 completion:(id /* block */)a3;
- (void)invalidateDatabaseAccessibilityAssertionWithAssertion:(id)a0;

@end
