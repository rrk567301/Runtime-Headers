@class NSMutableArray;

@interface NSPriorityQueue : NSObject {
    NSMutableArray *_objects;
    id /* block */ _comparator;
}

- (void)push:(id)a0;
- (void)removeObject:(id)a0;
- (id)debugDescription;
- (id)peek;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (void)filterUsingPredicate:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)pop;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void)addObjectsFromArray:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)size;
- (void).cxx_destruct;
- (void)replaceObject:(id)a0 withObject:(id)a1;
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
