@class NSString, NSArray, TUSearchController, NSMutableArray;

@interface TUSearchResults : NSObject <NSCopying>

@property (retain, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSMutableArray *resultGroups;
@property (retain, nonatomic) NSMutableArray *allSearchItemsCache;
@property (retain, nonatomic) NSMutableArray *allDataItemsCache;
@property (readonly) NSArray *allSearchItems;
@property (readonly) NSArray *allDataItems;
@property (readonly) long long numberOfSections;
@property (readonly) long long numberOfResults;
@property (weak) TUSearchController *searchController;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addSearchResults:(id)a0;
- (void)removeDuplicateResults;
- (void)addResultGroup:(id)a0;
- (void)_clearCaches;
- (void)addAdhocResultGroup;
- (void)finalizeSearchResults;
- (id)initWithSearchTerm:(id)a0 shouldAddAdhocResults:(char)a1;
- (long long)numberOfTableViewRows;
- (void)removeSearchItem:(id)a0;
- (id)resultGroupForSection:(long long)a0;

@end
