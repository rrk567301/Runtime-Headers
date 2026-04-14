@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {
    NSSet *_backing;
    NSMutableArray *_changes;
    BOOL _backingIsMutable;
}

- (unsigned long long)changeCount;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)member:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (id)init;
- (id)initWithSet:(id)a0;
- (void)addChange:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectEnumerator;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSet:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)unionSet:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_fault;
- (void)_willChange;
- (void)enumerateChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;
- (void)filterObjectsWithTest:(id /* block */)a0;
- (void)transformObjectsWithBlock:(id /* block */)a0;

@end
