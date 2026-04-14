@interface __NSPlaceholderSet : NSMutableSet

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;

- (unsigned long long)count;
- (unsigned long long)retainCount;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)member:(id)a0;
- (id)retain;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (id)objectEnumerator;
- (void)dealloc;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (void)removeObject:(id)a0;
- (oneway void)release;

@end
