@class IMDSpotlightDaemonClient;

@interface IMDaemonLegacyCoreSpotlightManager : IMDaemonCoreSpotlightManager

@property (retain, nonatomic) IMDSpotlightDaemonClient *indexingDelegate;

- (void)registerForCoreSpotlightIndexing;
- (void).cxx_destruct;
- (void)_reindexResumed;
- (BOOL)_deferXPCActivity:(id)a0;
- (BOOL)_deviceConditionsAllowsSpotlightIndexingForActivity:(id)a0;
- (void)_indexNextBatchIfNecessaryForActivity:(id)a0;
- (long long)_indexReason;
- (id)_newSpotlightBatchIndexingXPCCriteria;
- (void)_reindexPaused;
- (BOOL)_reindexingInProgress;
- (void)_setReindexReason;
- (BOOL)_shouldDeferXPCActivity:(id)a0;
- (void)registerForCoreSpotlightMigration;

@end
