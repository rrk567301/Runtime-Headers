@class NSKeyValueGetter;

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet {
    NSKeyValueGetter *_valueGetter;
}

- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)member:(id)a0;
- (id)objectEnumerator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)_nonNilSetValueWithSelector:(SEL)a0;

@end
