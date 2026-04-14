@class PGCurationCache, PHPhotoLibrary, NSObject, PGCurationCriteriaFactory;
@protocol OS_os_log;

@interface PGCurationManager : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *curationLoggingConnection;
@property (readonly, nonatomic) PGCurationCache *cache;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PGCurationCriteriaFactory *curationCriteriaFactory;

+ (id)representativeAssetsForAssetCollection:(id)a0 progressBlock:(id /* block */)a1;
+ (id)assetPropertySetsForCuration;
+ (id)dedupedAssetsWithAssets:(id)a0 precision:(unsigned long long)a1;
+ (id)sceneInfoWithAsset:(id)a0;
+ (id)defaultAssetSortDescriptors;
+ (id)filterAssets:(id)a0 withLocation:(id)a1 maximumDistance:(double)a2;
+ (id)filterAssets:(id)a0 inMomentNodes:(id)a1 forCityNodes:(id)a2 withMaximumDistance:(double)a3;
+ (id)filterAssets:(id)a0 inMomentNodes:(id)a1 forAreaNodes:(id)a2 withMaximumDistance:(double)a3;
+ (id)filteredAssetsFromAssets:(id)a0 withContextualAssetLocalIdentifiers:(id)a1 approximateTimeDistance:(double)a2;
+ (id)filterAssets:(id)a0 withLocations:(id)a1 maximumDistance:(double)a2;
+ (unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)a0 withTotalNumberOfItems:(unsigned long long)a1 spanningNumberOfDays:(double)a2;
+ (id)summaryClusteringForDuration:(unsigned long long)a0 andPrecision:(unsigned long long)a1;
+ (id)assetsBeautifierForPrecision:(unsigned long long)a0;
+ (unsigned long long)minimumNumberOfItemsForDuration:(unsigned long long)a0 withMaximumNumberOfItems:(unsigned long long)a1;
+ (unsigned long long)maximumNumberOfItemsForDuration:(unsigned long long)a0 withTotalNumberOfItems:(unsigned long long)a1;
+ (id)filterAssets:(id)a0 inMomentNodes:(id)a1 forStateNodes:(id)a2 withMaximumDistance:(double)a3;
+ (id)dejunkAndDedupeItems:(id)a0 options:(id)a1 debugInfo:(id)a2 progressBlock:(id /* block */)a3;
+ (id)representativeAssetsForAssets:(id)a0 progressBlock:(id /* block */)a1;
+ (BOOL)areAssetsInteresting:(id)a0 minimumNumberOfCuratedAssets:(unsigned long long)a1 duration:(unsigned long long)a2 precision:(unsigned long long)a3;
+ (double)contentScoreForAssets:(id)a0;
+ (id)_filteredAssetsWithFaceFilter:(unsigned long long)a0 forAssets:(id)a1;
+ (id)_filterAssets:(id)a0 withPositiveLocations:(id)a1 negativeLocations:(id)a2 maximumDistance:(double)a3;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)curatedKeyAssetForAssetCollection:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3;
- (id)curatedAssetsForPersonLocalIdentifier:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned long long)optimalDurationForAssetCollection:(id)a0 duration:(unsigned long long)a1 precision:(unsigned long long)a2 options:(id)a3;
- (id)curatedAssetsForAssetCollection:(id)a0 duration:(unsigned long long)a1 precision:(unsigned long long)a2 referencePersonLocalIdentifiers:(id)a3 progressBlock:(id /* block */)a4;
- (id)dejunkAndDedupeAssetsInAssetCollection:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)curatedAssetsForAssetCollection:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (id)defaultAssetFetchOptionsForMemoriesWithoutPrefetch;
- (id)memoryCuratedAssetsForAssetCollection:(id)a0 duration:(unsigned long long)a1 withContextualAssetLocalIdentifiers:(id)a2 minimumProportion:(double)a3 graph:(id)a4 curationContext:(id)a5 progressBlock:(id /* block */)a6;
- (id)memoryCuratedAssetsForAssets:(id)a0 duration:(unsigned long long)a1 withContextualAssetLocalIdentifiers:(id)a2 minimumProportion:(double)a3 graph:(id)a4 curationContext:(id)a5 progressBlock:(id /* block */)a6;
- (id)defaultAssetFetchOptionsForMemories;
- (id)curatedKeyAssetIdentifierForCollectionUUID:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3 curationContext:(id)a4;
- (id)_curatedKeyAssetIdentifierForCollectionUUID:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3 curatedKeyAsset:(id *)a4 curationContext:(id)a5;
- (id)bestAssetForAssetFeeder:(id)a0 options:(id)a1 criteria:(id)a2;
- (id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)a0;
- (id)curatedKeyAssetForCollectionUUID:(id)a0 curatedAssetCollection:(id)a1 options:(id)a2 criteria:(id)a3 curationContext:(id)a4;
- (BOOL)isAssetFeederInteresting:(id)a0 withAlternateJunking:(BOOL)a1 precision:(unsigned long long)a2;
- (double)contentScoreForAssetFeeder:(id)a0 precision:(unsigned long long)a1;
- (void)invalidateCurationCacheForMomentUUIDs:(id)a0;
- (id)bestAssetInAssets:(id)a0 forReferencePersonLocalIdentifiers:(id)a1 requiredMinimumNumberOfReferencePersons:(unsigned long long)a2 forMemories:(BOOL)a3 allowGuestAsset:(BOOL)a4 wantsGoodSquareCropScore:(BOOL)a5;
- (id)bestAssetInAssets:(id)a0 options:(id)a1;
- (id)_bestAssetsInAssets:(id)a0 forReferencePersonLocalIdentifiers:(id)a1 minimumRatioOfReferencePersonsPerAsset:(double)a2 progressBlock:(id /* block */)a3;
- (id)criteriaForKeyAssetCurationWithAssetCollection:(id)a0 graph:(id)a1 options:(id)a2;
- (id)fetchAssetWithLocalIdentifier:(id)a0;
- (id)defaultAssetFetchOptions;
- (id)bestAssetForAssetFeeder:(id)a0 options:(id)a1;
- (id)bestAssetsForAssetFeeder:(id)a0 options:(id)a1 progressBlock:(id /* block */)a2;
- (BOOL)isAssetCollectionInteresting:(id)a0 precision:(unsigned long long)a1;
- (id)bestAssetInAssets:(id)a0 forReferencePersonLocalIdentifiers:(id)a1 minimumNumberOfCommonPeople:(unsigned long long)a2 forKeyAsset:(BOOL)a3 forMemories:(BOOL)a4 allowGuestAsset:(BOOL)a5;
- (id)_bestAssetInSummarizedAssets:(id)a0 forReferencePersonLocalIdentifiers:(id)a1;
- (id)_contextualBestAssetInAssets:(id)a0;
- (id)_extendedAssetsForCurationForAssets:(id)a0 matchingAssetsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)contentScoreForAssetCollection:(id)a0 precision:(unsigned long long)a1;
- (id)_filteredAssetsForAssets:(id)a0 inMoments:(id)a1 keepFavorites:(BOOL)a2;
- (id)_timeBasedAssetClustersForAssets:(id)a0 maximumClusterCount:(unsigned long long)a1;
- (id)_firstBestFacedAssetInAssetCluster:(id)a0 facesByAssetIdentifiers:(id)a1;
- (id)_libraryDateInterval;

@end
