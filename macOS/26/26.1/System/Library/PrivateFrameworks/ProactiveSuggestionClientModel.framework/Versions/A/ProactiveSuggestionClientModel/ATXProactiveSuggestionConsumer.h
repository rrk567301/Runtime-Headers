@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)suggestionLayoutFromCache;
- (id)remoteSyncBlendingLayerServer;
- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (void)dealloc;
- (id)layoutForRequest:(id)a0;
- (void)setupRemoteClientXPCConnection;
- (void).cxx_destruct;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)a0;

@end
