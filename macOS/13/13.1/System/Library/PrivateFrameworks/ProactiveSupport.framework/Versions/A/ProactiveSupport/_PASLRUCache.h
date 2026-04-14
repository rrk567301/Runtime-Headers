@class _PASLock;

@interface _PASLRUCache : NSObject {
    _PASLock *_lock;
    unsigned long long _countLimit;
}

- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithCountLimit:(unsigned long long)a0;

@end
