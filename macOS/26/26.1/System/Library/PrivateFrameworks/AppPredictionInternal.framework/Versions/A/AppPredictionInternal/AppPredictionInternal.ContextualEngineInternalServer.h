@class NSError, NSDictionary, ATXContextualSuggestionSnapshot;

@interface AppPredictionInternal.ContextualEngineInternalServer : NSObject <NSXPCListenerDelegate, ATXContextualEngineInternalInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_xpcListener;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ suggestionStore;
}

- (void)updateWithCompletion:(void (^)(NSError *))a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)fetchAllSnapshotsWithCompletion:(void (^)(NSDictionary *, NSError *))a0;
- (void)fetchSnapshotOverrideWithCompletion:(void (^)(ATXContextualSuggestionSnapshot *, NSError *))a0;
- (void)overrideWithSnapshot:(ATXContextualSuggestionSnapshot *)a0 completion:(void (^)(NSError *))a1;

@end
