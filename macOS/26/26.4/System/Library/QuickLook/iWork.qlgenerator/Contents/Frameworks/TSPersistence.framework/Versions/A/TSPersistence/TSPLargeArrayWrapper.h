@class TSPAbstractMutableLargeArray;

@interface TSPLargeArrayWrapper : NSMutableArray {
    TSPAbstractMutableLargeArray *_backingStore;
}

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)initWithLargeArray:(id)a0;

@end
