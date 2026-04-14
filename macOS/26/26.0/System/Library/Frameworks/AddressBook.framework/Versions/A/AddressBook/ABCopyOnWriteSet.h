@class NSSet;

@interface ABCopyOnWriteSet : NSObject {
    NSSet *_set;
}

- (void)removeObject:(id)a0;
- (unsigned long long)count;
- (void)minusSet:(id)a0;
- (id)member:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)allObjects;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)useReadOnlySet:(id /* block */)a0;
- (id)allObjectsAsSet;
- (void)each:(id /* block */)a0;
- (id)filteredSet:(id /* block */)a0;
- (id)retainedSetForReading;
- (id)setByIntersectingSet:(id)a0;
- (void)updateWithWritableSet:(id /* block */)a0;

@end
