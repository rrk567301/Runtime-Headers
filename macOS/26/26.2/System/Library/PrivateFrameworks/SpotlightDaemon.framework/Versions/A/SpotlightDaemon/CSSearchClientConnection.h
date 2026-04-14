@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (id)protectionClass;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (void)cancelQueryTask:(long long)a0;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)cancelQueryTasks;
- (id)bundleID;
- (void)pollResultsForQueryTask:(long long)a0;
- (id)queryTask:(long long)a0;
- (id)allowedBundleIDs;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionConfiguration:(id)a0;
- (id)description;
- (BOOL)searchInternal;
- (void)_didReceiveResultsBatchCompletion;
- (void)overrideMailHitCounts:(id)a0;
- (void)dealloc;

@end
