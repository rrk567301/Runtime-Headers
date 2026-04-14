@interface _NSMoribundCache : NSCache

- (id)name;
- (id)autorelease;
- (id)objectForKey:(id)a0;
- (id)delegate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setName:(id)a0;
- (id)copy;
- (id)retain;
- (void)setDelegate:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
