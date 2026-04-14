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
- (void)setupRemoteClientXPCConnection;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)suggestionLayoutFromCache;
- (void).cxx_destruct;
- (id)layoutForRequest:(id)a0;
- (id)init;
- (id)remoteSyncBlendingLayerServer;
- (id)spotlightSuggestionLayoutFromCache;
- (void)dealloc;

@end
