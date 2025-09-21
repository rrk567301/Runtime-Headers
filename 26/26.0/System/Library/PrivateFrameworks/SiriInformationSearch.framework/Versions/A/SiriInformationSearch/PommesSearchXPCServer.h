@interface PommesSearchXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pommesSearchService;
    void /* unknown type, empty encoding */ listener;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
