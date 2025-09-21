@class NSKeyValueSetter, NSKeyValueGetter;

@interface NSKeyValueSlowMutableArray : NSKeyValueMutableArray {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    char _treatNilValuesLikeEmptyArrays;
    char _padding[3];
}

- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)replaceObjectsAtIndexes:(id)a0 withObjects:(id)a1;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)_createNonNilMutableArrayValueWithSelector:(SEL)a0;
- (id)_nonNilArrayValueWithSelector:(SEL)a0;
- (void)_proxyNonGCFinalize;
- (void)_raiseNilValueExceptionWithSelector:(SEL)a0;

@end
