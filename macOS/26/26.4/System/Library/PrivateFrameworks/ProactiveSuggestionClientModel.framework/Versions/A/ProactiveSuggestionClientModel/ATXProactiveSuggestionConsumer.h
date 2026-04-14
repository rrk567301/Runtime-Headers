@class ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionConsumer : NSObject {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

- (id)cachedSuggestionsForClientModelType:(long long)a0;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)suggestionLayoutFromCache;
- (id)remoteSyncBlendingLayerServer;
- (id)layoutForRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (void)setupRemoteClientXPCConnection;
- (void)dealloc;

@end
