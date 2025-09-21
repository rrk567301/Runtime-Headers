@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (id)protectionClass;
- (BOOL)searchInternal;
- (void)overrideMailHitCounts:(id)a0;
- (id)bundleID;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)initWithConnectionConfiguration:(id)a0;
- (id)allowedBundleIDs;
- (void)_didReceiveResultsBatchCompletion;
- (id)queryTask:(long long)a0;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (void)pollResultsForQueryTask:(long long)a0;
- (id)description;
- (void)cancelQueryTask:(long long)a0;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)cancelQueryTasks;
- (void).cxx_destruct;

@end
