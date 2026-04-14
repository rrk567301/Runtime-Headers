@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)indexOfObject:(id)a0;
- (id)retain;
- (id)init;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (oneway void)release;

@end
