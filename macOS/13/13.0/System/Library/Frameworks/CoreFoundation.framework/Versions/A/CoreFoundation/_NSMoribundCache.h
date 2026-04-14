@interface _NSMoribundCache : NSCache

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)name;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
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
