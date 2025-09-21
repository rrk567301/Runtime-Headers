@class NSKeyValueNonmutatingOrderedSetMethodSet;

@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
    NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;
}

- (unsigned long long)indexOfObject:(id)a0;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)objectsAtIndexes:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
