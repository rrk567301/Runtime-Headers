@interface NSKeyValueIvarMutableArray : NSKeyValueMutableArray {
    struct objc_ivar { } *_ivar;
}

- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_proxyNonGCFinalize;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_nonNilMutableArrayValueWithSelector:(SEL)a0;

@end
