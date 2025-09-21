@class TSPAbstractMutableLargeArraySegment;

@interface TSPLargeArraySegmentWrapper : NSMutableArray {
    TSPAbstractMutableLargeArraySegment *_backingStore;
}

- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithLargeArraySegment:(id)a0;

@end
