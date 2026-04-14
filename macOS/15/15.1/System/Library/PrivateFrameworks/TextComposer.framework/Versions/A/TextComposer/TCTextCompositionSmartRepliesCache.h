@class _TtC12TextComposer32TCTextCompositionSpotlightReader;

@interface TCTextCompositionSmartRepliesCache : NSObject {
    _TtC12TextComposer32TCTextCompositionSpotlightReader *_spotlightReader;
}

+ (id)sharedCache;
+ (id)messagesSRCache;
+ (id)cacheForCompositionMode:(long long)a0;
+ (id)mailSRCache;

- (id)init;
- (void).cxx_destruct;
- (id)_cacheQueue;
- (void)cachedResponsesforMessageId:(id)a0 messageText:(id)a1 mode:(long long)a2 completionHandler:(id /* block */)a3;
- (id)_getObject:(id)a0 cache:(id)a1;
- (void)_setObject:(id)a0 forKey:(id)a1 cache:(id)a2;
- (id)bundleIDFrom:(long long)a0;
- (id)cacheKeyFor:(id)a0;
- (BOOL)cacheSmartRepliesResponse:(id)a0 inputContextHistory:(id)a1 mode:(long long)a2;
- (void)cachedResponse:(id)a0 mode:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cachedResponseForMessage:(id)a0 mode:(long long)a1 completionHandler:(id /* block */)a2;
- (void)cachedResponsesforMessageIds:(id)a0 mode:(long long)a1 completionHandler:(id /* block */)a2;
- (id)mostRecentMessage:(id)a0;

@end
