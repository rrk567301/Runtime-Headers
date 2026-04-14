@interface AMSCommerceMigrator : NSObject

+ (void)migrateCommerceAccountsWithOptions:(id)a0;
+ (id)_createAccountFromKnownAccountsDictionary:(id)a0 accountTypeIdentifier:(id)a1;
+ (id)_cookiesFromURL:(id)a0;
+ (void)_migrateAppStoreInformationIntoAccounts:(id)a0;
+ (void)_migrateBooksInformationIntoAccounts:(id)a0;
+ (void)_migrateConfiguratorInformationIntoAccounts:(id)a0;
+ (id)_migrateCommerceAccounts;
+ (id)_migrateLegacyCommerceAccounts;
+ (void)_migrateCookiesIntoAccounts:(id)a0;
+ (void)_migrateiTunesInformation;
+ (void)_migratePrivacyAcknowledgementIntoAccounts:(id)a0;
+ (void)_migrateBiometricsStateIntoAccounts:(id)a0;
+ (id)_primaryDSIDFromLegacyPreferencesDomain:(id)a0 clientType:(id)a1 serverType:(id)a2;
+ (void)_removeAccountRelatedDefaultsUsingAccounts:(id)a0;

@end
