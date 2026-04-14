@class NSXPCListener, NSString, CalXPCConnectionInfo, NSMutableSet;

@interface CalXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) CalXPCConnectionInfo *info;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSMutableSet *clients;
@property (retain, nonatomic) NSXPCListener *connectionListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stopListening;
- (void)performBlockWithAllClients:(id /* block */)a0;
- (id)initWithConnectionInfo:(id)a0 errorHandler:(id /* block */)a1;
- (void)_didInterruptConnection;
- (void)_setupListener;
- (void)_didInvalidateConnection:(id)a0;
- (void)_addClientConnection:(id)a0 clientLink:(id)a1;
- (void)_removeClientConnection:(id)a0;

@end
