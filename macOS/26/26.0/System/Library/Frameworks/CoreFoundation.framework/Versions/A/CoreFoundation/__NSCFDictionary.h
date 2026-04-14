@interface __NSCFDictionary : NSMutableDictionary {
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
    id *_keys;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObservationInfo:(void *)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (unsigned long long)count;
- (id)retain;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)retainCount;
- (void)removeAllObjects;
- (id)description;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (oneway void)release;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
