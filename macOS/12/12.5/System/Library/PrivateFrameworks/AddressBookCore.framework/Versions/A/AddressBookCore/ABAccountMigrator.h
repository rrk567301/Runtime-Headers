@class ABAccountRepository, ABAccount, NSError;

@interface ABAccountMigrator : NSObject {
    ABAccountRepository *_repository;
    ABAccount *_sourceAccount;
    ABAccount *_destinationAccount;
    int _options;
    NSError *_error;
    BOOL _backgroundMigrationComplete;
    BOOL _deletionHandledDuringMigration;
}

+ (id)os_log;

- (void).cxx_destruct;
- (void)performMigration;
- (id)initWithRepository:(id)a0 sourceAccount:(id)a1 destinationAccount:(id)a2 options:(int)a3;
- (BOOL)migrateAccount:(id *)a0;
- (void)prepareToMigrate;
- (BOOL)setOutError:(id *)a0;
- (void)clearError;
- (void)logMigrationOptions;
- (void)postDidBeginMigrationNotification;
- (void)handleNotificationTests;
- (void)putSyncInStandby;
- (void)exportSummaryOfSourceAccountContents;
- (void)backupLocalAccountData;
- (void)migrateAccountData;
- (void)deleteSourceAccountData;
- (void)finalizeMigration;
- (void)performMigrationInBackgroundThreadAndWait;
- (void)performMigrationSteps;
- (void)threadEntry;
- (id)_debugStringForOptions:(int)a0;
- (void)runOperation:(id)a0;
- (BOOL)isMigrationSuccessful;
- (void)resetAddressBookSyncAndClearify:(BOOL)a0;

@end
