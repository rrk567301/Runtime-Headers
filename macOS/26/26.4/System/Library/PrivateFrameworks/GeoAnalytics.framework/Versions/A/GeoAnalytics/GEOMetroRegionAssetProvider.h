@class NSCache;

@interface GEOMetroRegionAssetProvider : NSObject {
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileURLCache;
}

+ (void)_unavailableAssetForAssetCode:(id)a0 completion:(id /* block */)a1;
+ (void)_downloadAsset:(id)a0 completion:(id /* block */)a1;
+ (id)sharedProvider;
+ (void)_downloadCatalogIfNeededThen:(id /* block */)a0;
+ (id)_maQueryForAssetCode:(id)a0;
+ (void)preloadAssetForCountryCode:(id)a0 preloadQueue:(id)a1 completion:(id /* block */)a2;
+ (void)_updateCatalogWithResult:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_catalogDownloadFinishedWithResult:(long long)a0;
- (void)_updateCatalogAfterDelay:(double)a0;
- (id)_bestAvailableAssetForAssetCode:(id)a0;
- (id)_acceptListForCountryCode:(id)a0 name:(id)a1;
- (id)homeCountryCodeAcceptList;
- (id)homeMetroAcceptListForCountryCode:(id)a0;
- (id)urlForInstalledCountryCode:(id)a0;

@end
