@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore {
    NSMutableDictionary *_kv;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (BOOL)synchronize;
- (void)setData:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)dataForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
