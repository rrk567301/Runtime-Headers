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
+ (void)registerCleanupXPCActivity;
+ (void)setUpCleanupXPCActivitySynchronously:(BOOL)a0;

- (void)hasThumbnailForURLWrapper:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initForTesting;
- (void)removeThumbnailForURL:(id)a0 completion:(id /* block */)a1;
- (id)allEntries;
- (BOOL)open;
- (id)volumeRestrictionForMountPoint:(id)a0;
- (void)flush;
- (BOOL)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1;
- (void)_cleanUpAfterClose;
- (void)removeEntriesFromDatabase:(id)a0;
- (void)close;
- (id)whereClauseForURL:(id)a0;
- (id)initWithURL:(id)a0;
- (BOOL)removeThumbnailForURL:(id)a0;
- (void)cancelCacheDeletePurge;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (int)deviceForVolumeUUID:(id)a0 gettingMountURL:(id *)a1 usingDiskManager:(id)a2;
- (void)_neuterAutoRollbackHandler;
- (BOOL)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1;
- (id)databaseConnection;
- (void).cxx_destruct;
- (id)entriesEnumerator;
- (BOOL)addThumbnailForURL:(id)a0 size:(unsigned long long)a1;
- (void)performDatabaseMaintenance;
- (BOOL)hasThumbnailForURL:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2;
- (void)removeAllAdditions;
- (void)setUpDatabase:(id)a0;
- (BOOL)removeDatabaseAtURL:(id)a0 error:(id *)a1;
- (id)makeDatabaseAtURL:(id)a0 error:(id *)a1;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void)retrieveAllAdditions:(id /* block */)a0;
- (id)batchOfEntriesStartingAt:(unsigned long long)a0 endingAt:(unsigned long long *)a1;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (void)addThumbnailForURLWrapper:(id)a0 size:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (id)init;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (BOOL)dispatchSyncOnDatabaseQueue:(id /* block */)a0;
- (id)upgradeDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (BOOL)addThumbnailForURL:(id)a0 lastHitDate:(id)a1 size:(unsigned long long)a2;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)a0;
- (void)cleanUpBatchOfEntries:(id)a0 usingDiskManager:(id)a1 openDevices:(id)a2 devforUUID:(id)a3;
- (id)openDatabaseAtURL:(id)a0 error:(id *)a1;

@end
