@class NSString;

@interface PPNamedEntityStore : NSObject <PPFeedbackAccepting, PPClientStore>

@property (retain, nonatomic) NSString *clientIdentifier;

+ (id)new;
+ (id)defaultStore;

- (id)init;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)_initFromSubclass;
- (char)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (char)cloudSyncWithError:(id *)a0;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (char)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (char)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 error:(id *)a3;
- (char)donateMapItem:(id)a0 forPlaceName:(id)a1 error:(id *)a2;
- (char)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(char)a3 sentimentScore:(double)a4 error:(id *)a5;
- (char)flushDonationsWithError:(id *)a0;
- (char)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)iterRankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (char)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (char)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)a0 query:(id)a1 error:(id *)a2;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (id)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1;
- (char)removeMapItemForPlaceName:(id)a0 error:(id *)a1;
- (char)removeMapItemsBeforeCutoffDate:(id)a0 error:(id *)a1;
- (void)unloadMonitoringDelegate:(id)a0;

@end
