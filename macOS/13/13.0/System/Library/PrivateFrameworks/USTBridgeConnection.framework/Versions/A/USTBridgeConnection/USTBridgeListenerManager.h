@class NSXPCListener, BridgeServiceDelegate;

@interface USTBridgeListenerManager : NSObject {
    NSXPCListener *_listener;
    BridgeServiceDelegate *_serviceDelegate;
}

- (void)resume;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0;

@end
