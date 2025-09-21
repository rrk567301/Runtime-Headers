@class NSMutableDictionary, NSMutableSet, MSVLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    MSVLRUDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
    NSMutableDictionary *_bagChangeNotificationReceivedForRequestContext;
}

@property (class, readonly, nonatomic) ICURLBagProvider *sharedBagProvider;

@property (nonatomic) BOOL useAMSBag;
@property (nonatomic) BOOL useRawPayload;

- (id)_cacheDirectoryPath;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)a0 forProfileName:(id)a1;
- (id)_amsProcessInfoFromRequestContext:(id)a0;
- (void)_handleAMSBagChangedNotification:(id)a0;
- (void)dealloc;
- (void)_loadCache;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_cleanBagCacheExcludingPaths:(id)a0;
- (void)_loadMonoCache;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_getCacheKeyForRequestContext:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (id)_loadPlistAtPath:(id)a0;
- (id)init;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_persistBagToDisk:(id)a0 withKey:(id)a1;
- (void)getBagAndURLMetricsForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getBagForRequestContext:(id)a0 qualityOfService:(long long)a1 forceRefetch:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (id)_legacyCacheFilePath;
- (void)_invalidateCacheEntriesWithProfileName:(id)a0 profileVersion:(id)a1;
- (id)_knownMissingBagValuesDictionary;
- (void)invalidateCache;
- (void)_handleAMSBagInvalidatedNotification:(id)a0;
- (void).cxx_destruct;

@end
