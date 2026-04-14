@interface OITSUAtomicLRUCache : OITSULRUCache

- (void)removeAllObjects;
- (id)allValues;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
