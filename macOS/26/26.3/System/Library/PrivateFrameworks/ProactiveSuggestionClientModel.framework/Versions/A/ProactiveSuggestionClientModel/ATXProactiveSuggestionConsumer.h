@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (void)setupRemoteClientXPCConnection;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)remoteSyncBlendingLayerServer;
- (id)init;
- (id)layoutForRequest:(id)a0;
- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)suggestionLayoutFromCache;

@end
