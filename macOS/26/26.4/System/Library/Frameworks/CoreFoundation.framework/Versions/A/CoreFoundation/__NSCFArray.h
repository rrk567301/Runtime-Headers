@interface __NSCFArray : NSMutableArray

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)removeLastObject;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (BOOL)_isDeallocating;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)hash;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)description;
- (oneway void)release;
- (Class)classForCoder;
- (unsigned long long)retainCount;

@end
