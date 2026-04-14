@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PHConcurrentMapTable : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}

+ (id)mapTable;

- (void)removeAllObjects;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)_dispatchIsolatedRead:(id /* block */)a0;
- (void)_dispatchIsolatedWriteAsync:(id /* block */)a0;
- (void)_dispatchIsolatedWriteSync:(id /* block */)a0;
- (BOOL)tryRemoveObjectForKey:(id)a0;

@end
