@interface __NSPlaceholderSet : NSMutableSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)init;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)member:(id)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;

@end
