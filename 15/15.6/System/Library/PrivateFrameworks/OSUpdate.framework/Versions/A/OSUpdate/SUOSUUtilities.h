@interface SUOSUUtilities : NSObject

+ (id)localizedStringForKey:(id)a0;
+ (id)marketingVersionFromProductKey:(id)a0;
+ (char)isDDMSupervised;
+ (id)_matchingProductForProvidedPMV:(id)a0 orBuildVersion:(id)a1 orProductKey:(id)a2 msuProducts:(id)a3;
+ (char)_startLogoutForSoftwareUpdateOfType:(int)a0 shouldForce:(char)a1 withOptions:(id)a2;
+ (void)addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;
+ (id)appsThatWillPreventRestart;
+ (id)buildVersionFromProductKey:(id)a0;
+ (char)cacheInfoDictionary:(id)a0 toPath:(id)a1 withError:(id *)a2;
+ (id)currentBuildTrain;
+ (id)declarationFromKeys;
+ (id)descriptorsFromProducts:(id)a0;
+ (id)externalProductKeysForProductKeys:(id)a0;
+ (id)formatAttributedStringForDisplay:(id)a0 textStyleToMatch:(id)a1 textColor:(id)a2;
+ (id)getMDMOrgNameForManagingSU;
+ (char)isMajorUpdateFromProductKey:(id)a0;
+ (char)isMobileSoftwareUpdateForProductKey:(id)a0;
+ (char)isSplatForProductKey:(id)a0;
+ (char)launchURL:(id)a0;
+ (id)legacyProductKeysForProductKeys:(id)a0;
+ (id)mobileSoftwareUpdateProductKeyForDescriptor:(id)a0;
+ (id)mobileSoftwareUpdatesForProducts:(id)a0;
+ (id)msuProductKeysForProducts:(id)a0;
+ (id)msuUpdateWithProvidedPMV:(id)a0 orBuildVersion:(id)a1 orProductKey:(id)a2;
+ (id)msuUpdateWithProvidedPMV:(id)a0 orBuildVersion:(id)a1 orProductKey:(id)a2 withPMVProducts:(id)a3 withDefaultProducts:(id)a4;
+ (id)originalUpdateTypeDescription:(long long)a0;
+ (char)osVersionIsBetweenMinVersion:(id)a0 maxVersion:(id)a1;
+ (char)parseProductMarketingVersion:(id)a0 systemVersion:(struct { long long x0; long long x1; long long x2; } *)a1;
+ (char)preferencesAreManagedWithMDMOrgName:(id *)a0;
+ (id)printableOptions:(id)a0;
+ (id)productKeysForSUOSUProducts:(id)a0;
+ (id)productsFromDescriptors:(id)a0;
+ (void)requestAppleConnectWithCompletion:(id /* block */)a0;
+ (char)restartForSoftwareUpdate;
+ (char)restartForSoftwareUpdateShouldForce:(char)a0 withOptions:(id)a1;
+ (char)shouldShutDownForPendingBridgeOSUpdate;
+ (void)showErrorAlertFromAuditInfoWithWindow:(id)a0;
+ (char)shutdownForSoftwareUpdate;
+ (id)stringForSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (void)updateLastSeenByUserDefaults:(id)a0 latestQualifyingMajorOSUpdate:(id)a1;
+ (id)updatedDeclarationsWithNewDeclaration:(id)a0 existingDeclarations:(id)a1;
+ (char)versionIsTupleFormatted:(id)a0;
+ (char)versionSameOrNewerThanCurrentSystem:(id)a0;

@end
