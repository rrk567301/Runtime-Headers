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

+ (id)createForServer;
+ (id)createForClient;

- (void)registerForNotifications;
- (id)updateAllCallRecords:(id)a0;
- (BOOL)deleteAll;
- (id)fetchAll;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (void)resetTimers;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)dealloc;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (void)unRegisterForNotifications;
- (BOOL)resetAllTimers;
- (BOOL)deleteAll:(id *)a0;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (void)handleCallTimersSave_sync:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)timerLifetime;
- (long long)deleteCallsWithPredicate:(id)a0;
- (id)updateCallRecordsWithCalls:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (BOOL)saveDatabase:(id *)a0;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (BOOL)willHandleNotification_sync:(id)a0;
- (void)handleCallRecordSave_sync;
- (id)updateCallRecordsWithCalls_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (BOOL)createCallRecords:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchAllNoLimit;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)timerLastReset;
- (id)init:(BOOL)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)updateCallRecords:(id)a0;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (void).cxx_destruct;
- (BOOL)createCallRecord:(id)a0;
- (BOOL)updateCallRecord_sync:(id)a0 withCall:(id)a1;

@end
