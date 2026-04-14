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
- (id)createCallRecord;
- (void)unRegisterForNotifications;
- (BOOL)save:(id *)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (BOOL)resetAllTimers;
- (void)registerForNotifications:(id)a0;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)fetchObjectWithUniqueId:(id)a0;
- (void)updateCallDBProperties;
- (long long)callHistoryDBFetchLimit;
- (id)fetchAllNoLimit;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (id)timerOutgoing;
- (id)timerLastReset;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (long long)deleteManagedCalls:(id)a0;
- (id)initWithDBManager:(id)a0;
- (void)postTimersChangedNotification;
- (id)timerIncoming;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (void)resetTimers;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)deleteObjectWithUniqueId:(id)a0;
- (id)callRecordContext;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (void)dealloc;
- (void)reset;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (id)callDBProperties;
- (id)timerLifetime;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (id)fetchAll;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (void)handlePersistentStoreChangedNotification:(id)a0;

@end
