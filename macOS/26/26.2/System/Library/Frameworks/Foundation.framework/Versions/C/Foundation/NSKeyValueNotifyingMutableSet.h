@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
    NSMutableSet *_mutableSet;
}

+ (id)_proxyShare;

- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)setSet:(id)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)_proxyNonGCFinalize;
- (void)addObjectsFromArray:(id)a0;
- (void)intersectSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (void)minusSet:(id)a0;
- (void)unionSet:(id)a0;
- (void)removeAllObjects;

@end
