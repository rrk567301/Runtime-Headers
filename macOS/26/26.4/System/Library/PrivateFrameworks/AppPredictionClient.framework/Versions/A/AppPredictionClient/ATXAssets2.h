@interface ATXAssets2 : NSObject

+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (void)updateMobileAssetMetadata;
+ (id)dictionaryForClassName:(id)a0;
+ (id)pathForResource:(id)a0 ofType:(id)a1 isDirectory:(BOOL)a2;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)asset;
+ (void)onUpdateRestartThisProcess;
+ (id)dictionaryFromLazyPlistWithLegacyPathForClass:(Class)a0;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)dictionaryForClass:(Class)a0;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)dictionaryWithLegacyPathForClass:(Class)a0;
+ (id)dictionaryFromLazyPlistForClass:(Class)a0;
+ (id)dictionaryFromLazyPlistForClassName:(id)a0;
+ (void)clearOverrides;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;

@end
