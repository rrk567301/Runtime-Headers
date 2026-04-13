@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    long long _totalImageRequestCount;
    long long _HEICImageRequestCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) MPStoreArtworkDataSource *sharedStoreArtworkDataSource;

@property (nonatomic) double maxHEICRequestPercentage;

- (id)init;
- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)supportedSizesForCatalog:(id)a0;
- (id)sortedSupportedSizesForCatalog:(id)a0;
- (BOOL)wantsBackgroundImageDecompression;
- (id)requestForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })bestAvailableSizeForCatalog:(id)a0;
- (id)cacheKeyForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)_bestURLForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })_bestSizeForImageSizeInfo:(id)a0 catalog:(id)a1;

@end
