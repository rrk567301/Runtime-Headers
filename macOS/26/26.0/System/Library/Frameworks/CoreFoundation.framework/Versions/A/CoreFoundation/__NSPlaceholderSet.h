@interface __NSPlaceholderSet : NSMutableSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)removeObject:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)retain;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)member:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)retainCount;
- (id)objectEnumerator;
- (oneway void)release;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;

@end
