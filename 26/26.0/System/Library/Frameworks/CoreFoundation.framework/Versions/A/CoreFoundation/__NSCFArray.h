@interface __NSCFArray : NSMutableArray

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (unsigned long long)count;
- (id)retain;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (unsigned long long)retainCount;
- (id)description;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (oneway void)release;
- (void)removeLastObject;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
