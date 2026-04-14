@interface OITSUAtomicLRUCache : OITSULRUCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allValues;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
