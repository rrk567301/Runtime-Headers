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

+ (id)createForClient;
+ (id)createWithDBManager:(id)a0;
+ (id)createForServer;

- (void)resetTimers;
- (void)deleteAll;
- (BOOL)save:(id *)a0;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)updateCallDBProperties;
- (void)deleteObjectWithUniqueId:(id)a0;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (id)createCallRecord;
- (id)callDBProperties;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (void)registerForNotifications:(id)a0;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)timerIncoming;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (id)timerLastReset;
- (void).cxx_destruct;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)callRecordContext;
- (void)postTimersChangedNotification;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)fetchAll;
- (id)fetchObjectsWithPredicate:(id)a0;
- (long long)deleteManagedCalls:(id)a0;
- (id)initWithDBManager:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (long long)callHistoryDBFetchLimit;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (BOOL)resetAllTimers;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (id)fetchAllNoLimit;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)timerLifetime;
- (void)dealloc;

@end
