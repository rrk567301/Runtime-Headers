@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fetchResult;
- (BOOL)isCurated;
- (BOOL)reverseSortOrder;
- (id)keyAssetsFetchResult;
- (id)inclusionPredicate;
- (long long)keyAssetIndex;
- (id)exposedFetchResult;
- (id)filteredFetchResult;
- (id)excludedOids;
- (id)includedOids;
- (id)curatedOids;
- (id)curatedFetchResult;
- (BOOL)wantsCuration;
- (BOOL)ensureKeyAssetAtBeginning;
- (id /* block */)curatedRefetchCondition;

@end
