@interface SiriMemoryClient.ConversationContextStoreXPCClient : _TtCs12_SwiftObject <SiriMemoryCore.ConversationContextStoreXPCProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ xpcConnection;
}

- (void)donateWithData:(id)a0 key:(id)a1 for:(id)a2 completionHandler:(id /* block */)a3;
- (void)queryWithKeys:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeWithKey:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;

@end
