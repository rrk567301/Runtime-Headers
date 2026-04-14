@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID;

+ (id)sharedCache;
+ (id)dbFileName;
+ (id)cacheDatabaseSchema;

- (id)allOutstandingOperationIDsForAppContainerAccountTuple:(id)a0;
- (id)_locked_operationInfoForID:(id)a0;
- (void)_locked_enumerateCallbacksForOperationWithID:(id)a0 usingBlock:(id /* block */)a1;
- (id)operationInfoMetadataForOperationWithID:(id)a0;
- (void)archiveCallback:(id)a0 forOperationID:(id)a1;
- (void)_lockedSetOperationInfo:(id)a0 forOperationID:(id)a1 appContainerAccountTuple:(id)a2;
- (void)_lockedArchiveCallback:(id)a0 forOperationID:(id)a1;
- (void)enumerateCallbacksForOperationWithID:(id)a0 usingBlock:(id /* block */)a1;
- (void)registerCacheEviction;
- (id)initWithCacheDir:(id)a0;
- (void)registerDelegate:(id)a0 forOperationWithID:(id)a1;
- (id)outstandingOperationInfosForIDs:(id)a0;
- (void)setOperationInfo:(id)a0 forOperationID:(id)a1 appContainerAccountTuple:(id)a2;
- (void)deleteAllInfoForOperationWithID:(id)a0;
- (void)registerAttemptForOperationWithID:(id)a0;
- (void)expungeOperationInfoForDeletedAccountID:(id)a0;
- (id)resumableOperationInfosByAppContainerAccountTuplesWithProgressPurged:(BOOL)a0;
- (void)_expungeOperationInfoForDeletedAccountID:(id)a0;
- (void)unregisterDelegate:(id)a0 forOperationWithID:(id)a1;
- (void).cxx_destruct;

@end
