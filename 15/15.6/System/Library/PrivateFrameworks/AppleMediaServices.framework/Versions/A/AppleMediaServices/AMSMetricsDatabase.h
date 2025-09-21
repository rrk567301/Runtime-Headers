@class NSObject, NSString, AMSSQLiteConnection;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain) AMSSQLiteConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDatabaseWithContainerId:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)initWithContainerId:(id)a0;
- (char)dropAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (id)_cachePath;
- (id)_lockedById;
- (void)_performTransaction:(id /* block */)a0;
- (char)cleanupInvalidIdentifiersWithError:(id *)a0;
- (char)clearIdentifierSyncStateWithError:(id *)a0;
- (char)connection:(id)a0 needsResetForCorruptionError:(id)a1 error:(out id *)a2;
- (long long)countAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (char)dropEvents:(id)a0 error:(id *)a1;
- (void)enumerateEventsWithTopic:(id)a0 lockKey:(id)a1 objectBlock:(id /* block */)a2;
- (char)enumerateUnsyncedIdentifierStoresUsingBlock:(id /* block */)a0 error:(id *)a1;
- (char)enumerateUnsyncedIdentifiersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (id)identifierForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (id)identifierStoreForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (char)insertEvents:(id)a0 error:(id *)a1;
- (id)lockAllEventsWithError:(id *)a0;
- (char)permanentlyRemoveIdentifierForKey:(id)a0 error:(id *)a1;
- (char)removeCrossDeviceIdentifiersWithError:(id *)a0;
- (char)removeIdentifiersForAccount:(id)a0 error:(id *)a1;
- (char)removeIdentifiersForStore:(id)a0 error:(id *)a1;
- (char)unlockAllEventsWithKey:(id)a0 error:(id *)a1;
- (char)unlockEvents:(id)a0 error:(id *)a1;

@end
