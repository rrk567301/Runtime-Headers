@class NSArray, NSString, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PSIGroupResultDelegate;

@interface PSIGroupResult : NSObject <NSCopying> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_owningContentString;
    NSMutableArray *_assetUUIDs;
    NSMutableArray *_collectionResults;
    char _didFetchOwningContentString;
    NSMutableSet *_sceneGroupsIds;
}

@property (copy, nonatomic) NSArray *groups;
@property (retain, nonatomic) struct __CFArray { } *assetIds;
@property (retain, nonatomic) struct __CFArray { } *collectionIds;
@property (nonatomic) float score;
@property (nonatomic) short dedupingSkippedCategory;
@property (readonly) NSMutableSet *sceneGroupsIds;
@property (weak, nonatomic) id<PSIGroupResultDelegate> delegate;
@property (nonatomic) char isMergedOCRResult;
@property (nonatomic) char selectedForOCRCompletion;
@property (readonly, nonatomic) NSArray *groupsSearchTokens;
@property (readonly, nonatomic) NSArray *contentStrings;
@property (readonly, nonatomic) NSArray *lookupIdentifiers;
@property (readonly, nonatomic) NSArray *groupsMatchRanges;
@property (copy, nonatomic) NSString *transientToken;
@property (copy, nonatomic) NSArray *contentStringsOverride;
@property (readonly, nonatomic) char isDateFilterPartiallyFromFullSearchText;
@property (readonly, nonatomic) char hasDateFilterFromImplicitToken;
@property (readonly, nonatomic) unsigned long long matchCount;
@property (readonly, nonatomic) unsigned long long assetMatchCount;
@property (readonly, nonatomic) unsigned long long collectionMatchCount;
@property (readonly, nonatomic) char containsFilterSearchTokens;
@property (readonly, weak) NSString *owningContentString;
@property (readonly, weak) NSArray *assetUUIDs;
@property (readonly, weak) NSArray *collectionResults;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (unsigned long long)groupCount;
- (long long)categoryAtIndex:(long long)a0;
- (unsigned long long)_calculateOCRGroupsCount;
- (id)_prepareForFetchWithAssetCountLimit:(unsigned long long)a0 collectionCountLimit:(unsigned long long)a1 outAssetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 outCollectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 outFetchOwningContentString:(char *)a4;
- (id)contentStringAtIndex:(long long)a0;
- (id)dateFilterGroupSnapshot;
- (char)exclusivelyContainsOCRGroups;
- (void)fetchNextAssetUUIDs:(char)a0 collectionResults:(char)a1 assetCountLimit:(unsigned long long)a2 collectionCountLimit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)fetchNextAssetUUIDs:(char)a0 collectionResults:(char)a1 count:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchNextAssetUUIDs:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)firstSearchTextGroupSnapshot;
- (id)fullSearchTextGroupSnapshot;
- (id)groupRangesAtIndex:(long long)a0;
- (char)isContentStringTextSearchableAtIndex:(long long)a0;
- (char)isMatchedByIdentifierAtIndex:(long long)a0;
- (id)lookupIdentifiersForSearchIndexCategories:(id)a0;
- (id)matchRangesAtIndex:(long long)a0;
- (id)normalizedStringAtIndex:(long long)a0;
- (id)normalizedUnitTestDescription;
- (void)resolveObjectsWithAssetCache:(id)a0 collectionCache:(id)a1;
- (id)tokensAtIndex:(long long)a0;
- (id)unitTestDescription;

@end
