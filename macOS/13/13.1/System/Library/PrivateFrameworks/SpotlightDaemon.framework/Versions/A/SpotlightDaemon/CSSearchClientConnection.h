@class NSMutableOrderedSet, NSMutableDictionary, SDConnectionConfiguration;

@interface CSSearchClientConnection : NSObject {
    _Atomic unsigned int _outBatchCount;
}

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)bundleID;
- (id)protectionClass;
- (id)allowedBundleIDs;
- (BOOL)searchInternal;
- (id)initWithConnectionConfiguration:(id)a0;
- (void)cancelQueryTask:(long long)a0;
- (void)cancelQueryTask:(long long)a0 wasCanceledByClient:(BOOL)a1;
- (id)queryTask:(long long)a0;
- (void)setQueryTask:(id)a0 forQueryID:(long long)a1;
- (void)cancelQueryTasks;
- (void)_willSendResultsBatch:(id)a0 qid:(long long)a1;
- (void)_didReceiveResultsBatchCompletion;
- (void)overrideMailHitCounts:(id)a0;

@end
