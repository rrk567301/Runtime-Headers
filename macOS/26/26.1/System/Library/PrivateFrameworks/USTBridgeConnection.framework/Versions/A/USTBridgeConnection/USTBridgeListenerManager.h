@class NSXPCListener, BridgeServiceDelegate;

@interface USTBridgeListenerManager : NSObject {
    NSXPCListener *_listener;
    BridgeServiceDelegate *_serviceDelegate;
}

- (id)initWithServer:(id)a0;
- (void)resume;
- (void).cxx_destruct;

@end
