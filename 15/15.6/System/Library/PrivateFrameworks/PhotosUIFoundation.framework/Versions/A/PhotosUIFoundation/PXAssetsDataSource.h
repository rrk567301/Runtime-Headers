@class NSPredicate;
@protocol PXDisplayAsset, PXDisplayAssetCollection, PXDisplayCollection;

@interface PXAssetsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) id container;
@property (readonly, nonatomic) id<PXDisplayCollection> containerCollection;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> firstAssetCollection;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> lastAssetCollection;
@property (readonly, nonatomic) unsigned long long estimatedPhotosCount;
@property (readonly, nonatomic) unsigned long long estimatedVideosCount;
@property (readonly, nonatomic) unsigned long long estimatedOtherCount;
@property (readonly, nonatomic) long long startingSection;
@property (readonly, nonatomic) char startsAtEnd;
@property (readonly, nonatomic) char isFiltered;
@property (readonly, nonatomic) NSPredicate *filterPredicate;
@property (readonly, nonatomic) char includeOthersInSocialGroupAssets;
@property (readonly, nonatomic) char ignoreSharedLibraryFilters;
@property (readonly, nonatomic) long long libraryFilter;
@property (readonly, nonatomic) char isSorted;
@property (readonly, nonatomic) id<PXDisplayAsset> keyAsset;
@property (readonly, nonatomic) char areAllSectionsConsideredAccurate;

- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForAssetReference:(id)a0;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionReferenceAtSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)assetCollectionReferenceForAssetCollectionReference:(id)a0;
- (id)assetCollectionReferenceNearestToObjectReference:(id)a0;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)a0 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)a1;
- (id)assetReferenceForAssetReference:(id)a0;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)curatedAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)a0;
- (char)getAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 guestAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1 allowFetch:(char)a2;
- (char)hasCurationForAssetCollection:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForAssetCollectionReference:(id)a0;
- (char)isFilteringAssetCollection:(id)a0;
- (char)isFilteringDisabledForAssetCollection:(id)a0;
- (char)isSectionConsideredAccurate:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)keyAssetsForAssetCollection:(id)a0;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfCuratedItemsInAssetCollection:(id)a0;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)a0;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)a0;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectIDAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectReferenceNearestToObjectReference:(id)a0 inSection:(long long)a1;
- (void)prefetchIndexPaths:(id)a0 level:(unsigned long long)a1;
- (id)primaryFaceForAssetAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)startingAssetReference;
- (id)uncuratedAssetsInSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (char)isFilteringDisabledForSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (char)isFilteringSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSection;

@end
