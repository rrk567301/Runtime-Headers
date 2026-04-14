@class NSString, CallDBManager, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (class, readonly, copy, nonatomic) NSString *objectId;

@property (nonatomic) long long callsDidChangeDarwinNotificationCount;
@property (readonly, nonatomic) CallDBManager *callDBManager;

+ (id)createForClient;
+ (id)createWithDBManager:(id)a0;
+ (id)createForServer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)registerForNotifications:(id)a0;
- (BOOL)save:(id *)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (void)resetTimers;
- (id)fetchAll;
- (void)deleteAll;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)initWithDBManager:(id)a0;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)createCallRecord;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)postTimersChangedNotification;
- (id)callDBProperties;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (long long)deleteManagedCalls:(id)a0;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchAllNoLimit;
- (void)updateCallDBProperties;
- (BOOL)saveTimers:(id /* block */)a0;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (BOOL)resetAllTimers;
- (void)unRegisterForNotifications;
- (id)callRecordContext;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)timerLifetime;
- (id)timerLastReset;

@end
