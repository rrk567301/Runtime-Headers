@interface __NSCFSet : NSMutableSet {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)getObjects:(id *)a0;
- (id)member:(id)a0;
- (BOOL)_tryRetain;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (BOOL)isEqual:(id)a0;
- (void)removeAllObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)hash;
- (unsigned long long)count;
- (void)removeObject:(id)a0;
- (id)description;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)retainCount;
- (unsigned long long)_trueCount;

@end
