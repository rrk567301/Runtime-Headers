@class WBSCrowdsourcedFeedbackDomainNormalizer, WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject <WBSCrowdsourcedFeedbackAllowList> {
    NSURL *_parsecDatabaseURL;
    WBSSQLiteDatabase *_parsecDatabase;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
}

+ (id)_defaultParsecDatabaseURL;
+ (id)_obsoleteLocalDatabaseURLForRemoval;
+ (id)standardStore;

- (void)_closeDatabases;
- (id)init;
- (void)closeDatabase;
- (void).cxx_destruct;
- (void)_configureDatabase:(id)a0 currentSchemaVersion:(int)a1;
- (int)_createFreshParsecDatabaseSchema;
- (BOOL)_isDatabaseOpen:(id)a0;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)a0;
- (BOOL)_migrateToSchemaVersion:(int)a0 forDatabase:(id)a1;
- (int)_migrateToSchemaVersion_2;
- (id)_normalizeDomain:(id)a0;
- (void)_openDatabasesIfNeeded;
- (void)_openParsecDatabase;
- (id)_parsecMetadataStringValueForKey:(id)a0;
- (BOOL)_replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1;
- (int)_schemaVersionForDatabase:(id)a0;
- (int)_setDatabaseSchemaVersion:(int)a0 forDatabase:(id)a1;
- (BOOL)_setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1;
- (BOOL)_setParsecMetadataStringValue:(id)a0 forKey:(id)a1;
- (BOOL)_tryToPerformTransactionOnDatabase:(id)a0 inBlock:(id /* block */)a1;
- (void)getAllowListStatusForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)getLastAllowListRetrievalURLStringWithCompletionHandler:(id /* block */)a0;
- (id)initWithParsecDatabaseURL:(id)a0;
- (void)removeObsoleteDatabase;
- (void)replaceDomainAllowListWithDomains:(id)a0 retrievalURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDomain:(id)a0 isAllowListedForFeedback:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setLastAllowListRetrievalURLString:(id)a0 completionHandler:(id /* block */)a1;

@end
