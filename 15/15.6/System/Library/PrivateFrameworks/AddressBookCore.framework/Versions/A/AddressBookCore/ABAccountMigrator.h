@class ABAccountRepository, ABAccount, NSError;

@interface ABAccountMigrator : NSObject {
    ABAccountRepository *_repository;
    ABAccount *_sourceAccount;
    ABAccount *_destinationAccount;
    int _options;
    NSError *_error;
    char _backgroundMigrationComplete;
    char _deletionHandledDuringMigration;
}

+ (id)os_log;

- (void).cxx_destruct;
- (void)performMigration;
- (char)migrateAccount:(id *)a0;
- (id)_debugStringForOptions:(int)a0;
- (void)backupLocalAccountData;
- (void)clearError;
- (void)deleteSourceAccountData;
- (void)exportSummaryOfSourceAccountContents;
- (void)finalizeMigration;
- (void)handleNotificationTests;
- (id)initWithRepository:(id)a0 sourceAccount:(id)a1 destinationAccount:(id)a2 options:(int)a3;
- (char)isMigrationSuccessful;
- (void)logMigrationOptions;
- (void)migrateAccountData;
- (void)performMigrationInBackgroundThreadAndWait;
- (void)performMigrationSteps;
- (void)postDidBeginMigrationNotification;
- (void)prepareToMigrate;
- (void)putSyncInStandby;
- (void)resetAddressBookSyncAndClearify:(char)a0;
- (void)runOperation:(id)a0;
- (char)setOutError:(id *)a0;
- (void)threadEntry;

@end
