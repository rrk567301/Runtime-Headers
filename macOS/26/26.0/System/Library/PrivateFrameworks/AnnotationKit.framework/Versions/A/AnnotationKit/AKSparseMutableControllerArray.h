@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {
    NSMutableArray *_backendArray;
}

- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (void)removeLastObject;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)_backFillUntilCount:(unsigned long long)a0;
- (BOOL)containsAnyObjects:(id)a0;

@end
