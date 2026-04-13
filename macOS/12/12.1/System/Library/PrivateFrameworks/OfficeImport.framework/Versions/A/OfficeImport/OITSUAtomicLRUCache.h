@interface OITSUAtomicLRUCache : OITSULRUCache

- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (id)allValues;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;
- (void)clearEvictionCallbackTarget;

@end
