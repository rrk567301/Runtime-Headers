@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)member:(id)a0;
- (id)retain;
- (id)initWithCapacity:(unsigned long long)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)init;

@end
