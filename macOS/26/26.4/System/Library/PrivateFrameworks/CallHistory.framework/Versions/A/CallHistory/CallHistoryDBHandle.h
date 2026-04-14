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

- (void)resetTimers;
- (BOOL)save:(id *)a0;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)timerLastReset;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (void)postTimersChangedNotification;
- (BOOL)resetAllTimers;
- (id)timerOutgoing;
- (id)fetchObjectWithUniqueId:(id)a0;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)updateCallDBProperties;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)unRegisterForNotifications;
- (id)fetchAll;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)initWithDBManager:(id)a0;
- (long long)callHistoryDBFetchLimit;
- (void)deleteAll;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (id)timerLifetime;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (void).cxx_destruct;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (long long)deleteManagedCalls:(id)a0;
- (void)reset;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (id)timerIncoming;
- (id)callRecordContext;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchAllNoLimit;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)dealloc;
- (id)callDBProperties;
- (void)registerForNotifications:(id)a0;
- (id)createCallRecord;

@end
