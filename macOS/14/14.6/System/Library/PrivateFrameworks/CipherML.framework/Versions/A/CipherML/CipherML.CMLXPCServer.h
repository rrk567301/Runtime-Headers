@interface CipherML.CMLXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ requestsManager;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
