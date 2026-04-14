@class NSString, NSArray, NSIndexSet, NSMutableArray;

@interface TabSearchGroupItem : TabSearchItem {
    NSMutableArray *_children;
    NSMutableArray *_filteredChildren;
}

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSIndexSet *filteredChildIndexes;

- (id)init;
- (void).cxx_destruct;
- (id)childItemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfChildren;
- (unsigned long long)indexOfChildItem:(id)a0;
- (void)removeAllChildItems;
- (void)removeChildItemAtIndex:(unsigned long long)a0;
- (void)addChildItem:(id)a0;
- (void)insertChildItem:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_shouldFilterItems;
- (void)filterChildrenWithIndexes:(id)a0;
- (void)removeFilter;
- (unsigned long long)numberOfFilteredChildren;
- (id)filteredChildItemAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfFilteredChildItem:(id)a0;
- (void)removeFilteredChildItemAtIndex:(unsigned long long)a0;
- (void)enumerateFilteredChildrenUsingBlock:(id /* block */)a0;

@end
