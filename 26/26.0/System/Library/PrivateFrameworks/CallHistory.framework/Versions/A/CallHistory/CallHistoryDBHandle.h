@class NSString, CHFeatureFlags, CallDBManager, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (class, readonly, copy, nonatomic) NSString *objectId;

@property (readonly, nonatomic) CHFeatureFlags *featureFlags;
@property (nonatomic) long long callsDidChangeDarwinNotificationCount;
@property (readonly, nonatomic) CallDBManager *callDBManager;

+ (id)createForServer;
+ (id)createForClient;
+ (id)createWithDBManager:(id)a0;

- (void)deleteAll;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (id)fetchAll;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)resetTimers;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (void)dealloc;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (void)unRegisterForNotifications;
- (id)initWithDBManager:(id)a0;
- (BOOL)resetAllTimers;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (void)postTimersChangedNotification;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (void)registerForNotifications:(id)a0;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (BOOL)save:(id *)a0;
- (long long)deleteManagedCalls:(id)a0;
- (id)timerLifetime;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)callRecordContext;
- (id)createCallRecord;
- (void)deleteObjectWithUniqueId:(id)a0;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)timerIncoming;
- (id)timerOutgoing;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)fetchAllNoLimit;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)timerLastReset;
- (id)callDBProperties;
- (long long)callHistoryDBFetchLimit;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)updateCallDBProperties;
- (void).cxx_destruct;

@end
