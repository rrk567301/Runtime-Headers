@class NSSet, NSMutableArray;

@interface NSConcreteSetChanges : NSSetChanges {
    NSSet *_backing;
    NSMutableArray *_changes;
    BOOL _backingIsMutable;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addObjectsFromArray:(id)a0;
- (void)intersectSet:(id)a0;
- (void)minusSet:(id)a0;
- (void)removeAllObjects;
- (void)setSet:(id)a0;
- (void)unionSet:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)member:(id)a0;
- (unsigned long long)changeCount;
- (id)initWithSet:(id)a0;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;
- (void)enumerateChanges:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)addChange:(id)a0;
- (void)_willChange;
- (void)filterObjectsWithTest:(id /* block */)a0;
- (void)transformObjectsWithBlock:(id /* block */)a0;
- (void)_fault;

@end
