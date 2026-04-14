@class CCSetChangeXPCNotifier, BMXPCListener;

@interface CCSetChangeRelayServer : NSObject <BMXPCListenerDelegate, CCSetChangeRelayProtocol> {
    BMXPCListener *_listener;
    CCSetChangeXPCNotifier *_setChangeNotifier;
}

- (id)initWithQueue:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)activate;
- (void)notifyChangeToSet:(id)a0 completion:(id /* block */)a1;

@end
