@class NSSet;

@interface ABCopyOnWriteSet : NSObject {
    NSSet *_set;
}

- (unsigned long long)count;
- (id)member:(id)a0;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)allObjectsAsSet;
- (void)useReadOnlySet:(id /* block */)a0;
- (void)each:(id /* block */)a0;
- (id)filteredSet:(id /* block */)a0;
- (id)retainedSetForReading;
- (id)setByIntersectingSet:(id)a0;
- (void)updateWithWritableSet:(id /* block */)a0;

@end
