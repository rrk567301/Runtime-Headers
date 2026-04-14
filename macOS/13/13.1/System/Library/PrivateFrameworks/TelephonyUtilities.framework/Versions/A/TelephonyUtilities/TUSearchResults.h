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

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addSearchResults:(id)a0;
- (void)removeDuplicateResults;
- (id)initWithSearchTerm:(id)a0 shouldAddAdhocResults:(BOOL)a1;
- (id)resultGroupForSection:(long long)a0;
- (void)_clearCaches;
- (void)finalizeSearchResults;
- (void)addAdhocResultGroup;
- (void)addResultGroup:(id)a0;
- (void)removeSearchItem:(id)a0;
- (long long)numberOfTableViewRows;

@end
