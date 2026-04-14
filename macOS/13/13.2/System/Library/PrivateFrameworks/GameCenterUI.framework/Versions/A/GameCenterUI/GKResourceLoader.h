@class NSMutableDictionary, NSMapTable, NSOperationQueue, GKResourceCache;

@interface GKResourceLoader : NSObject {
    long long _requestCountMap[3];
}

@property (readonly, nonatomic) NSMutableDictionary *pendingOperations;
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey;
@property (readonly, nonatomic) GKResourceCache *cachedResources;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSOperationQueue *notificationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestQueue;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)cancelAllRequests;
- (void)enterBackground;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (id)initWithParentResourceLoader:(id)a0;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (id)cachedResourcesForCacheKey:(id)a0;
- (void)removeAllCachedResources;
- (id)requestKeyForCacheKey:(id)a0;
- (void)cancelRequestForCacheKey:(id)a0;
- (void)enterForeground;
- (BOOL)isIdleForReason:(long long)a0;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (BOOL)setReason:(long long)a0 forRequestWithKey:(id)a1;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (long long)currentQualityOfService;
- (void)updateLoadReason:(long long)a0 forOperation:(id)a1;
- (void)reprioritizeOperations;
- (void)postDidBeginLoadingIfIdle;
- (void)postDidIdleIfIdle;
- (void)postDidLoadAllForReason:(long long)a0;
- (void)removeResourcesForCacheKey:(id)a0;

@end
