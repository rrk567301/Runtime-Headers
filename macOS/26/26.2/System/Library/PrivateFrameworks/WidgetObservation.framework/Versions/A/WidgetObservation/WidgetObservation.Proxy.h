@interface WidgetObservation.Proxy : NSObject <WidgetObservation.ProxyClientInterface> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ machServiceName;
    void /* unknown type, empty encoding */ notificationName;
    void /* unknown type, empty encoding */ notifyToken;
    void /* unknown type, empty encoding */ xpcHandlersOnMainQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)xpcWidgetsDidChangeWithChanges:(id)a0;
- (void)xpcSignificantWidgetChange;
- (void)xpcWidgetDragStateDidChangeWithIsDragging:(BOOL)a0;

@end
