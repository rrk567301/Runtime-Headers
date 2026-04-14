@class NSString, WBSSQLiteDatabase, NSURL, NSObject, WBSOnDiskDataCache;
@protocol OS_dispatch_queue;

@interface FaviconProviderMigrationController : NSObject <WBSDataCacheDelegate> {
    WBSSQLiteDatabase *_iconControllerDatabase;
    WBSSQLiteDatabase *_faviconDatabase;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSOnDiskDataCache *_faviconDiskCache;
    id /* block */ _migrationCompletion;
    NSURL *_baseURL;
    BOOL _isMigrating;
}

@property (readonly, nonatomic) NSURL *iconControllerDatabaseURL;
@property (readonly, nonatomic) NSURL *faviconDatabaseURL;
@property (readonly, nonatomic) NSURL *faviconDiskCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_closeDatabases;
- (void)_continueWithMigrationAfterDiskCachSetUp;
- (id)_databaseQueueName;
- (void)_finishMigratingWithSuccess:(BOOL)a0;
- (void)_migrateDatabase;
- (BOOL)_openLegacyDatabase;
- (BOOL)_openNewDatabase;
- (void)dataCacheDidSetUp:(id)a0;
- (id)initWithExistingDatabaseURL:(id)a0 migratedBaseURL:(id)a1 name:(id)a2;
- (void)migrateWithCompletionHandler:(id /* block */)a0;

@end
