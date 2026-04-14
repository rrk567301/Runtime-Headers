@class NSKeyValueMutatingSetMethodSet;

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet {
    NSKeyValueMutatingSetMethodSet *_mutatingMethods;
}

- (void)_proxyNonGCFinalize;
- (void)addObjectsFromArray:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)addObject:(id)a0;
- (void)setSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)unionSet:(id)a0;
- (void)removeObject:(id)a0;

@end
