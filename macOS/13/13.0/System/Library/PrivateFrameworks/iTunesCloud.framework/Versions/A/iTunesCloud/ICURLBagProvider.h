@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
}

@property (class, readonly, nonatomic) ICURLBagProvider *sharedBagProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (id)_cacheFilePath;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)_getCacheKeyForRequestContext:(id)a0;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)_shouldUseLegacyProtocolForRequestContext:(id)a0;
- (void)_loadCache;
- (void)_saveCache;
- (id)_amsProcessInfoFromRequestContext:(id)a0;

@end
