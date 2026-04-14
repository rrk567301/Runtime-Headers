@interface PommesSearchXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_pommesSearchService;
    void /* unknown type, empty encoding */ listener;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;

@end
