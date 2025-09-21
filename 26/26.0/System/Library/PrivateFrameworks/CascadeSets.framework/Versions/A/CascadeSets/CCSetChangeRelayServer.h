@class CCSetChangeXPCNotifier, BMXPCListener;

@interface CCSetChangeRelayServer : NSObject <BMXPCListenerDelegate, CCSetChangeRelayProtocol> {
    BMXPCListener *_listener;
    CCSetChangeXPCNotifier *_setChangeNotifier;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)notifyChangeToSet:(id)a0 completion:(id /* block */)a1;

@end
