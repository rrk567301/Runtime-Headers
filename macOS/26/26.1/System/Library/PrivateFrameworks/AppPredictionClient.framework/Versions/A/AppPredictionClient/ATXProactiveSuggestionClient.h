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

- (id)suggestionLayoutFromCache;
- (id)remoteSyncBlendingLayerServer;
- (id)spotlightSuggestionLayoutFromCache;
- (void)dealloc;
- (id)layoutForRequest:(id)a0;
- (void)setupRemoteClientXPCConnection;
- (void).cxx_destruct;
- (id)suggestionsForRequest:(id)a0 limit:(id)a1;
- (id)init;
- (id)initWithConsumerSubType:(unsigned char)a0;

@end
