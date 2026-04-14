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

- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)suggestionLayoutFromCache;
- (id)remoteSyncBlendingLayerServer;
- (id)layoutForRequest:(id)a0;
- (id)spotlightSuggestionLayoutFromCache;
- (void).cxx_destruct;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (void)setupRemoteClientXPCConnection;
- (void)dealloc;

@end
