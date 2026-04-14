@class CKDPCSSQLCacheTable, CKContainerID, NSString, CKDPCSSQLCacheTableGroup, NSObject, CKSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface CKDPCSSQLCache : NSObject {
    CKContainerID *_containerID;
    NSString *_accountID;
    NSString *_encryptionServiceName;
    CKDPCSSQLCacheTableGroup *_cacheGroup;
    CKDPCSSQLCacheTable *_table;
    NSObject<OS_dispatch_queue> *_asyncQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Atomic unsigned int _cacheRequestCount;
    _Atomic unsigned int _cacheHitCount;
    NSString *_cacheGroupName;
    CKSQLiteDatabase *_db;
}

+ (void)evictPCSSQLCachesForKnownContainers;

- (id)CKStatusReportArray;
- (void)clearCache;
- (void)_invokeCallbackBlock:(id /* block */)a0;
- (id)initWithDeviceContext:(id)a0 containerID:(id)a1 accountOverrideInfo:(id)a2 accountID:(id)a3 encryptionServiceName:(id)a4 callbackQueue:(id)a5;
- (void)_setPCSData:(id)a0 forItemWithID:(id)a1 databaseScope:(long long)a2 itemType:(unsigned long long)a3 withCompletionHandler:(id /* block */)a4;
- (void)setRecordPCSData:(id)a0 forRecordWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (id)_lockedFetchPCSDataForID:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2;
- (BOOL)hasStatusToReport;
- (void)_lockedSetPCSData:(id)a0 databaseScope:(long long)a1 itemType:(unsigned long long)a2 forID:(id)a3;
- (void).cxx_destruct;
- (void)removePCSDataForItemsInShareWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removePCSDataForItemsInZoneWithID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)fetchPCSDataForShareWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)setSharePCSData:(id)a0 forShareWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchPCSDataForZoneWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)fetchPCSDataForRecordWithID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)setZonePCSData:(id)a0 forZoneWithID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;

@end
