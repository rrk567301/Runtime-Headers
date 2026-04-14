@class NSKeyValueNonmutatingSetMethodSet;

@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet {
    NSKeyValueNonmutatingSetMethodSet *_nonmutatingMethods;
}

- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (id)member:(id)a0;
- (id)objectEnumerator;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;

@end
