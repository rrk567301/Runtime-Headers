@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;

@end
