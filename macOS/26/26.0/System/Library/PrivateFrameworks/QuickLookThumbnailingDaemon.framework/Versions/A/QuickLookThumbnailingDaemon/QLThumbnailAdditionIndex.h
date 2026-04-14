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

- (void)removeAllAdditions;
- (id)upgradeDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (int)deviceForVolumeUUID:(id)a0 gettingMountURL:(id *)a1 usingDiskManager:(id)a2;
- (BOOL)dispatchSyncOnDatabaseQueue:(id /* block */)a0;
- (void)performDatabaseMaintenance;
- (void)addThumbnailForURLWrapper:(id)a0 size:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)hasThumbnailForURLWrapper:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (void)_cleanUpAfterClose;
- (id)allEntries;
- (id)entriesEnumerator;
- (void)removeThumbnailForURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasThumbnailForURL:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2;
- (void)cleanUpBatchOfEntries:(id)a0 usingDiskManager:(id)a1 openDevices:(id)a2 devforUUID:(id)a3;
- (void)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (id)whereClauseForURL:(id)a0;
- (id)makeDatabaseAtURL:(id)a0 error:(id *)a1;
- (id)databaseConnection;
- (id)volumeRestrictionForMountPoint:(id)a0;
- (id)init;
- (void)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (BOOL)open;
- (BOOL)removeDatabaseAtURL:(id)a0 error:(id *)a1;
- (void)flush;
- (id)initForTesting;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)a0;
- (BOOL)addThumbnailForURL:(id)a0 size:(unsigned long long)a1;
- (BOOL)addThumbnailForURL:(id)a0 lastHitDate:(id)a1 size:(unsigned long long)a2;
- (void)setUpDatabase:(id)a0;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (id)batchOfEntriesStartingAt:(unsigned long long)a0 endingAt:(unsigned long long *)a1;
- (id)openDatabaseAtURL:(id)a0 error:(id *)a1;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (id)initWithURL:(id)a0;
- (void)cancelCacheDeletePurge;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (void)_neuterAutoRollbackHandler;
- (BOOL)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1;
- (void)retrieveAllAdditions:(id /* block */)a0;
- (BOOL)removeThumbnailForURL:(id)a0;
- (BOOL)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1;
- (void)removeEntriesFromDatabase:(id)a0;
- (void)close;
- (void).cxx_destruct;

@end
