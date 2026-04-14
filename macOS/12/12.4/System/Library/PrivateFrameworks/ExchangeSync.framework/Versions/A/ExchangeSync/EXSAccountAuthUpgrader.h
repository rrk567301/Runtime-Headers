@class NSConditionLock;

@interface EXSAccountAuthUpgrader : NSObject {
    _Atomic int _migratingAccountsCounter;
}

@property (retain) NSConditionLock *activityLock;

+ (id)sharedInstance;
+ (id)log;
+ (void)_retrieveMigrationStatusFromConfigurationURI:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)_isExchangeBasicAccount:(id)a0;
+ (BOOL)_profileMigrationDisabled;
+ (BOOL)_profileMigrationEnabled;
+ (BOOL)_serverMigrationEnabled;
+ (BOOL)_shouldMigrateExchangeAccountToOAuth:(id)a0;

- (void).cxx_destruct;
- (void)triggerAccountMigration;

@end
