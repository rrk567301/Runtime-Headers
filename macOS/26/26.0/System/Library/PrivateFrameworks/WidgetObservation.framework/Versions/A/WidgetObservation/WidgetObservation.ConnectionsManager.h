@interface WidgetObservation.ConnectionsManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ xpcListener;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ notificationName;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
