@class NSMutableArray;

@interface __NSFrozenOrderedSetM : NSOrderedSet {
    _Atomic struct __cow_state_t *cow;
    struct { struct __CFBasicHash *set; NSMutableArray *array; } storage;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)indexOfObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countForObject:(id)a0;
- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)copy;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)containsObject:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
