@class MTRPluginClient, NSString;

@interface MTRPluginClientXPCProxy : NSObject <MTRXPCClientProtocol>

@property (weak) MTRPluginClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (oneway void)device:(id)a0 receivedEventReport:(id)a1;
- (oneway void)device:(id)a0 receivedAttributeReport:(id)a1;
- (void).cxx_destruct;
- (void)callRemoteProxyObject:(id /* block */)a0;

@end
