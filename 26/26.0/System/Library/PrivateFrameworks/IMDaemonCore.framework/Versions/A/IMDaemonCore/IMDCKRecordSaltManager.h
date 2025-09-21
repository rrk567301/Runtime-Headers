@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain) NSString *cachedSalt;

+ (id)sharedInstance;

- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* block */)a0;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0 forceFetch:(BOOL)a1;
- (void)deleteDeDupeRecordZone;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)a0;
- (id)init;
- (void)_scheduleOperation:(id)a0;
- (id)_CKUtilitiesSharedInstance;
- (id)_container;
- (void).cxx_destruct;
- (void)clearLocalSyncState;

@end
