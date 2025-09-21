@class NSString, ATXUICacheManager, NSXPCConnection;

@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol> {
    unsigned char _consumer;
    ATXUICacheManager *_cacheManager;
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)suggestionLayoutFromCache;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)init;
- (id)spotlightSuggestionLayoutFromCache;
- (id)remoteSyncBlendingLayerServer;
- (void)setupRemoteClientXPCConnection;
- (id)layoutForRequest:(id)a0;
- (void).cxx_destruct;

@end
