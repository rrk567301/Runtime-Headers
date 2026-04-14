@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (void)dealloc;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)suggestionLayoutFromCache;
- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)init;
- (id)remoteSyncBlendingLayerServer;
- (void)setupRemoteClientXPCConnection;
- (id)layoutForRequest:(id)a0;
- (void).cxx_destruct;

@end
