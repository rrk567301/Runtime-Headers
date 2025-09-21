@class NSMutableArray;

@interface NSPriorityQueue : NSObject {
    NSMutableArray *_objects;
    id /* block */ _comparator;
}

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (char)containsObject:(id)a0;
- (char)isEmpty;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)allObjects;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (unsigned long long)size;
- (void)filterUsingPredicate:(id)a0;
- (id)peek;
- (void)push:(id)a0;
- (id)initWithComparator:(id /* block */)a0 andCapacity:(unsigned long long)a1;
- (id)pop;
- (long long)_compareNode:(id)a0 toNode:(id)a1;
- (unsigned long long)findIndexOfObject:(id)a0;
- (unsigned long long)findIndexOfObject:(id)a0 fromIndex:(unsigned long long)a1;
- (void)heapifyDownFromIndex:(long long)a0;
- (void)heapifyUpFromIndex:(unsigned long long)a0;
- (char)isEqualToPriorityQueue:(id)a0;
- (void)replaceTopObjectWithObject:(id)a0;
- (void)setObjectsFromArray:(id)a0;
- (void)setObjectsFromObject:(id)a0 andArgs:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;

@end
