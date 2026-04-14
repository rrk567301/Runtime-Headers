@class NSSet;

@interface ABCopyOnWriteSet : NSObject {
    NSSet *_set;
}

- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)allObjects;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)minusSet:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)updateWithWritableSet:(id /* block */)a0;
- (void)useReadOnlySet:(id /* block */)a0;
- (id)retainedSetForReading;
- (id)allObjectsAsSet;
- (void)each:(id /* block */)a0;
- (id)filteredSet:(id /* block */)a0;
- (id)setByIntersectingSet:(id)a0;

@end
