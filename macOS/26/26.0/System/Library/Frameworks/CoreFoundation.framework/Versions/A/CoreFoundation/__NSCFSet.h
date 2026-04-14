@interface __NSCFSet : NSMutableSet {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (void)removeObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (void)getObjects:(id *)a0;
- (unsigned long long)count;
- (id)retain;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (unsigned long long)retainCount;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)description;
- (oneway void)release;
- (unsigned long long)hash;
- (unsigned long long)_trueCount;
- (BOOL)isEqual:(id)a0;

@end
