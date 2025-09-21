@interface OITSUAtomicLRUCache : OITSULRUCache

- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allValues;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
