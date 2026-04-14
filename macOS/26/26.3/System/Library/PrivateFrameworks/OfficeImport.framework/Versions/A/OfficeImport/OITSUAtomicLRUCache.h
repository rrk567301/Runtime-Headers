@interface OITSUAtomicLRUCache : OITSULRUCache

- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)allValues;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)clearEvictionCallbackTarget;
- (void)setEvictionCallbackTarget:(id)a0 selector:(SEL)a1;

@end
