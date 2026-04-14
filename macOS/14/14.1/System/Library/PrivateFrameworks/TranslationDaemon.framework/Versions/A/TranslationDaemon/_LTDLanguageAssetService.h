@class NSSet, NSArray;

@interface _LTDLanguageAssetService : NSObject

@property (class, readonly) NSSet *_selectedIdentifiers;
@property (class, copy) NSArray *selectedLocales;

+ (id)queue;
+ (void)flushCache;
+ (id)_selectedAssets;
+ (void)_availableAssetsWithCompletion:(id /* block */)a0;
+ (void)_installedAssetsWithCompletion:(id /* block */)a0;
+ (id)_languageAssetFilterDescription:(unsigned long long)a0;
+ (unsigned long long)_languageAssetFilterFromOptions:(unsigned long long)a0;
+ (void)_purgeUnusedAssetsWithCompletion:(id /* block */)a0;
+ (void)_selectedAssetsWithCompletion:(id /* block */)a0;
+ (void)assetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)setAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)setInstalledLocales:(id)a0 useCellular:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
