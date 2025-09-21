@class IMDSpotlightDaemonClient;

@interface IMDaemonCoreSpotlightManager : NSObject

@property (class, readonly, nonatomic) IMDaemonCoreSpotlightManager *sharedManager;

@property (retain, nonatomic) IMDSpotlightDaemonClient *indexingDelegate;

- (void).cxx_destruct;
- (void)registerForCoreSpotlightIndexing;
- (void)_reindexResumed;
- (long long)_batchIndexingIntervalBagValue;
- (void)_checkSpotlightClientStateForReindexIfNeeded;
- (void)_checkSpotlightClientStateForReindexIfNeededWithAttempts:(long long)a0;
- (id)_currentClientState;
- (long long)_currentSpotlightVersion;
- (char)_deferXPCActivity:(id)a0;
- (char)_deviceConditionsAllowsSpotlightIndexingForActivity:(id)a0;
- (long long)_expectedSpotlightVersion;
- (void)_indexNextBatchIfNecessaryForActivity:(id)a0;
- (char)_needsDeferredIndexing;
- (char)_needsReindexingDueToVersionMismatch;
- (id)_newSpotlightBatchIndexingXPCCriteria;
- (void)_reindexPaused;
- (char)_shouldDeferXPCActivity:(id)a0;
- (void)registerForCoreSpotlightMigration;
- (id)spotlightIndexQueue;

@end
