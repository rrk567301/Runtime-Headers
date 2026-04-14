@interface GroupKitCore.ClientConnection : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ serviceBuilder;
    void /* unknown type, empty encoding */ connectionQueue;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
