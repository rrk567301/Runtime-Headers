@class TSPAbstractMutableLargeArraySegment;

@interface TSPLargeArraySegmentWrapper : NSMutableArray {
    TSPAbstractMutableLargeArraySegment *_backingStore;
}

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeObjectsAtIndexes:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (id)initWithLargeArraySegment:(id)a0;

@end
