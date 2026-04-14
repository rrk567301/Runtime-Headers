@interface PNDetailsViewAssetFetcher : NSObject

+ (id)fetchAllAssetsForCollection:(id)a0 options:(id)a1;
+ (id)fetchEditorialAssetsForCollection:(id)a0 options:(id)a1;
+ (id)fetchMovieAssetsForCollection:(id)a0 options:(id)a1;
+ (id)fetchPreviewAssetsForCollection:(id)a0 options:(id)a1;
+ (id)addingKeyAssetForObject:(id)a0 toAssets:(id)a1 options:(id)a2;

- (id)init;
- (void).cxx_destruct;

@end
