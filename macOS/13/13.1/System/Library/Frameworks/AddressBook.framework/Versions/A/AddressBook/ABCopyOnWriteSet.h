@class NSSet;

@interface ABCopyOnWriteSet : NSObject {
    NSSet *_set;
}

- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)minusSet:(id)a0;
- (id)allObjects;
- (id)member:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)allObjectsAsSet;
- (void)each:(id /* block */)a0;
- (id)filteredSet:(id /* block */)a0;
- (id)setByIntersectingSet:(id)a0;
- (void)updateWithWritableSet:(id /* block */)a0;
- (id)retainedSetForReading;
- (void)useReadOnlySet:(id /* block */)a0;

@end
