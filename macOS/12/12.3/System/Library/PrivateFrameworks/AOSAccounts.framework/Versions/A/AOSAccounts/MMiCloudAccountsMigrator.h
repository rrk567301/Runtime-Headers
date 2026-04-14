@interface MMiCloudAccountsMigrator : NSObject

+ (void)removeAccountFromDefaults:(id)a0;
+ (id)IsAccountDuplicate:(id)a0;
+ (void)dedupeAppleAccounts;
+ (id)mobileMeAccounts;
+ (id)accountIDFromMobileMeAccount:(id)a0;
+ (id)dsidFromMobileMeAccount:(id)a0;
+ (id)migrateMobileMeAccounts:(id)a0 toACAccounts:(id)a1 store:(id)a2 error:(id *)a3;
+ (id)saveMigratedACAccounts:(id)a0 store:(id)a1;
+ (id)accountInfoFromMobileMeAccount:(id)a0;
+ (void)migrateAccounts:(BOOL)a0;
+ (BOOL)areAccountsEqual:(id)a0 acAccount:(id)a1 equivalent:(BOOL)a2;

@end
