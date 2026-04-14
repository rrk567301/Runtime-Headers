@interface __NSPlaceholderSet : NSMutableSet

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeObject:(id)a0;
- (unsigned long long)retainCount;
- (id)member:(id)a0;
- (void)addObject:(id)a0;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (oneway void)release;
- (id)init;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;

@end
