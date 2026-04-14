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
+ (id)createWithDBManager:(id)a0;
+ (id)createForClient;

- (void)deleteAll;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (BOOL)save:(id *)a0;
- (long long)callHistoryDBFetchLimit;
- (id)callDBProperties;
- (void)deleteObjectWithUniqueId:(id)a0;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)timerLifetime;
- (id)createCallRecord;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (BOOL)resetAllTimers;
- (void)resetTimers;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchAllNoLimit;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)registerForNotifications:(id)a0;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)callRecordContext;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (id)timerOutgoing;
- (void)dealloc;
- (void)updateCallDBProperties;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (long long)deleteManagedCalls:(id)a0;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (void)postTimersChangedNotification;
- (void).cxx_destruct;
- (id)initWithDBManager:(id)a0;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (void)unRegisterForNotifications;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)fetchAll;

@end
