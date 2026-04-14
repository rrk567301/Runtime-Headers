@class next;

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {
    struct __cfobservers_t { next *slot; struct __cfobservers_t *x0; } values;
    unsigned long long count;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)approximateCount;
- (unsigned char)removeObject:(id)a0;
- (unsigned long long)borrowObjects:(id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (id)debugDescription;
- (unsigned char)addObject:(id)a0;
- (id)init;

@end
