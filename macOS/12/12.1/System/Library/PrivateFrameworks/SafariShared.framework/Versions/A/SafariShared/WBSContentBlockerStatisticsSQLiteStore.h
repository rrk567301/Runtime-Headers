@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

@property (class, readonly, nonatomic) WBSContentBlockerStatisticsSQLiteStore *standardStore;

+ (id)_defaultDatabaseURL;

- (void).cxx_destruct;
- (long long)_schemaVersion;
- (id)initWithDatabaseURL:(id)a0;
- (void)closeDatabase;
- (BOOL)_openDatabaseIfNeeded;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)a0;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)a0;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 onFirstParty:(id)a2 completionHandler:(id /* block */)a3;
- (void)_clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)_clearStatisticsForDomain:(id)a0;
- (void)_deleteUnusedDomains;
- (void)_closeDatabaseOnDatabaseQueue;
- (BOOL)_tryOpenDatabase:(id *)a0;
- (void)_deleteDatabase;
- (BOOL)_createDatabaseSchemaIfNeeded;
- (void)recordThirdPartyResourceBlocked:(id)a0 onFirstParty:(id)a1 completionHandler:(id /* block */)a2;
- (void)blockedThirdPartiesAfter:(id)a0 before:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)a0;
- (void)clearStatisticsAfter:(id)a0 before:(id)a1;
- (void)clearStatisticsForDomains:(id)a0;

@end
