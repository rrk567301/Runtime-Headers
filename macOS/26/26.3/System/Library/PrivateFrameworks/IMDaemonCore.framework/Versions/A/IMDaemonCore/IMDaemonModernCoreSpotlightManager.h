@interface IMDaemonModernCoreSpotlightManager : IMDaemonCoreSpotlightManager {
    void /* unknown type, empty encoding */ indexingDelegate;
}

- (void)registerForCoreSpotlightIndexing;
- (id)init;
- (void).cxx_destruct;
- (void)registerForCoreSpotlightMigration;

@end
