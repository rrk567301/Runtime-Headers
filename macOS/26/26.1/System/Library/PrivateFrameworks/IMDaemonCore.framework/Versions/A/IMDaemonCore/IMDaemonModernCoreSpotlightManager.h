@interface IMDaemonModernCoreSpotlightManager : IMDaemonCoreSpotlightManager {
    void /* unknown type, empty encoding */ indexingDelegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerForCoreSpotlightIndexing;
- (void)registerForCoreSpotlightMigration;

@end
