@class NSKeyValueNonmutatingSetMethodSet;

@interface NSKeyValueFastMutableSet1 : NSKeyValueFastMutableSet {
    NSKeyValueNonmutatingSetMethodSet *_nonmutatingMethods;
}

- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (id)member:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (id)objectEnumerator;

@end
