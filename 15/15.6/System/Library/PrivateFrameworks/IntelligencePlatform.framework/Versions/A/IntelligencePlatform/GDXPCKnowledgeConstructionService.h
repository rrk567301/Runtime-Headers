@class NSXPCInterface, NSXPCConnection;

@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (char)checkInWithError:(id *)a0;
- (void)locked_establishConnection;
- (char)runFastpassPipelineWithReason:(unsigned long long)a0 error:(id *)a1;
- (char)runFullPipelineWithReason:(unsigned long long)a0 error:(id *)a1;
- (char)stopPipelineWithError:(id *)a0;

@end
