@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)description;
- (id)fetchResult;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)reverseSortOrder;
- (BOOL)isCurated;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id /* block */)curatedRefetchCondition;
- (long long)curationLength;
- (BOOL)ensureKeyAssetAtBeginning;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (long long)keyAssetIndex;
- (id)keyAssetsFetchResult;
- (id)manualOrderUUIDs;
- (BOOL)wantsCuration;

@end
