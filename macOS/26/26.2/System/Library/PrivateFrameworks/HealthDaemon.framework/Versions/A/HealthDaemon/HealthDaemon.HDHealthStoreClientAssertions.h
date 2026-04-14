@interface HealthDaemon.HDHealthStoreClientAssertions : NSObject {
    void /* unknown type, empty encoding */ _dbAssertionLock;
    void /* unknown type, empty encoding */ databaseAccessibilityAssertions;
}

- (id)accessibilityAssertions;
- (void)invalidateAssertions;
- (void).cxx_destruct;
- (id)firstAssertion;
- (id)init;
- (void)dealloc;
- (void)addAssertionMappingWithAssertion:(id)a0;
- (id)assertionForHKDatabaseAccessibilityAssertionWithHkDatabaseAccessibilityAssertion:(id)a0;
- (void)removeAssertionMappingWithAssertion:(id)a0;

@end
