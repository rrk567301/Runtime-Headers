@interface MediaContinuityKit.CoexServerXPCListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ coexListener;
    void /* unknown type, empty encoding */ coexManager;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
