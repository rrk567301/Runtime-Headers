@class NSXPCInterface, NSXPCConnection;

@interface GDXPCInferenceSupportService : NSObject <GDXPCAssetRegistryServiceBaseProtocol> {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)assetEntryResultDataForAssetId:(id)a0 inDomainId:(id)a1 remoteOptionsData:(id)a2 error:(id *)a3;
- (void)locked_establishConnection;

@end
