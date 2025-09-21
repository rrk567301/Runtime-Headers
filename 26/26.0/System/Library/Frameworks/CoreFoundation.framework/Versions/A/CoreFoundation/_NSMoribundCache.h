@interface _NSMoribundCache : NSCache

- (id)autorelease;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)copy;
- (id)retain;
- (void)removeObjectForKey:(id)a0;
- (unsigned long long)retainCount;
- (void)removeAllObjects;
- (id)name;
- (void)setObject:(id)a0 forKey:(id)a1;
- (oneway void)release;
- (id)delegate;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
