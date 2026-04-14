@class NSXPCInterface, NSXPCConnection;

@interface GDXPCGraphSimulationService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)locked_establishConnection;
- (BOOL)mockTripleEntityTaggingWithContactId:(id)a0 inferredRelationshipLabel:(id)a1 error:(id *)a2;

@end
