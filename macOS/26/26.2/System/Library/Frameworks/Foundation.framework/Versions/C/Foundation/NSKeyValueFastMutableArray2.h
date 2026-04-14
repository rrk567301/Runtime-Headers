@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {
    NSKeyValueGetter *_valueGetter;
}

- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectsAtIndexes:(id)a0;
- (void)_proxyNonGCFinalize;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_nonNilArrayValueWithSelector:(SEL)a0;

@end
