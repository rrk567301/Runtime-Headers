@interface MediaContinuityKit.CoexServerXPCListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ coexListener;
    void /* unknown type, empty encoding */ coexManager;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
