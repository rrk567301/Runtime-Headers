@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)indexOfObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (unsigned long long)count;
- (id)retain;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)retainCount;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (oneway void)release;
- (id)objectAtIndex:(unsigned long long)a0;

@end
