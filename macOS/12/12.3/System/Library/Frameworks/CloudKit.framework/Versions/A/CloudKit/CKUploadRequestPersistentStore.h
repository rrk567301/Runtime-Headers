@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject

@property (retain, nonatomic) NSURL *databaseURL;
@property (nonatomic) BOOL firstInvocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)a0;

- (void).cxx_destruct;
- (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
- (id)lastFetchDate;
- (void)setLastFetchDate:(id)a0;
- (id)currentUser;
- (void)readDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)sortedDelayedSyncRecordsForDatabase:(id)a0;
- (id)delayedSyncRecordNamesAfterDate:(id)a0;
- (id)delayedSyncDateForRecord:(id)a0;
- (void)readWriteDatabase:(id /* block */)a0 async:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithDatabaseURL:(id)a0;
- (id)assetRepairMetadata;
- (id)packageRepairMetadata;
- (id)metadataForRecordName:(id)a0;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)a0;
- (id)earliestDelayedSyncDateAfterDate:(id)a0;
- (long long)delayedSyncCountForRecordName:(id)a0;
- (id)syncEngineMetadata;
- (void)setCurrentUser:(id)a0;
- (void)persistRepairRecord:(id)a0;
- (void)deleteRepairRecord:(id)a0;
- (void)clearRepairRecords;
- (void)persistDelayedSyncForRecordName:(id)a0 withDate:(id)a1 increasingCount:(BOOL)a2;
- (void)deleteDelayedSyncForRecordName:(id)a0;
- (void)clearDelayedSyncRecords;
- (void)markRecordNameUnrecoverable:(id)a0;
- (void)persistSyncEngineMetadata:(id)a0;
- (void)clearDatabase;
- (void)deleteDatabase;
- (id)allData;

@end
