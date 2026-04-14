@class NSSet;

@interface ABCopyOnWriteSet : NSObject {
    NSSet *_set;
}

- (id)init;
- (BOOL)containsObject:(id)a0;
- (id)member:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)allObjects;
- (unsigned long long)count;
- (void)minusSet:(id)a0;
- (void)removeObject:(id)a0;
- (void)useReadOnlySet:(id /* block */)a0;
- (id)allObjectsAsSet;
- (void)each:(id /* block */)a0;
- (id)filteredSet:(id /* block */)a0;
- (id)retainedSetForReading;
- (id)setByIntersectingSet:(id)a0;
- (void)updateWithWritableSet:(id /* block */)a0;

@end
