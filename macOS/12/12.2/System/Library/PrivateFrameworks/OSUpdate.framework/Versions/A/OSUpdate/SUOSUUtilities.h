@interface SUOSUUtilities : NSObject

+ (id)productsFromDescriptors:(id)a0;
+ (id)descriptorsFromProducts:(id)a0;
+ (id)mobileSoftwareUpdateProductKeyForDescriptor:(id)a0;
+ (BOOL)cacheInfoDictionary:(id)a0 toPath:(id)a1 withError:(id *)a2;
+ (id)marketingVersionFromProductKey:(id)a0;
+ (BOOL)isMobileSoftwareUpdateForProductKey:(id)a0;
+ (id)legacyProductKeysForProductKeys:(id)a0;
+ (id)productKeysForSUOSUProducts:(id)a0;
+ (id)externalProductKeysForProductKeys:(id)a0;
+ (BOOL)restartForSoftwareUpdateShouldForce:(BOOL)a0;
+ (id)mobileSoftwareUpdatesForProducts:(id)a0;
+ (id)buildVersionFromProductKey:(id)a0;
+ (BOOL)_startLogoutForSoftwareUpdateOfType:(int)a0 shouldForce:(BOOL)a1;
+ (id)msuProductKeysForProducts:(id)a0;
+ (void)addConstraintsOfRelation:(long long)a0 forChildView:(id)a1 withParentView:(id)a2;
+ (BOOL)restartForSoftwareUpdate;
+ (BOOL)shutdownForSoftwareUpdate;
+ (id)bridgeOSCatalogWithTrain:(id)a0 usingProdFused:(BOOL)a1;

@end
