@interface MPCMRLegacyRemoteArtworkDataSource : MPAbstractNetworkArtworkDataSource

@property (class, readonly, nonatomic) MPCMRLegacyRemoteArtworkDataSource *sharedDataSource;

+ (id)bestArtworkSizes;

- (BOOL)hasExportableArtworkPropertiesForCatalog:(id)a0;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)supportedSizesForCatalog:(id)a0;
- (id)_urlForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
