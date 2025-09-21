@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)fetchResult;
- (char)isCurated;
- (char)reverseSortOrder;
- (id)curatedFetchResult;
- (id)curatedOids;
- (id /* block */)curatedRefetchCondition;
- (long long)curationLength;
- (char)ensureKeyAssetAtBeginning;
- (id)excludedOids;
- (id)exposedFetchResult;
- (id)filteredFetchResult;
- (id)includedOids;
- (id)inclusionPredicate;
- (long long)keyAssetIndex;
- (id)keyAssetsFetchResult;
- (id)manualOrderUUIDs;
- (char)wantsCuration;

@end
