@interface ICAtomicLRUCache : ICLRUCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;

@end
