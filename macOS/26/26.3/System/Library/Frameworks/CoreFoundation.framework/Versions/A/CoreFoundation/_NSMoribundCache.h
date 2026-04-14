@interface _NSMoribundCache : NSCache

- (id)copy;
- (unsigned long long)retainCount;
- (id)autorelease;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)objectForKey:(id)a0;
- (id)retain;
- (id)name;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (oneway void)release;
- (void)setName:(id)a0;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
