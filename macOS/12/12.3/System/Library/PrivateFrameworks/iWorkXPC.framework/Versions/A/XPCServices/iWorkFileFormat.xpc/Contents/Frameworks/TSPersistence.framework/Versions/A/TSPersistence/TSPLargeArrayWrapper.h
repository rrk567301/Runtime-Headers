@class TSPAbstractMutableLargeArray;

@interface TSPLargeArrayWrapper : NSMutableArray {
    TSPAbstractMutableLargeArray *_backingStore;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (void).cxx_destruct;
- (id)initWithLargeArray:(id)a0;

@end
