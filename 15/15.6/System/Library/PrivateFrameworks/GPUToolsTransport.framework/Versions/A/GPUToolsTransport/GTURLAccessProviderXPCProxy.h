@class NSSet;
@protocol GTXPCConnection;

@interface GTURLAccessProviderXPCProxy : NSObject <GTURLAccessProvider> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)copyIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)makeURL:(id)a0;
- (void)securityScopedURLFromSandboxID:(id)a0 completionHandler:(id /* block */)a1;
- (void)transferIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForPath:(id)a0;

@end
