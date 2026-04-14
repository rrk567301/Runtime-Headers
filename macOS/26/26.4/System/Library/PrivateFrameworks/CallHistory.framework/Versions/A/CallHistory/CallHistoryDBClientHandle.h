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

- (void)resetTimers;
- (BOOL)deleteAll:(id *)a0;
- (void)handleCallRecordSave_sync;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (id)timerLastReset;
- (long long)deleteCallsWithPredicate:(id)a0;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (id)updateCallRecordsWithCalls_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)init:(BOOL)a0;
- (BOOL)resetAllTimers;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (id)timerOutgoing;
- (void)registerForNotifications;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)updateCallRecords:(id)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (BOOL)willHandleNotification_sync:(id)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (BOOL)saveDatabase:(id *)a0;
- (void)unRegisterForNotifications;
- (id)fetchAll;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)updateAllCallRecords:(id)a0;
- (BOOL)deleteAll;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (id)updateCallRecordsWithCalls:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (id)timerLifetime;
- (void).cxx_destruct;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (BOOL)createCallRecord:(id)a0;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (id)timerIncoming;
- (void)handleCallTimersSave_sync:(id)a0;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (id)fetchAllNoLimit;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (BOOL)updateCallRecord_sync:(id)a0 withCall:(id)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (BOOL)createCallRecords:(id)a0;
- (void)dealloc;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;

@end
