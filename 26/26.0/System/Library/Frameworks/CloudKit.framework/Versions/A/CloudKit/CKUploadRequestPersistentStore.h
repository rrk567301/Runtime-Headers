@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (nonatomic) BOOL firstInvocation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)a0;

- (id)allData;
- (void)clearDatabase;
- (void)readDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)lastFetchDate;
- (void)persistRepairRecord:(id)a0;
- (id)syncEngineMetadata;
- (void)persistSyncEngineMetadata:(id)a0;
- (id)earliestDelayedSyncDateAfterDate:(id)a0;
- (void)setLastFetchDate:(id)a0;
- (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
- (void)readWriteDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)deleteDelayedSyncForRecordName:(id)a0;
- (id)delayedSyncRecordNamesAfterDate:(id)a0;
- (void)persistDelayedSyncForRecordName:(id)a0 withDate:(id)a1 increasingCount:(BOOL)a2;
- (id)initWithDatabaseURL:(id)a0;
- (id)assetRepairMetadata;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)a0;
- (void)clearRepairRecords;
- (void)markRecordNameUnrecoverable:(id)a0;
- (id)currentUser;
- (long long)delayedSyncCountForRecordName:(id)a0;
- (id)metadataForRecordName:(id)a0;
- (void)clearDelayedSyncRecords;
- (void)setCurrentUser:(id)a0;
- (id)sortedDelayedSyncRecordsForDatabase:(id)a0;
- (void)deleteDatabase;
- (void)deleteRepairRecord:(id)a0;
- (id)delayedSyncDateForRecord:(id)a0;
- (id)packageRepairMetadata;
- (void).cxx_destruct;

@end
