@class NSString, REMStore, NSDate, NSError, REMStoreContainerToken;

@interface REMDatabaseMigrationContext : NSObject

@property (nonatomic) BOOL isDatabaseMigrated;
@property (retain, nonatomic) REMStoreContainerToken *containerToken;
@property (retain, nonatomic) REMStore *cachedStore;
@property (retain, nonatomic) NSDate *migrationStartDate;
@property (nonatomic) BOOL hasPerformedEnsureAccountsExist;
@property (retain, nonatomic) NSString *lastReportedErrorIdentifier;
@property (nonatomic) unsigned long long lastReportedErrorStage;
@property (retain, nonatomic) NSError *lastReportedError;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;

- (BOOL)ensureAccountsExist:(id *)a0;
- (void)dealloc;
- (void)reportMigrationWillBegin;
- (void)reportMigrationErrorWithIdentifier:(id)a0 atStage:(unsigned long long)a1 error:(id)a2 objectLocator:(id)a3;
- (id)init;
- (id)initWithSandboxDatabaseEnabled:(BOOL)a0;
- (void)destroySandboxContainerIfNecessary;
- (void)_postMigrationLocalAccountCleanup;
- (void)setShouldDataAccessStopSyncingReminders:(BOOL)a0;
- (BOOL)ensureAccountsExist:(id)a0 error:(id *)a1;
- (BOOL)_cleanLocalDatabases:(id *)a0;
- (id)remStore;
- (void)reportMigrationDidFinishWithSuccess:(BOOL)a0;
- (BOOL)ensureAccountsExistWithMigrationAccountInfos:(id)a0 error:(id *)a1;
- (id)_migrationAccountInfosFromDEPRECATEDInfoDictionaryList:(id)a0;
- (void).cxx_destruct;
- (void)_diagnosticReportWithStage:(unsigned long long)a0 failureIdentifier:(id)a1 error:(id)a2;

@end
