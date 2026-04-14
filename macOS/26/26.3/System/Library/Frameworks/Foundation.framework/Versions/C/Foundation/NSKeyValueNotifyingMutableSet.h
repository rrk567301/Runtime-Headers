@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {
    NSMutableSet *_mutableSet;
}

+ (id)_proxyShare;

- (unsigned long long)count;
- (void)_proxyNonGCFinalize;
- (id)member:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)_proxyInitWithContainer:(id)a0 getter:(id)a1;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (void)setSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)unionSet:(id)a0;
- (void)removeObject:(id)a0;

@end
