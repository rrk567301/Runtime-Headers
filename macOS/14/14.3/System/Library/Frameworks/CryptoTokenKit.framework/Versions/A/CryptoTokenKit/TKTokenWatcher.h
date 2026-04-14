@class NSXPCListenerEndpoint, TKClientToken, NSArray, NSXPCConnection, NSMutableDictionary;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcherHost> {
    int _notifyToken;
    NSXPCConnection *_connection;
    NSMutableDictionary *_tokenInfos;
    NSMutableDictionary *_removalHandlers;
    id /* block */ _insertionHandler;
}

@property (readonly, nonatomic) TKClientToken *client;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSArray *tokenIDs;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (id)initWithClient:(id)a0;
- (void)removeAllTokens;
- (void)addRemovalHandler:(id /* block */)a0 forTokenID:(id)a1;
- (id)initWithInsertionHandler:(id /* block */)a0;
- (void)insertedToken:(id)a0;
- (void)removedToken:(id)a0;
- (void)setInsertionHandler:(id /* block */)a0;
- (void)startWatching;
- (id)tokenInfoForTokenID:(id)a0;

@end
