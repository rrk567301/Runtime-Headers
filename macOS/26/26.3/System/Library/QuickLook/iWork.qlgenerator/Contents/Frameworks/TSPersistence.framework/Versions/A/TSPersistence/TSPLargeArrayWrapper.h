@class TSPAbstractMutableLargeArray;

@interface TSPLargeArrayWrapper : NSMutableArray {
    TSPAbstractMutableLargeArray *_backingStore;
}

- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithLargeArray:(id)a0;

@end
