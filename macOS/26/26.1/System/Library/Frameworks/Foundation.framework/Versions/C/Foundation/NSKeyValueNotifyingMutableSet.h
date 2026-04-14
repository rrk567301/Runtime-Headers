@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
    NSMutableSet *_mutableSet;
}

+ (id)_proxyShare;

- (id)member:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)_proxyNonGCFinalize;
- (void)removeAllObjects;
- (void)minusSet:(id)a0;
- (void)unionSet:(id)a0;
- (void)setSet:(id)a0;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)intersectSet:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;

@end
