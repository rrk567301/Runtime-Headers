@class NSMutableArray;

@interface AKSparseMutableControllerArray : NSMutableArray {
    NSMutableArray *_backendArray;
}

- (unsigned long long)count;
- (id)objectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)_backFillUntilCount:(unsigned long long)a0;
- (BOOL)containsAnyObjects:(id)a0;

@end
