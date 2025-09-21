@interface HealthDaemon.HDHealthStoreClientAssertions : NSObject {
    void /* unknown type, empty encoding */ _dbAssertionLock;
    void /* unknown type, empty encoding */ databaseAccessibilityAssertions;
}

- (void)dealloc;
- (void)invalidateAssertions;
- (id)firstAssertion;
- (id)init;
- (id)accessibilityAssertions;
- (void).cxx_destruct;
- (void)addAssertionMappingWithAssertion:(id)a0;
- (id)assertionForHKDatabaseAccessibilityAssertionWithHkDatabaseAccessibilityAssertion:(id)a0;
- (void)removeAssertionMappingWithAssertion:(id)a0;

@end
