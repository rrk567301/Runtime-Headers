@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (nonatomic) BOOL firstInvocation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)a0;

- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)a0;
- (id)earliestDelayedSyncDateAfterDate:(id)a0;
- (id)initWithDatabaseURL:(id)a0;
- (void)clearRepairRecords;
- (id)metadataForRecordName:(id)a0;
- (void)persistDelayedSyncForRecordName:(id)a0 withDate:(id)a1 increasingCount:(BOOL)a2;
- (void)clearDelayedSyncRecords;
- (id)allData;
- (void)markRecordNameUnrecoverable:(id)a0;
- (void)deleteDatabase;
- (id)assetRepairMetadata;
- (void)setLastFetchDate:(id)a0;
- (void)deleteRepairRecord:(id)a0;
- (long long)delayedSyncCountForRecordName:(id)a0;
- (void)persistRepairRecord:(id)a0;
- (void).cxx_destruct;
- (id)packageRepairMetadata;
- (void)setCurrentUser:(id)a0;
- (void)readWriteDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)lastFetchDate;
- (void)readDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)persistSyncEngineMetadata:(id)a0;
- (id)currentUser;
- (id)delayedSyncDateForRecord:(id)a0;
- (id)syncEngineMetadata;
- (id)delayedSyncRecordNamesAfterDate:(id)a0;
- (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
- (id)sortedDelayedSyncRecordsForDatabase:(id)a0;
- (void)clearDatabase;
- (void)deleteDelayedSyncForRecordName:(id)a0;

@end
