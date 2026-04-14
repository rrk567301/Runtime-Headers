@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (nonatomic) BOOL firstInvocation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)a0;

- (id)currentUser;
- (void)clearDelayedSyncRecords;
- (void)readWriteDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)clearRepairRecords;
- (id)sortedDelayedSyncRecordsForDatabase:(id)a0;
- (void)persistDelayedSyncForRecordName:(id)a0 withDate:(id)a1 increasingCount:(BOOL)a2;
- (void)markRecordNameUnrecoverable:(id)a0;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)a0;
- (void)persistRepairRecord:(id)a0;
- (void)clearDatabase;
- (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
- (void)persistSyncEngineMetadata:(id)a0;
- (id)assetRepairMetadata;
- (id)syncEngineMetadata;
- (void)deleteDelayedSyncForRecordName:(id)a0;
- (id)packageRepairMetadata;
- (void)setLastFetchDate:(id)a0;
- (id)metadataForRecordName:(id)a0;
- (void)setCurrentUser:(id)a0;
- (id)allData;
- (void).cxx_destruct;
- (void)deleteRepairRecord:(id)a0;
- (long long)delayedSyncCountForRecordName:(id)a0;
- (void)readDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)deleteDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (id)delayedSyncDateForRecord:(id)a0;
- (id)delayedSyncRecordNamesAfterDate:(id)a0;
- (id)earliestDelayedSyncDateAfterDate:(id)a0;
- (id)lastFetchDate;

@end
