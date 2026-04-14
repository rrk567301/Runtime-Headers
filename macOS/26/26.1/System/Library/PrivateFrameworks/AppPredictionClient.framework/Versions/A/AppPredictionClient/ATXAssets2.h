@interface ATXAssets2 : NSObject

+ (id)dictionaryFromLazyPlistForClassName:(id)a0;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (id)asset;
+ (void)updateMobileAssetMetadata;
+ (void)onUpdateRestartThisProcess;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)dictionaryForClass:(Class)a0;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)dictionaryWithLegacyPathForClass:(Class)a0;
+ (void)clearOverrides;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryFromLazyPlistForClass:(Class)a0;
+ (id)dictionaryForClassName:(id)a0;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryFromLazyPlistWithLegacyPathForClass:(Class)a0;
+ (id)pathForResource:(id)a0 ofType:(id)a1 isDirectory:(BOOL)a2;

@end
