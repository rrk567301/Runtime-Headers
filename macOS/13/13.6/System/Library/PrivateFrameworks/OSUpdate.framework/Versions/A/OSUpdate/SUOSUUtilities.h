@interface SUOSUUtilities : NSObject

+ (id)localizedStringForKey:(id)a0;
+ (id)marketingVersionFromProductKey:(id)a0;
+ (BOOL)updateHasBeenRolledBackWithKey:(id)a0;
+ (BOOL)_startLogoutForSoftwareUpdateOfType:(int)a0 shouldForce:(BOOL)a1 withOptions:(id)a2;
+ (void)addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;
+ (id)appNamesThatWillPreventRestart;
+ (id)bridgeOSCatalogWithTrain:(id)a0 usingProdFused:(BOOL)a1;
+ (id)buildVersionFromProductKey:(id)a0;
+ (BOOL)cacheInfoDictionary:(id)a0 toPath:(id)a1 withError:(id *)a2;
+ (id)descriptorsFromProducts:(id)a0;
+ (id)ensureDefaultTextColorInAttributedString:(id)a0;
+ (id)externalProductKeysForProductKeys:(id)a0;
+ (id)getMDMOrgNameForManagingSU;
+ (BOOL)isMajorUpdateFromProductKey:(id)a0;
+ (BOOL)isMobileSoftwareUpdateForProductKey:(id)a0;
+ (BOOL)isSplatForProductKey:(id)a0;
+ (BOOL)launchURL:(id)a0;
+ (id)legacyProductKeysForProductKeys:(id)a0;
+ (id)mobileSoftwareUpdateProductKeyForDescriptor:(id)a0;
+ (id)mobileSoftwareUpdatesForProducts:(id)a0;
+ (id)msuProductKeysForProducts:(id)a0;
+ (id)originalUpdateTypeDescription:(long long)a0;
+ (BOOL)preferencesAreManagedWithMDMOrgName:(id *)a0;
+ (id)printableOptions:(id)a0;
+ (id)productKeysForSUOSUProducts:(id)a0;
+ (id)productsFromDescriptors:(id)a0;
+ (void)requestAppleConnectWithCompletion:(id /* block */)a0;
+ (BOOL)restartForSoftwareUpdate;
+ (BOOL)restartForSoftwareUpdateShouldForce:(BOOL)a0 withOptions:(id)a1;
+ (void)showErrorAlertFromAuditInfoWithWindow:(id)a0;
+ (BOOL)shutdownForSoftwareUpdate;
+ (BOOL)updateCatalogWithServer:(id)a0;
+ (BOOL)updateCatalogWithServer:(id)a0 withError:(id *)a1;
+ (BOOL)updateHasBeenRolledBack:(id)a0;
+ (void)updateLastSeenByUserDefaults:(id)a0 latestQualifyingMajorOSUpdate:(id)a1;

@end
