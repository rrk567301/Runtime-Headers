@interface ATXAssets2 : NSObject

+ (void)clearOverrides;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)dictionaryFromLazyPlistForClass:(Class)a0;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (void)onUpdateRestartThisProcess;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryWithLegacyPathForClass:(Class)a0;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClassName:(id)a0;
+ (id)asset;
+ (id)pathForResource:(id)a0 ofType:(id)a1 isDirectory:(BOOL)a2;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClass:(Class)a0;
+ (void)updateMobileAssetMetadata;
+ (id)dictionaryFromLazyPlistForClassName:(id)a0;
+ (id)dictionaryFromLazyPlistWithLegacyPathForClass:(Class)a0;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;

@end
