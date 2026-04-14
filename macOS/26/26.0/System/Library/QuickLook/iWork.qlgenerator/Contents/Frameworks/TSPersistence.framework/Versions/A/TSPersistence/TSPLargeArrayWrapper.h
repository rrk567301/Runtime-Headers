@class TSPAbstractMutableLargeArray;

@interface TSPLargeArrayWrapper : NSMutableArray {
    TSPAbstractMutableLargeArray *_backingStore;
}

- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithLargeArray:(id)a0;

@end
