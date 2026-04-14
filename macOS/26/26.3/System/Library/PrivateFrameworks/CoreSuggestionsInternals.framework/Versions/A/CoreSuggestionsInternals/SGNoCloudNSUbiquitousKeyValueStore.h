@class NSMutableDictionary;

@interface SGNoCloudNSUbiquitousKeyValueStore : NSUbiquitousKeyValueStore {
    NSMutableDictionary *_kv;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)setData:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (BOOL)synchronize;

@end
