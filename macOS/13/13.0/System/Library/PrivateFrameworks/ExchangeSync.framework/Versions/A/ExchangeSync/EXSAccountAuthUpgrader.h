@class NSConditionLock;

@interface EXSAccountAuthUpgrader : NSObject {
    _Atomic int _migratingAccountsCounter;
}

@property (retain) NSConditionLock *activityLock;

+ (id)sharedInstance;
+ (id)log;
+ (id)_migrationDecisionString:(unsigned long long)a0;
+ (void)_retrieveMigrationStatusFromConfigurationURI:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)_serverMigrationEnabled;
+ (BOOL)_profileMigrationEnabled;
+ (BOOL)_profileMigrationDisabled;
+ (BOOL)_isExchangeBasicAccount:(id)a0;
+ (unsigned long long)_migrateExchangeAccountToOAuthDecision:(id)a0;

- (void).cxx_destruct;
- (void)_sendAnalyticsForMigratingAccount:(id)a0 withStatus:(id)a1;
- (id)_migrationStatusForAccount:(id)a0;
- (void)triggerAccountMigration;

@end
