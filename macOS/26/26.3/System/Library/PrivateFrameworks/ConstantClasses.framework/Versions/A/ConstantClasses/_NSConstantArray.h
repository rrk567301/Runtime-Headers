@interface _NSConstantArray : NSArray

+ (id)alloc;

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)retain;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)objectEnumerator;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (oneway void)release;

@end
