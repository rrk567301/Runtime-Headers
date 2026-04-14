@class NSMutableArray;

@interface NSPriorityQueue : NSObject {
    NSMutableArray *_objects;
    id /* block */ _comparator;
}

- (id)description;
- (id)debugDescription;
- (unsigned long long)size;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)filterUsingPredicate:(id)a0;
- (id)peek;
- (void)push:(id)a0;
- (id)pop;
- (id)initWithComparator:(id /* block */)a0 andCapacity:(unsigned long long)a1;
- (long long)_compareNode:(id)a0 toNode:(id)a1;
- (void)heapifyUpFromIndex:(unsigned long long)a0;
- (void)replaceTopObjectWithObject:(id)a0;
- (unsigned long long)findIndexOfObject:(id)a0;
- (unsigned long long)findIndexOfObject:(id)a0 fromIndex:(unsigned long long)a1;
- (void)setObjectsFromArray:(id)a0;
- (BOOL)isEqualToPriorityQueue:(id)a0;
- (void)setObjectsFromObject:(id)a0 andArgs:(char *)a1;
- (void)heapifyDownFromIndex:(long long)a0;

@end
