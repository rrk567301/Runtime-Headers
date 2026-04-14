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
- (id)spotlightSuggestionLayoutFromCache;
- (id)initWithConsumerSubType:(unsigned char)a0;
- (id)remoteSyncBlendingLayerServer;
- (id)init;
- (id)layoutForRequest:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)suggestionLayoutFromCache;

@end
