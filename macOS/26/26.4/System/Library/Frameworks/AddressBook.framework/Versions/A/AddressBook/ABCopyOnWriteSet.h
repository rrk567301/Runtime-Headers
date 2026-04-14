@class NSSet;

@interface ABCopyOnWriteSet : NSObject {
    NSSet *_set;
}

- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)minusSet:(id)a0;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (void)useReadOnlySet:(id /* block */)a0;
- (id)allObjectsAsSet;
- (void)each:(id /* block */)a0;
- (id)filteredSet:(id /* block */)a0;
- (id)retainedSetForReading;
- (id)setByIntersectingSet:(id)a0;
- (void)updateWithWritableSet:(id /* block */)a0;

@end
