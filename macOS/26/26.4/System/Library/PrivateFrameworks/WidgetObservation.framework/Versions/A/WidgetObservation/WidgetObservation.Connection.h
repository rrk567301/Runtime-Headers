@interface WidgetObservation.Connection : NSObject <WidgetObservation.ProxyServerInterface> {
    void /* unknown type, empty encoding */ connectionsManager;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (void).cxx_destruct;
- (id)init;
- (void)xpcShowAddSheet;
- (void)xpcRequestWidgetsWithCompletion:(id /* block */)a0;

@end
