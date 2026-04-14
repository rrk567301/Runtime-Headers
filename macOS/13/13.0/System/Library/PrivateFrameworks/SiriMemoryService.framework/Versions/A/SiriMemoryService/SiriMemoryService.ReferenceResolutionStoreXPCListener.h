@interface SiriMemoryService.ReferenceResolutionStoreXPCListener : NSObject <NSXPCListenerDelegate, SiriMemoryCore.ReferenceResolutionStoreXPCProtocol> {
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)listEntitiesFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)pullEntitiesFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateEntitiesWith:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteEntitiesForKeys:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;

@end
