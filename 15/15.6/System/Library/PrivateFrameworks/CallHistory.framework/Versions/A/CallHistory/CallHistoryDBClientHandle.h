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

- (void)dealloc;
- (void).cxx_destruct;
- (id)init:(char)a0;
- (char)deleteAll;
- (void)registerForNotifications;
- (void)resetTimers;
- (char)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (id)fetchAllNoLimit;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (char)updateCallRecord_sync:(id)a0 withCall:(id)a1;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (char)createCallRecord:(id)a0;
- (char)createCallRecord:(id)a0 error:(id *)a1;
- (char)createCallRecord:(id)a0 error:(id *)a1 save:(char)a2;
- (char)createCallRecords:(id)a0;
- (char)createCallRecords:(id)a0 error:(id *)a1;
- (char)deleteAll:(id *)a0;
- (long long)deleteCallsWithPredicate:(id)a0;
- (char)deleteObjectWithUniqueId:(id)a0;
- (char)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(char)a2;
- (char)deleteObjectsWithUniqueIds:(id)a0;
- (char)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (id)fetchAll;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (void)handleCallRecordSave_sync;
- (void)handleCallTimersSave_sync:(id)a0;
- (char)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(char *)a1 isOriginated:(char *)a2;
- (char)resetAllTimers;
- (char)saveDatabase:(id *)a0;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (id)updateAllCallRecords:(id)a0;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (char)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (id)updateCallRecords:(id)a0;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(char)a2;
- (id)updateCallRecordsWithCalls:(id)a0 error:(id *)a1 save:(char)a2;
- (id)updateCallRecordsWithCalls_sync:(id)a0 error:(id *)a1 save:(char)a2;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(char)a2;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (char)willHandleNotification_sync:(id)a0;

@end
