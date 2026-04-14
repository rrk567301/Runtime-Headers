@class NSString, CallHistoryDBHandle, CHNotifyObserver, CallDBManager;
@protocol NSObject;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable <CallHistoryDBClientHandleProtocol>

@property (readonly, nonatomic) id<NSObject> observerCallTimersRef;
@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver;
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;
@property (readonly) CallDBManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createForClient;
+ (id)createForServer;

- (void)resetTimers;
- (BOOL)deleteAll;
- (id)init:(BOOL)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (id)updateCallRecordsWithCalls_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (void)registerForNotifications;
- (BOOL)createCallRecord:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (BOOL)createCallRecords:(id)a0;
- (id)updateCallRecords:(id)a0;
- (id)timerIncoming;
- (id)updateCallRecordsWithCalls:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (id)timerLastReset;
- (BOOL)saveDatabase:(id *)a0;
- (void).cxx_destruct;
- (void)handleCallTimersSave_sync:(id)a0;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (BOOL)willHandleNotification_sync:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (id)fetchAll;
- (id)fetchObjectsWithPredicate:(id)a0;
- (long long)deleteCallsWithPredicate:(id)a0;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (BOOL)resetAllTimers;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)updateAllCallRecords:(id)a0;
- (id)fetchAllNoLimit;
- (BOOL)deleteAll:(id *)a0;
- (void)handleCallRecordSave_sync;
- (id)timerLifetime;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (BOOL)updateCallRecord_sync:(id)a0 withCall:(id)a1;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)dealloc;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;

@end
