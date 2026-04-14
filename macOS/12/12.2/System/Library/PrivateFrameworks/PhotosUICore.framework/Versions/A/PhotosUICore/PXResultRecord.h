@class PHFetchResult;

@interface PXResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)fetchResult;
- (BOOL)reverseSortOrder;
- (BOOL)isCurated;
- (id)keyAssetsFetchResult;
- (id)curatedFetchResult;
- (id /* block */)curatedRefetchCondition;
- (id)excludedOids;
- (id)includedOids;
- (id)curatedOids;
- (id)inclusionPredicate;
- (long long)keyAssetIndex;
- (BOOL)wantsCuration;
- (id)filteredFetchResult;
- (id)exposedFetchResult;
- (BOOL)ensureKeyAssetAtBeginning;

@end
