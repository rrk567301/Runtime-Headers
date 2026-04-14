@class NSKeyValueGetter;

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter *_valueGetter;
}

- (unsigned long long)count;
- (id)objectEnumerator;
- (id)member:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)_proxyNonGCFinalize;
- (id)_nonNilSetValueWithSelector:(SEL)a0;

@end
