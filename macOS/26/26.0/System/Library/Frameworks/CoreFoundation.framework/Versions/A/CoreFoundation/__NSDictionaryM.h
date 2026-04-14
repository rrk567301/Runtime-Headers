@class state;

@interface __NSDictionaryM : NSMutableDictionary {
    struct { state **buffer; union { struct { unsigned long long mutations; } ; struct { unsigned int muts; unsigned int other; } ; struct { unsigned int mutbits : 31; unsigned char copyKeys : 1; unsigned int used : 25; unsigned char kvo : 1; unsigned char szidx : 6; } ; } x0; } storage;
    _Atomic struct __cow_state_t *cow;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)_mutate;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (void)setObservationInfo:(void *)a0;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copy;
- (id)_cfMutableCopy;
- (void)__setObject:(id)a0 forKey:(id)a1;
- (void)removeEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)removeObjectForKey:(id)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (double)_clumpingFactor;
- (void)setObject:(id)a0 forKey:(id)a1;
- (double)_clumpingInterestingThreshold;

@end
