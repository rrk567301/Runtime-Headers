@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NUCacheNodeRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

- (Class)classForCacheNodeType:(id)a0;
- (id)init;
- (void)registerClass:(Class)a0 forCacheNodeType:(id)a1;
- (void).cxx_destruct;

@end
