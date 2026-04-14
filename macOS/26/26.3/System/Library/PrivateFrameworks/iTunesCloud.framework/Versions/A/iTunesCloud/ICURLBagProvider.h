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

- (void)getBagAndURLMetricsForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleAMSBagChangedNotification:(id)a0;
- (id)_amsProcessInfoFromRequestContext:(id)a0;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)a0 forProfileName:(id)a1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_invalidateCacheEntriesWithProfileName:(id)a0 profileVersion:(id)a1;
- (id)init;
- (void)invalidateCache;
- (void)getBagForRequestContext:(id)a0 qualityOfService:(long long)a1 forceRefetch:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_getCacheKeyForRequestContext:(id)a0;
- (void)_handleAMSBagInvalidatedNotification:(id)a0;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_persistBagToDisk:(id)a0 withKey:(id)a1;
- (void)_loadCache;
- (void)dealloc;
- (void)_cleanBagCacheExcludingPaths:(id)a0;
- (id)_legacyCacheFilePath;
- (id)_loadPlistAtPath:(id)a0;
- (id)_knownMissingBagValuesDictionary;
- (id)_cacheDirectoryPath;
- (void)_loadMonoCache;

@end
