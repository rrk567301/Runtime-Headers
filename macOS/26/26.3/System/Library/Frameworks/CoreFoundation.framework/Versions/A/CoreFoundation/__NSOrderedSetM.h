@class NSMutableArray;

@interface __NSOrderedSetM : NSMutableOrderedSet {
    _Atomic struct __cow_state_t *cow;
    struct { struct __CFBasicHash *set; NSMutableArray *array; } storage;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)copy;
- (id)mutableCopy;
- (unsigned long long)countForObject:(id)a0;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (void)_mutate;

@end
