@interface OITSUAtomicLRUCache : OITSULRUCache

- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
