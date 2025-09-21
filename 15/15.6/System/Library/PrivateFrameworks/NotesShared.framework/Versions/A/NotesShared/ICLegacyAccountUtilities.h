@interface ICLegacyAccountUtilities : NSObject

+ (id)accountForEmailAddress:(id)a0 context:(id)a1;
+ (id)accountForAccountIdentifier:(id)a0 context:(id)a1;
+ (id)accountIdentifierForAccount:(id)a0;
+ (char)didChooseToMigrateAccount:(id)a0 context:(id)a1;
+ (char)didChooseToMigrateAccountsForContext:(id)a0 forAccountPassingTest:(id /* block */)a1;
+ (char)didChooseToMigrateLegacyAccountType:(long long)a0;
+ (id)emailAddressForAccount:(id)a0;
+ (char)isLegacyLocalAccount:(id)a0;
+ (id)legacyAccountForICloudACAccount:(id)a0 context:(id)a1;
+ (id)legacyAccountForICloudAccount:(id)a0 context:(id)a1;
+ (id)legacyAccountForLegacyAccountType:(long long)a0 context:(id)a1;
+ (id)legacyAccountForLocalAccountWithContext:(id)a0;
+ (id)legacyAccountForPrimaryICloudAccountWithContext:(id)a0;

@end
