@interface PommesSearchXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pommesSearchService;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
