@class NSMutableDictionary;

@interface ICNFMCISPAccountSettingsManager : NSObject {
    NSMutableDictionary *_ispAccountsSettings;
    NSMutableDictionary *_ispReceivingAccountsSettingsByDomain;
    NSMutableDictionary *_ispDeliveryAccountsSettingsByDomain;
    NSMutableDictionary *_ispDeliveryAccountsSettingsByIdentifier;
}

+ (void)initialize;
+ (id)locallyInstalledSettings;
+ (id)onlineDatabaseSettings;
+ (id)_alwaysPersistedKeys;
+ (BOOL)ispAccountInformationAvailableForDomain:(id)a0;
+ (id)ispBrandNameForDomain:(id)a0;
+ (id)ispSupportURLForDomain:(id)a0;
+ (id)ispSupportURLLabelForDomain:(id)a0;
+ (id)ispSubscriptionURLForDomain:(id)a0;
+ (id)ispSubscriptionURLLabelForDomain:(id)a0;
+ (id)_accountInformationStringForKey:(id)a0 localizedKey:(id)a1 domain:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)emptyCache;
- (id)_persistanceFolderName;
- (void)_loadISPAccountsIfNecessary;
- (void)_unloadISPAccounts;
- (void)_loadISPPlistsAtPath:(id)a0;
- (void)_loadISPPlist:(id)a0 bundle:(id)a1 path:(id)a2;
- (BOOL)_shouldVerifyLoadedISPPlist;
- (id)_persistantAccountSettings:(id)a0;
- (id)_persistantISPAccountSettings:(id)a0;
- (BOOL)_persistISPPlist:(id)a0;
- (BOOL)_getAccountIsReceivingAccount:(BOOL *)a0 isDeliveryAccount:(BOOL *)a1 fromAccountSettings:(id)a2;
- (id)_receivingAccountSettingsForDomain:(id)a0 fetchIfNecessary:(BOOL)a1;
- (id)receivingAccountSettingsForDomain:(id)a0;
- (id)_deliveryAccountsSettingsForDomain:(id)a0 fetchIfNecessary:(BOOL)a1;
- (id)deliveryAccountsSettingsForDomain:(id)a0;

@end
