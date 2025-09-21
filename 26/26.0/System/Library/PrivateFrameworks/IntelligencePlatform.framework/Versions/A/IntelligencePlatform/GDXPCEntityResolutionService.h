@class NSXPCInterface, NSXPCConnection;

@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)generateMentionsForQuery:(id)a0 error:(id *)a1;
- (void)locked_establishConnection;
- (id)requestAssetDownloadForAssetType:(id)a0 localeIdentifier:(id)a1 error:(id *)a2;
- (id)submitCollectionQuery:(id)a0 withError:(id *)a1;
- (id)submitQuery:(id)a0 withError:(id *)a1;
- (BOOL)warmupForMode:(long long)a0 error:(id *)a1;

@end
