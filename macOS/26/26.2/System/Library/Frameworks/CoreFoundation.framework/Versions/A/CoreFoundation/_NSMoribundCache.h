@interface _NSMoribundCache : NSCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (void)setName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)retainCount;
- (void)removeObjectForKey:(id)a0;
- (id)autorelease;
- (id)copy;
- (id)name;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
