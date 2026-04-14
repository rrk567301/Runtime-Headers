@interface ATXAssets2 : NSObject

+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)dictionaryForClassName:(id)a0;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (void)updateMobileAssetMetadata;
+ (id)dictionaryFromLazyPlistWithLegacyPathForClass:(Class)a0;
+ (void)clearOverrides;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryWithLegacyPathForClass:(Class)a0;
+ (void)onUpdateRestartThisProcess;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (id)pathForResource:(id)a0 ofType:(id)a1 isDirectory:(BOOL)a2;
+ (id)dictionaryFromLazyPlistForClassName:(id)a0;
+ (id)asset;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryFromLazyPlistForClass:(Class)a0;
+ (id)dictionaryForClass:(Class)a0;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;

@end
