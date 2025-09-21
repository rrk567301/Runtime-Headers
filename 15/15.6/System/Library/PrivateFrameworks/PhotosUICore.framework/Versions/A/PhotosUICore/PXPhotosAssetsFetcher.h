@class NSString, NSMapTable, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotosAssetsFetcher : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_cachedFetchResultsByContainerByConfiguration;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_adjustedReverseSortOrderForCollection:(id)a0 reverseSortOrder:(char)a1 fetcherOptions:(unsigned long long)a2;
+ (char)_shouldReverseDefaultSortDescriptorsForCollection:(id)a0 fetcherOptions:(unsigned long long)a1;
+ (id)sharedFetcherForPhotoLibrary:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_fetchResultForContainer:(id)a0 configuration:(id)a1 factory:(id /* block */)a2 fallbackFactory:(id /* block */)a3;
- (void)_cacheFetchResult:(id)a0 forContainer:(id)a1 configuration:(id)a2;
- (id)_cachedFetchResultForContainer:(id)a0 configuration:(id)a1;
- (id)_existingAssetsInContainer:(id)a0 curationKind:(long long)a1 curationLength:(long long)a2 options:(unsigned long long)a3 sortDescriptors:(id)a4 reverseSortOrder:(char)a5 filterPredicate:(id)a6 fetchPropertySets:(id)a7 libraryFilter:(long long)a8 includeOthersInSocialGroupAssets:(char)a9;
- (id)_existingCuratedAssetsFetchResultForAssetCollection:(id)a0 referencePersons:(id)a1 curationType:(long long)a2 curationKind:(long long)a3 curationLength:(long long)a4 options:(unsigned long long)a5 sortDescriptors:(id)a6 reverseSortOrder:(char)a7 filterPredicate:(id)a8 fetchPropertySets:(id)a9 libraryFilter:(long long)a10;
- (id)_existingFetchResultForAssetCollection:(id)a0 withFilterPredicate:(id)a1 inclusionPredicate:(id)a2 includeUnsavedSyndicatedAssets:(char)a3 includeAllBurstAssets:(char)a4 fetchLimit:(unsigned long long)a5 options:(unsigned long long)a6 sortDescriptors:(id)a7 reverseSortOrder:(char)a8 hideHiddenAssets:(char)a9 fetchPropertySets:(id)a10 libraryFilter:(long long)a11;
- (id)_existingKeyAssetsFetchResultForAssetCollection:(id)a0 referenceAsset:(id)a1 referencePersons:(id)a2 curated:(char)a3 options:(unsigned long long)a4 libraryFilter:(long long)a5;
- (id)_fetchAssetsInAssetCollection:(id)a0 withFilterPredicate:(id)a1 inclusionPredicate:(id)a2 includeUnsavedSyndicatedAssets:(char)a3 includeAllBurstAssets:(char)a4 fetchLimit:(unsigned long long)a5 options:(unsigned long long)a6 sortDescriptors:(id)a7 reverseSortOrder:(char)a8 hideHiddenAssets:(char)a9 fetchPropertySets:(id)a10 libraryFilter:(long long)a11 includeOthersInSocialGroupAssets:(char)a12;
- (id)_fetchAssetsInContainer:(id)a0 curationKind:(long long)a1 curationLength:(long long)a2 options:(unsigned long long)a3 sortDescriptors:(id)a4 reverseSortOrder:(char)a5 filterPredicate:(id)a6 fetchPropertySets:(id)a7 libraryFilter:(long long)a8 includeOthersInSocialGroupAssets:(char)a9;
- (id)_fetchConfigurationForCuratedAssetsWithCurationKind:(long long)a0 curationLength:(long long)a1 options:(unsigned long long)a2 sortDescriptors:(id)a3 reverseSortOrder:(char)a4 filterPredicate:(id)a5 fetchPropertySets:(id)a6 libraryFilter:(long long)a7 includeOthersInSocialGroupAssets:(char)a8;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)a0 curationType:(long long)a1 curationKind:(long long)a2 curationLength:(long long)a3 options:(unsigned long long)a4 sortDescriptors:(id)a5 reverseSortOrder:(char)a6 filterPredicate:(id)a7 fetchPropertySets:(id)a8 libraryFilter:(long long)a9;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)a0 referencePersons:(id)a1 curated:(char)a2 options:(unsigned long long)a3 libraryFilter:(long long)a4;
- (id)_fetchConfigurationWithFilterPredicate:(id)a0 inclusionPredicate:(id)a1 includeUnsavedSyndicatedAssets:(char)a2 includeAllBurstAssets:(char)a3 fetchLimit:(unsigned long long)a4 options:(unsigned long long)a5 sortDescriptors:(id)a6 reverseSortOrder:(char)a7 hideHiddenAssets:(char)a8 fetchPropertySets:(id)a9 libraryFilter:(long long)a10;
- (id)_fetchCuratedAssetsInAssetCollection:(id)a0 referencePersons:(id)a1 curationType:(long long)a2 curationKind:(long long)a3 curationLength:(long long)a4 options:(unsigned long long)a5 sortDescriptors:(id)a6 reverseSortOrder:(char)a7 filterPredicate:(id)a8 fetchPropertySets:(id)a9 libraryFilter:(long long)a10 includeOthersInSocialGroupAssets:(char)a11;
- (id)_fetchCuratedKeyAssetsInAssetCollection:(id)a0 referenceAsset:(id)a1 referencePersons:(id)a2 options:(unsigned long long)a3 libraryFilter:(long long)a4;
- (id)_fetchKeyAssetsInAssetCollection:(id)a0 curated:(char)a1 referenceAsset:(id)a2 referencePersons:(id)a3 options:(unsigned long long)a4 libraryFilter:(long long)a5;
- (id)_fetchKeyAssetsInAssetCollection:(id)a0 options:(unsigned long long)a1 libraryFilter:(long long)a2;
- (id)_fetchKeyAssetsInContainer:(id)a0 options:(id)a1;
- (id)_fetchKeyCuratedAssetsInPhotosHighlight:(id)a0 options:(id)a1;
- (id)_fetchOptionsForAssetsInAssetCollection:(id)a0 withFetcherOptions:(unsigned long long)a1 filterPredicate:(id)a2 inclusionPredicate:(id)a3 fetchLimit:(unsigned long long)a4 sortDescriptors:(id)a5 reverseSortOrder:(char)a6 fetchPropertySets:(id)a7 hideHiddenAssets:(char)a8 includeAllBurstAssets:(char)a9;
- (id)_fetchOptionsForContainer:(id)a0 curationKind:(long long)a1 options:(unsigned long long)a2 sortDescriptors:(id)a3 reverseSortOrder:(char)a4 filterPredicate:(id)a5 fetchPropertySets:(id)a6 libraryFilter:(long long)a7;
- (id)_fetchOptionsForCuratedAssetsInAssetCollection:(id)a0 withFetcherOptions:(unsigned long long)a1 curationKind:(long long)a2 reverseSortOrder:(char)a3 filterPredicate:(id)a4 fetchPropertySets:(id)a5 libraryFilter:(long long)a6;
- (id)_fetchResultForContainer:(id)a0 configuration:(id)a1 factory:(id /* block */)a2;
- (id)_importantFetchNameForCollectionSubtype:(long long)a0;
- (void)clearFetchResultsForAssetCollection:(id)a0;
- (void)clearFetchResultsForAssetCollections:(id)a0;
- (id)existingAssetsFetchResultForContainer:(id)a0 configuration:(id)a1;
- (id)fetchAssetsInContainer:(id)a0 configuration:(id)a1;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
