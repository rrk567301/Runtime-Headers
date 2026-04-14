@class NSXPCInterface, NSXPCConnection;

@interface GDXPCInferenceSupportService : NSObject <GDXPCAssetRegistryServiceBaseProtocol> {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)init;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)assetEntryResultDataForAssetId:(id)a0 inDomainId:(id)a1 remoteOptionsData:(id)a2 error:(id *)a3;
- (void)locked_establishConnection;

@end
