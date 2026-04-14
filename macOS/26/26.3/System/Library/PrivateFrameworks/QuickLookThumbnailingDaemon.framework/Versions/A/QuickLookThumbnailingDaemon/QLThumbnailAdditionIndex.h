@class PQLConnection, NSURL, NSObject;
@protocol OS_dispatch_source;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {
    NSURL *_url;
    NSObject<OS_dispatch_source> *_dbWatcher;
    BOOL _exitsOnCorruption;
}

@property (readonly) PQLConnection *db;
@property (readonly, copy) NSURL *databaseURL;

+ (id)sharedInstance;
+ (void)setUpCleanupXPCActivitySynchronously:(BOOL)a0;
+ (void)registerCleanupXPCActivity;

- (void)setUpDatabase:(id)a0;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)a0;
- (id)batchOfEntriesStartingAt:(unsigned long long)a0 endingAt:(unsigned long long *)a1;
- (void)close;
- (id)upgradeDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (void)addThumbnailForURLWrapper:(id)a0 size:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1;
- (id)makeDatabaseAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)addThumbnailForURL:(id)a0 lastHitDate:(id)a1 size:(unsigned long long)a2;
- (BOOL)hasThumbnailForURL:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2;
- (void)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (id)initWithURL:(id)a0;
- (void)_cleanUpAfterClose;
- (BOOL)removeDatabaseAtURL:(id)a0 error:(id *)a1;
- (BOOL)open;
- (id)whereClauseForURL:(id)a0;
- (void)_neuterAutoRollbackHandler;
- (void)flush;
- (id)initForTesting;
- (BOOL)addThumbnailForURL:(id)a0 size:(unsigned long long)a1;
- (int)deviceForVolumeUUID:(id)a0 gettingMountURL:(id *)a1 usingDiskManager:(id)a2;
- (void)removeEntriesFromDatabase:(id)a0;
- (void)hasThumbnailForURLWrapper:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)entriesEnumerator;
- (void).cxx_destruct;
- (void)retrieveAllAdditions:(id /* block */)a0;
- (BOOL)removeThumbnailForURL:(id)a0;
- (id)openDatabaseAtURL:(id)a0 error:(id *)a1;
- (id)volumeRestrictionForMountPoint:(id)a0;
- (void)removeAllAdditions;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (void)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (BOOL)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1;
- (void)performDatabaseMaintenance;
- (void)removeThumbnailForURL:(id)a0 completion:(id /* block */)a1;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (id)allEntries;
- (void)cancelCacheDeletePurge;
- (BOOL)dispatchSyncOnDatabaseQueue:(id /* block */)a0;
- (void)cleanUpBatchOfEntries:(id)a0 usingDiskManager:(id)a1 openDevices:(id)a2 devforUUID:(id)a3;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (id)databaseConnection;

@end
