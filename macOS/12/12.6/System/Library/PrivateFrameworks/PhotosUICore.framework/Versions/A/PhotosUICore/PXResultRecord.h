@class PHFetchResult;

@interface PXResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)fetchResult;
- (BOOL)reverseSortOrder;
- (BOOL)isCurated;
- (id)keyAssetsFetchResult;
- (id)exposedFetchResult;
- (BOOL)wantsCuration;
- (id)inclusionPredicate;
- (long long)keyAssetIndex;
- (id)curatedOids;
- (id)includedOids;
- (id)excludedOids;
- (id)curatedFetchResult;
- (id /* block */)curatedRefetchCondition;
- (id)filteredFetchResult;
- (BOOL)ensureKeyAssetAtBeginning;

@end
