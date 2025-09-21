@class _TtC12TextComposer32TCTextCompositionSpotlightReader;

@interface TCTextCompositionSmartActionsCache : NSObject {
    _TtC12TextComposer32TCTextCompositionSpotlightReader *_spotlightReader;
    BOOL _testingMode;
}

+ (id)sharedCache;
+ (id)messagesSADetectionCache;
+ (id)messagesSAFollowUpCache;

- (id)init;
- (void)enableTestingMode;
- (void).cxx_destruct;
- (id)_cacheQueue;
- (BOOL)_cacheSmartActionResponse:(id)a0 inputContextHistory:(id)a1 mode:(long long)a2 flow:(long long)a3 onComposeState:(BOOL)a4 isExternalAPICall:(BOOL)a5;
- (void)_cachedSmartActionResponse:(id)a0 mode:(long long)a1 flow:(long long)a2 onComposeState:(BOOL)a3 isExternalAPICall:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)_getFollowUpObject:(id)a0 cache:(id)a1;
- (id)_getIntentObject:(id)a0 cache:(id)a1;
- (BOOL)_isValidSmartActionFlow:(long long)a0;
- (id)_loadCacheForSmartActionFlow:(long long)a0 smartActionCompositionMode:(long long)a1;
- (void)_setFollowUpObject:(id)a0 forKey:(id)a1 cache:(id)a2;
- (void)_setIntentObject:(id)a0 forKey:(id)a1 cache:(id)a2;
- (id)cacheKeyFor:(id)a0;
- (BOOL)cacheSmartActionFollowUpResponse:(id)a0 inputContextHistory:(id)a1 mode:(long long)a2 onComposeState:(BOOL)a3 isExternalAPICall:(BOOL)a4;
- (BOOL)cacheSmartActionIntentResponse:(id)a0 inputContextHistory:(id)a1 mode:(long long)a2 onComposeState:(BOOL)a3 isExternalAPICall:(BOOL)a4;
- (void)cachedSmartActionFollowUpResponse:(id)a0 mode:(long long)a1 onComposeState:(BOOL)a2 isExternalAPICall:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)cachedSmartActionIntentResponse:(id)a0 mode:(long long)a1 onComposeState:(BOOL)a2 isExternalAPICall:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)messagesInLookbackWindow:(id)a0;
- (id)mostRecentMessage:(id)a0;

@end
