@interface PreviewShellKit.JITManager : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
