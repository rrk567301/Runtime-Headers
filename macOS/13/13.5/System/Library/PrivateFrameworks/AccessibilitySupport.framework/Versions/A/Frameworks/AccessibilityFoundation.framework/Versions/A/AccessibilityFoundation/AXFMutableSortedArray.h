@interface AXFMutableSortedArray : AXFSortedArray

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
