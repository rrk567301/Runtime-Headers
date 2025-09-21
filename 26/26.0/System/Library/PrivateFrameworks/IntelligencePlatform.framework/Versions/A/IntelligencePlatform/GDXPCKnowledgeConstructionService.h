@class NSXPCInterface, NSXPCConnection;

@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)checkInWithError:(id *)a0;
- (void)locked_establishConnection;
- (BOOL)runFastpassPipelineWithReason:(unsigned long long)a0 error:(id *)a1;
- (BOOL)runFullPipelineWithReason:(unsigned long long)a0 error:(id *)a1;
- (BOOL)stopPipelineWithError:(id *)a0;

@end
