@class NSXPCInterface, NSXPCConnection;

@interface GDXPCCoordinationService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)graphUpdatedWithSource:(id)a0 error:(id *)a1;
- (void)locked_establishConnection;
- (BOOL)migrateViewDatabasesWithError:(id *)a0;
- (BOOL)sourceUpdatedWithSourceType:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (BOOL)streamUpdatedWithStreamName:(id)a0 isDelete:(BOOL)a1 error:(id *)a2;
- (BOOL)streamsChangedWithUpdated:(id)a0 deletes:(id)a1 error:(id *)a2;
- (id)sysdiagnoseInfoWithError:(id *)a0;

@end
