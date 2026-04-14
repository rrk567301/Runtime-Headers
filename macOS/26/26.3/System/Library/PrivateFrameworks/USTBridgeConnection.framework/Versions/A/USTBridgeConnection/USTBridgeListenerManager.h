@class NSXPCListener, BridgeServiceDelegate;

@interface USTBridgeListenerManager : NSObject {
    NSXPCListener *_listener;
    BridgeServiceDelegate *_serviceDelegate;
}

- (void)resume;
- (id)initWithServer:(id)a0;
- (void).cxx_destruct;

@end
