@interface IMDaemonModernCoreSpotlightManager : IMDaemonCoreSpotlightManager {
    void /* unknown type, empty encoding */ indexingDelegate;
}

- (void).cxx_destruct;
- (void)registerForCoreSpotlightIndexing;
- (id)init;
- (void)registerForCoreSpotlightMigration;

@end
