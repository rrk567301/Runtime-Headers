@class NSSet, PHFetchResult, NSPredicate, NSArray;

@interface PXPhotosMutableResultRecord : PXPhotosResultRecord {
    PHFetchResult *_filteredFetchResult;
    NSPredicate *_inclusionPredicate;
    char _filteredFetchResultIsValid;
    char _inclusionPredicateIsValid;
}

@property (readonly, nonatomic) NSSet *excludedOids;
@property (readonly, nonatomic) NSSet *includedOids;
@property (readonly, nonatomic) NSSet *curatedOids;
@property (readonly, nonatomic) NSPredicate *inclusionPredicate;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) char reverseSortOrder;
@property (retain, nonatomic) PHFetchResult *curatedFetchResult;
@property (retain, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic) long long keyAssetIndex;
@property (nonatomic) char wantsCuration;
@property (nonatomic) long long curationLength;
@property (readonly, nonatomic) char isCurated;
@property (readonly, nonatomic) PHFetchResult *filteredFetchResult;
@property (readonly, nonatomic) PHFetchResult *exposedFetchResult;
@property (nonatomic) char preloadAssetTypeCounts;
@property (nonatomic) char ensureKeyAssetAtBeginning;
@property (copy, nonatomic) id /* block */ curatedRefetchCondition;
@property (copy, nonatomic) NSArray *sortDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setReverseSortOrder:(char)a0;
- (void)setFetchResult:(id)a0;
- (void)invalidateFetchResultAssetCache;
- (void)_invalidateFilteredFetchResult;
- (void)_invalidateInclusionPredicate;
- (void)_invalidateKeyAssetIndex;
- (void)_setIncludeOids:(id)a0;
- (void)_updateFilteredFetchResultIfNeeded;
- (void)adoptPreparedFilteredFetchResultFromRecord:(id)a0;
- (void)excludeOids:(id)a0;
- (id)exposedFetchResultBeforeFiltering;
- (void)includeOids:(id)a0;
- (void)setFetchResult:(id)a0 reverseSortOrder:(char)a1;
- (void)stopExcludingOids:(id)a0;
- (void)stopIncludingAllOids;

@end
