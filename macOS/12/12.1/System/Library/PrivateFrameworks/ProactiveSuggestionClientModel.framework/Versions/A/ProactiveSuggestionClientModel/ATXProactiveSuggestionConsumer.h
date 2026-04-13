@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)layoutForRequest:(id)a0;
- (void)setupRemoteClientXPCConnection;
- (id)remoteSyncBlendingLayerServer;
- (id)suggestionLayoutFromCache;
- (id)cachedSuggestionsForClientModelType:(long long)a0;

@end
