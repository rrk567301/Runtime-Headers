@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore {
    NSMutableDictionary *_kv;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)arrayForKey:(id)a0;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (BOOL)synchronize;
- (id)init;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
