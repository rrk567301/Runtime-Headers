@interface AppPredictionInternal.ContextualSuggestionServer : NSObject <NSXPCListenerDelegate, ATXContextualSuggestionServerInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_xpcListener;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ contextStore;
    void /* unknown type, empty encoding */ suggestionStore;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)requestSnapshotsForEndpoints:(id)a0 completion:(id /* block */)a1;

@end
