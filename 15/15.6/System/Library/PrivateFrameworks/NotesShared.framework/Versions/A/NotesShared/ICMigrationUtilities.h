@interface ICMigrationUtilities : NSObject

+ (void)clearPostIAMigrationFlagFromAccount:(id)a0;
+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)a0;
+ (void)deleteMigratedHTMLAccountsInContext:(id)a0;
+ (void)fetchAndSetMigrationStateForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)fetchMigrationStateForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (char)parentACAccountNeedsMigrationAfterIA:(id)a0;
+ (void)saveDidChooseToMigrate:(char)a0 didFinishMigration:(char)a1 didMigrateOnMac:(char)a2 toACAccount:(id)a3 inStore:(id)a4 completionHandler:(id /* block */)a5;
+ (void)updateAllLegacyAccountMigrationStatesInContext:(id)a0;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)a0;

@end
