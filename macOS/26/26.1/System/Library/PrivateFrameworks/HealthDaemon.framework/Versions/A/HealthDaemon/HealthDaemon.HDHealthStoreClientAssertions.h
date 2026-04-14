@interface HealthDaemon.HDHealthStoreClientAssertions : NSObject {
    void /* unknown type, empty encoding */ _dbAssertionLock;
    void /* unknown type, empty encoding */ databaseAccessibilityAssertions;
}

- (id)firstAssertion;
- (id)accessibilityAssertions;
- (void)invalidateAssertions;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)addAssertionMappingWithAssertion:(id)a0;
- (id)assertionForHKDatabaseAccessibilityAssertionWithHkDatabaseAccessibilityAssertion:(id)a0;
- (void)removeAssertionMappingWithAssertion:(id)a0;

@end
