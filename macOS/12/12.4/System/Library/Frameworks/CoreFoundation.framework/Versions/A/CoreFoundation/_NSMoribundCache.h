@interface _NSMoribundCache : NSCache

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)name;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)setName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (unsigned long long)totalCostLimit;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)a0;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;

@end
