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

- (id)_cachePath;
- (BOOL)dropEvents:(id)a0 error:(id *)a1;
- (id)identifierStoreForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (long long)countAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (BOOL)permanentlyRemoveIdentifierForKey:(id)a0 error:(id *)a1;
- (void)close;
- (BOOL)cleanupInvalidIdentifiersWithError:(id *)a0;
- (BOOL)enumerateUnsyncedIdentifiersUsingBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)removeCrossDeviceIdentifiersWithError:(id *)a0;
- (BOOL)clearIdentifierSyncStateWithError:(id *)a0;
- (BOOL)removeIdentifiersForStore:(id)a0 error:(id *)a1;
- (id)lockAllEventsWithError:(id *)a0;
- (BOOL)enumerateUnsyncedIdentifierStoresUsingBlock:(id /* block */)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithContainerId:(id)a0;
- (void)_performTransaction:(id /* block */)a0;
- (id)_lockedById;
- (void)dealloc;
- (BOOL)unlockAllEventsWithKey:(id)a0 error:(id *)a1;
- (BOOL)unlockEvents:(id)a0 error:(id *)a1;
- (BOOL)insertEvents:(id)a0 error:(id *)a1;
- (id)identifierForKey:(id)a0 updateMaybe:(id /* block */)a1 error:(id *)a2;
- (BOOL)connection:(id)a0 needsResetForCorruptionError:(id)a1 error:(out id *)a2;
- (BOOL)removeIdentifiersForAccount:(id)a0 error:(id *)a1;
- (BOOL)dropAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (void)enumerateEventsWithTopic:(id)a0 lockKey:(id)a1 objectBlock:(id /* block */)a2;

@end
