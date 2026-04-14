@class NSString, NSXPCListener, CCSetChangeXPCNotifier;

@interface CCSetChangeRelayServer : NSObject <NSXPCListenerDelegate, CCSetChangeRelayProtocol> {
    NSXPCListener *_listener;
    CCSetChangeXPCNotifier *_setChangeNotifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (id)initWithQueue:(id)a0;
- (void)notifyChangeToSet:(id)a0 completion:(id /* block */)a1;

@end
