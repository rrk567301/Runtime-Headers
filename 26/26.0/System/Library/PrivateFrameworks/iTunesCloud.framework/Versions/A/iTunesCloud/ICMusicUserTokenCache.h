@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICMusicUserTokenCache : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_cachedUserTokens;
}

@property (class, readonly, nonatomic) ICMusicUserTokenCache *sharedCache;

+ (id)_decodeDeveloperTokenPart:(id)a0;
+ (void)_getCacheKeyForDeveloperToken:(id)a0 requestContext:(id)a1 completion:(id /* block */)a2;

- (id)_init;
- (void)dealloc;
- (void)_loadPersistedCacheWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setCachedUserToken:(id)a0 forDeveloperToken:(id)a1 requestContext:(id)a2 completion:(id /* block */)a3;
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)a0;
- (void)_persistCache;
- (void)_postLocalChangeNotification;
- (void)getCachedUserTokenForDeveloperToken:(id)a0 requestContext:(id)a1 completion:(id /* block */)a2;

@end
