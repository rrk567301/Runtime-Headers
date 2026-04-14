@class NSXPCInterface, NSXPCConnection;

@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)locked_establishConnection;
- (BOOL)stopPipelineWithError:(id *)a0;
- (BOOL)runFullPipelineWithReason:(unsigned long long)a0 error:(id *)a1;
- (BOOL)checkInWithError:(id *)a0;

@end
