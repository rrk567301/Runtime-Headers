@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisPhotoLibraryService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

+ (void)notifyComputeCacheDidLoadForLibrary:(id)a0 reply:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)updateKeyAssetOfSocialGroupsWithUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)computeCacheDidLoad:(id /* block */)a0;
- (void)curatedAssetsFromAssetUUIDs:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)extendedCuratedAssetsFromAssetUUIDs:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)keyAssetFromAssetUUIDs:(id)a0 inAllAssets:(id)a1 reply:(id /* block */)a2;

@end
