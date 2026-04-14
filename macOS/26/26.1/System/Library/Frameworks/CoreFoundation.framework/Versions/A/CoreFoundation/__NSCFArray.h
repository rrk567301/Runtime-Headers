@interface __NSCFArray : NSMutableArray

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (Class)classForCoder;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_tryRetain;
- (id)description;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeLastObject;

@end
