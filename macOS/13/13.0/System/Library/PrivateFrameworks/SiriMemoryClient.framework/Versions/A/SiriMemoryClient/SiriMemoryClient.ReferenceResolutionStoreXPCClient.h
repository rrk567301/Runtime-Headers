@interface SiriMemoryClient.ReferenceResolutionStoreXPCClient : _TtCs12_SwiftObject <SiriMemoryCore.ReferenceResolutionStoreXPCProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (void)listEntitiesFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)pullEntitiesFor:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateEntitiesWith:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteEntitiesForKeys:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;

@end
