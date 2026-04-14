@class NSXPCInterface, NSXPCConnection;

@interface GDXPCSysdiagnoseService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticsWithError:(id *)a0;
- (id)entityRelevanceRankingSupplementalDiagnosticsWithError:(id *)a0;
- (id)entityResolutionSupplementalDiagnosticsWithError:(id *)a0;
- (id)entityTaggingSupplementalDiagnosticsWithError:(id *)a0;
- (id)eventViewDiagnosticsWithError:(id *)a0;
- (void)locked_establishConnection;
- (id)viewsSupplementalDiagnosticsWithError:(id *)a0;

@end
