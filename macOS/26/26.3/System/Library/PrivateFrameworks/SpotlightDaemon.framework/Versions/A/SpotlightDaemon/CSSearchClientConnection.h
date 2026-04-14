@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (id)protectionClass;
- (id)allowedBundleIDs;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (BOOL)searchInternal;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)cancelQueryTasks;
- (id)description;
- (void)overrideMailHitCounts:(id)a0;
- (void)_didReceiveResultsBatchCompletion;
- (id)initWithConnection:(id)a0;
- (id)bundleID;
- (void)cancelQueryTask:(long long)a0;
- (id)queryTask:(long long)a0;
- (void).cxx_destruct;
- (void)pollResultsForQueryTask:(long long)a0;
- (void)dealloc;
- (id)initWithConnectionConfiguration:(id)a0;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;

@end
