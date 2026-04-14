@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (void)setupRemoteClientXPCConnection;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)suggestionLayoutFromCache;
- (void).cxx_destruct;
- (id)layoutForRequest:(id)a0;
- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (id)init;
- (id)remoteSyncBlendingLayerServer;
- (void)dealloc;

@end
