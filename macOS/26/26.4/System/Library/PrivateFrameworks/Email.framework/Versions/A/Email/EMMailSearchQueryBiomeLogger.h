@class NSString, NSObject, EMSearchQueryState;
@protocol EMBiomeStreamSearchQueryPruner, OS_os_log, OS_dispatch_queue, EMBiomeStreamSearchQuerySource;

@interface EMMailSearchQueryBiomeLogger : NSObject <EFLoggable>

@property (class, readonly, nonatomic) EMMailSearchQueryBiomeLogger *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<EMBiomeStreamSearchQuerySource> source;
@property (retain, nonatomic) id<EMBiomeStreamSearchQueryPruner> pruner;
@property (retain, nonatomic) EMSearchQueryState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)_abandonCurrentQueryWithReason:(int)a0;
- (void)_cleanupStateAfterLogging;
- (void)_logStateToBiome:(id)a0;
- (void)_pruneAllBiomeLogs;
- (void)_pruneBiomeLogForSuggestion:(id)a0;
- (id)_queryStringFromSuggestion:(id)a0;
- (id)initWithQueue:(id)a0 source:(id)a1 pruner:(id)a2;
- (void)pruneAllLogs;
- (void)pruneLogForSuggestion:(id)a0;
- (void)trackAbandonmentWithReason:(int)a0;
- (void)trackCommittedQueryWithSuggestion:(id)a0 commitReason:(long long)a1;
- (void)trackEngagementInSectionType:(int)a0;
- (void)trackResultViewDidChangeTo:(int)a0;
- (void)trackResultsReceivedResultCount:(unsigned long long)a0;

@end
