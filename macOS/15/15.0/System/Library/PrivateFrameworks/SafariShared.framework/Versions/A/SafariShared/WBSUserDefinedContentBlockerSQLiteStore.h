@class NSURL, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSUserDefinedContentBlockerSQLiteStore : NSObject {
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
}

+ (id)sharedStore;
+ (id)defaultDatabaseURL;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)_isDatabaseOpen;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)_associateActionID:(long long)a0 withCrossSiteContentID:(long long)a1;
- (void)_closeDatabase;
- (void)_deleteAction:(id)a0;
- (void)_deleteActionsForContentBlockerID:(long long)a0;
- (BOOL)_deleteFromAllTables;
- (void)_deleteUnassociatedCrossSiteContent;
- (void)_getActionsForContentBlockerID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_getAllContentBlockerActionsWithType:(id)a0 excludeHost:(id)a1 completion:(id /* block */)a2;
- (void)_getAllContentBlockerHostsWithCompletionHandler:(id /* block */)a0;
- (void)_getContentBlockerWithType:(long long)a0 host:(id)a1 completionHandler:(id /* block */)a2;
- (id)_getCrossSiteContentsWithSource:(id)a0;
- (long long)_getFirstCrossSiteContentIDWithSource:(id)a0;
- (void)_getNumberOfContentBlockersThatContainActionsWithCompletionHandler:(id /* block */)a0;
- (long long)_insertAction:(id)a0 forContentBlockerID:(long long)a1;
- (void)_insertActions:(id)a0 forContentBlockerID:(long long)a1;
- (int)_insertContentBlockerWithType:(long long)a0 host:(id)a1 excludeGlobal:(BOOL)a2;
- (long long)_insertCrossSiteContent:(id)a0;
- (void)_insertCrossSiteContentCandidateIfNeeded:(id)a0 andAssociateWithActionID:(long long)a1;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (BOOL)_migrateToSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion_2;
- (void)_openDatabase;
- (void)_openDatabaseIfNecessary;
- (BOOL)_tryToPerformTransactionInBlock:(id /* block */)a0;
- (void)associateAction:(id)a0 withCrossSiteContentID:(long long)a1;
- (void)createPerSiteContentBlockerForHost:(id)a0;
- (void)deleteAction:(id)a0;
- (void)deleteActionsForContentBlockerID:(long long)a0;
- (void)deleteGlobalContentBlockerActionsWithSelectors:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteUnassociatedCrossSiteContent;
- (void)getAllContentBlockerActionsWithType:(id)a0 excludeHost:(id)a1 completion:(id /* block */)a2;
- (void)getAllContentBlockerHostsWithCompletionHandler:(id /* block */)a0;
- (void)getCrossSiteContentsWithSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)getGlobalContentBlockerWithCompletionHandler:(id /* block */)a0;
- (void)getNumberOfContentBlockersThatContainActionsWithCompletionHandler:(id /* block */)a0;
- (void)getPerSiteContentBlockerForHost:(id)a0 createIfNeeded:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)insertActions:(id)a0 forContentBlockerID:(long long)a1;
- (void)insertCrossSiteContent:(id)a0;
- (void)resetDatabaseWithCompletionHandler:(id /* block */)a0;

@end
