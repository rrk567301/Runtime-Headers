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
- (void)pollResultsForQueryTask:(long long)a0;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (void)overrideMailHitCounts:(id)a0;
- (id)allowedBundleIDs;
- (id)initWithConnectionConfiguration:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void)cancelQueryTasks;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (void)cancelQueryTask:(long long)a0;
- (void).cxx_destruct;
- (void)_didReceiveResultsBatchCompletion;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (id)bundleID;
- (id)queryTask:(long long)a0;

@end
