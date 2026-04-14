@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (void)pollResultsForQueryTask:(long long)a0;
- (id)protectionClass;
- (BOOL)searchInternal;
- (id)allowedBundleIDs;
- (id)initWithConnectionConfiguration:(id)a0;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (id)bundleID;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (id)initWithConnection:(id)a0;
- (void)overrideMailHitCounts:(id)a0;
- (void).cxx_destruct;
- (void)cancelQueryTask:(long long)a0;
- (id)description;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)cancelQueryTasks;
- (void)dealloc;
- (id)queryTask:(long long)a0;
- (void)_didReceiveResultsBatchCompletion;

@end
