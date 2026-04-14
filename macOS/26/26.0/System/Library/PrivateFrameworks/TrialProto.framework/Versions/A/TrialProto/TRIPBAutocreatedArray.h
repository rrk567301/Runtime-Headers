@class TRIPBMessage, NSMutableArray;

@interface TRIPBAutocreatedArray : NSMutableArray {
    TRIPBMessage *_autocreator;
    NSMutableArray *_array;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;

@end
