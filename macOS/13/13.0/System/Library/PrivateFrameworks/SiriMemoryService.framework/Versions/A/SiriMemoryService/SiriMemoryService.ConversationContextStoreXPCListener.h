@interface SiriMemoryService.ConversationContextStoreXPCListener : NSObject <NSXPCListenerDelegate, SiriMemoryCore.ConversationContextStoreXPCProtocol> {
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)donateWithData:(id)a0 key:(id)a1 for:(id)a2 completionHandler:(id /* block */)a3;
- (void)queryWithKeys:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeWithKey:(id)a0 for:(id)a1 completionHandler:(id /* block */)a2;

@end
