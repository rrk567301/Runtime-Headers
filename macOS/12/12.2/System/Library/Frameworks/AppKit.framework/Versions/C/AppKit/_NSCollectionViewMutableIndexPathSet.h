@interface _NSCollectionViewMutableIndexPathSet : NSMutableSet {
    id _privateData;
    unsigned long long _mutationCounter;
}

+ (BOOL)supportsSecureCoding;
+ (id)setWithCollectionViewIndexPaths:(id)a0;
+ (id)setWithCollectionViewIndexPath:(id)a0;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSet:(id)a0;
- (void)enumerateIndexPathsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)indexPathLessThan:(id)a0;
- (id)indexPathGreaterThan:(id)a0;
- (void)addItemIndexes:(id)a0 inSection:(unsigned long long)a1;
- (void)enumerateIndexSetsBySectionWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)itemIndexesInSection:(unsigned long long)a0;
- (BOOL)containsIndexPath:(id)a0;
- (id)_itemIndexSetsBySectionCreatingIfNecessary;
- (BOOL)containsItemIndex:(unsigned long long)a0 inSection:(unsigned long long)a1;
- (id)sectionIndexes;
- (void)enumerateIndexRangesBySectionWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allIndexPaths;
- (BOOL)containsItemIndexes:(id)a0 inSection:(unsigned long long)a1;

@end
