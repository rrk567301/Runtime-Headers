@class CHNotifyObserver, CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id _observerCallTimersRef;
}

@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver;
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;

+ (id)createForClient;
+ (id)createForServer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)manager;
- (id)init:(BOOL)a0;
- (BOOL)deleteAll;
- (void)registerForNotifications;
- (void)resetTimers;
- (void)unRegisterForNotifications;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLifetime;
- (id)timerLastReset;
- (BOOL)resetAllTimers;
- (long long)deleteCallsWithPredicate:(id)a0;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (BOOL)deleteAll:(id *)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (BOOL)createCallRecord:(id)a0;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)createCallRecords:(id)a0;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (id)updateCallRecords:(id)a0;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)updateAllCallRecords:(id)a0;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (void)handleCallRecordSave_sync;
- (void)handleCallTimersSave_sync:(id)a0;
- (BOOL)willHandleNotification_sync:(id)a0;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (BOOL)saveDatabase:(id *)a0;

@end
