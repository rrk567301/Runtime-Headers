@class NSMutableArray;

@interface NSPriorityQueue : NSObject {
    NSMutableArray *_objects;
    id /* block */ _comparator;
}

- (unsigned long long)count;
- (id)debugDescription;
- (id)peek;
- (BOOL)isEmpty;
- (void)addObjectsFromArray:(id)a0;
- (id)pop;
- (id)description;
- (unsigned long long)size;
- (BOOL)containsObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)allObjects;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)push:(id)a0;
- (void)removeObject:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)filterUsingPredicate:(id)a0;
- (id)initWithComparator:(id /* block */)a0 andCapacity:(unsigned long long)a1;
- (long long)_compareNode:(id)a0 toNode:(id)a1;
- (unsigned long long)findIndexOfObject:(id)a0;
- (unsigned long long)findIndexOfObject:(id)a0 fromIndex:(unsigned long long)a1;
- (void)heapifyDownFromIndex:(long long)a0;
- (void)heapifyUpFromIndex:(unsigned long long)a0;
- (BOOL)isEqualToPriorityQueue:(id)a0;
- (void)replaceTopObjectWithObject:(id)a0;
- (void)setObjectsFromArray:(id)a0;
- (void)setObjectsFromObject:(id)a0 andArgs:(char *)a1;

@end
