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

- (id)lockAllEventsWithError:(id *)a0;
- (id)identifierStoreForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (BOOL)unlockEvents:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)connection:(id)a0 needsResetForCorruptionError:(id)a1 error:(out id *)a2;
- (BOOL)removeCrossDeviceIdentifiersWithError:(id *)a0;
- (id)_lockedById;
- (BOOL)permanentlyRemoveIdentifierForKey:(id)a0 error:(id *)a1;
- (BOOL)unlockAllEventsWithKey:(id)a0 error:(id *)a1;
- (BOOL)removeIdentifiersForStore:(id)a0 error:(id *)a1;
- (BOOL)enumerateUnsyncedIdentifierStoresUsingBlock:(id /* block */)a0 error:(id *)a1;
- (void)enumerateEventsWithTopic:(id)a0 lockKey:(id)a1 objectBlock:(id /* block */)a2;
- (BOOL)dropEvents:(id)a0 error:(id *)a1;
- (BOOL)removeIdentifiersForAccount:(id)a0 error:(id *)a1;
- (void)_performTransaction:(id /* block */)a0;
- (BOOL)insertEvents:(id)a0 error:(id *)a1;
- (id)identifierForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (BOOL)enumerateUnsyncedIdentifiersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)cleanupInvalidIdentifiersWithError:(id *)a0;
- (id)_cachePath;
- (id)initWithContainerId:(id)a0;
- (long long)countAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (BOOL)dropAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (void)close;
- (void).cxx_destruct;
- (BOOL)clearIdentifierSyncStateWithError:(id *)a0;

@end
