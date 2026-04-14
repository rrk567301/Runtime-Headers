@interface WidgetObservation.ConnectionsManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ xpcListener;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ notificationName;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
