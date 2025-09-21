@class NSMutableArray;

@interface AXFMutableSortedArray : NSArray

@property (readonly, nonatomic) NSMutableArray *_array;
@property (readonly, nonatomic) id /* block */ comparator;
@property (readonly, nonatomic) unsigned long long options;

- (unsigned long long)indexOfObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)removeObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)initWithComparator:(id /* block */)a0;
- (void)removeAllObjects;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0 comparator:(id /* block */)a1;
- (id)initWithArray:(id)a0 options:(unsigned long long)a1 comparator:(id /* block */)a2;
- (id)initWithOptions:(unsigned long long)a0 comparator:(id /* block */)a1;

@end
