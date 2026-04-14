@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDOperationInfoCache : CKDSQLiteCache

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (retain, nonatomic) NSMutableDictionary *delegateWrappersByOperationID;

+ (id)cacheDatabaseSchema;
+ (id)dbFileName;
+ (id)sharedCache;

- (id)outstandingOperationInfosForIDs:(id)a0;
- (void)archiveCallback:(id)a0 forOperationID:(id)a1;
- (id)initWithCacheDir:(id)a0;
- (void)_locked_enumerateCallbacksForOperationWithID:(id)a0 usingBlock:(id /* block */)a1;
- (void)registerCacheEviction;
- (void)deleteAllInfoForOperationWithID:(id)a0;
- (void)_expungeOperationInfoForDeletedAccountID:(id)a0;
- (void)registerAttemptForOperationWithID:(id)a0;
- (void)_lockedArchiveCallback:(id)a0 forOperationID:(id)a1;
- (void)enumerateCallbacksForOperationWithID:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unregisterDelegate:(id)a0 forOperationWithID:(id)a1;
- (void)registerDelegate:(id)a0 forOperationWithID:(id)a1;
- (id)allOutstandingOperationIDsForAppContainerAccountTuple:(id)a0;
- (id)resumableOperationInfosByAppContainerAccountTuplesWithProgressPurged:(BOOL)a0;
- (id)operationInfoMetadataForOperationWithID:(id)a0;
- (id)_locked_operationInfoForID:(id)a0;
- (void)_lockedSetOperationInfo:(id)a0 forOperationID:(id)a1 appContainerAccountTuple:(id)a2;
- (void)setOperationInfo:(id)a0 forOperationID:(id)a1 appContainerAccountTuple:(id)a2;
- (void)expungeOperationInfoForDeletedAccountID:(id)a0;

@end
