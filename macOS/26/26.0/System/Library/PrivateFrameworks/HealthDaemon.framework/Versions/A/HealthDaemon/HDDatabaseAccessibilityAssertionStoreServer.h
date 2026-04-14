@interface HDDatabaseAccessibilityAssertionStoreServer : HDStandardTaskServer <HKDatabaseAccessibilityAssertionServerInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_queue;
}

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)remote_invalidateDatabaseAccessibilityAssertion:(id)a0;
- (void)remote_requestDatabaseAccessibilityAssertionForOwnerIdentifier:(id)a0 contextType:(long long)a1 isRecovery:(BOOL)a2 completion:(id /* block */)a3;

@end
