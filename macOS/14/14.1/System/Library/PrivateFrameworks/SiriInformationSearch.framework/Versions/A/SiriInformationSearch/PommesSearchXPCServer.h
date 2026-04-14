@interface PommesSearchXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ pommesSearchService;
    void /* unknown type, empty encoding */ listener;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
