@interface ATXAssets2 : NSObject

+ (id)dictionaryFromLazyPlistForClass:(Class)a0;
+ (id)dictionaryWithLegacyPathForClass:(Class)a0;
+ (id)asset;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClass:(Class)a0;
+ (void)onUpdateRestartThisProcess;
+ (void)updateMobileAssetMetadata;
+ (id)pathForResource:(id)a0 ofType:(id)a1 isDirectory:(BOOL)a2;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryFromLazyPlistWithLegacyPathForClass:(Class)a0;
+ (id)dictionaryFromLazyPlistForClassName:(id)a0;
+ (void)clearOverrides;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)dictionaryForClassName:(id)a0;

@end
