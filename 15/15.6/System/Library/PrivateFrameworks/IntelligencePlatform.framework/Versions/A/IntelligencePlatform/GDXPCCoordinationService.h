@class NSXPCInterface, NSXPCConnection;

@interface GDXPCCoordinationService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (char)graphUpdatedWithSource:(id)a0 error:(id *)a1;
- (void)locked_establishConnection;
- (char)migrateViewDatabasesWithError:(id *)a0;
- (char)sourceUpdatedWithSourceType:(id)a0 sourceIdentifier:(id)a1 error:(id *)a2;
- (char)streamUpdatedWithStreamName:(id)a0 isDelete:(char)a1 error:(id *)a2;
- (char)streamsChangedWithUpdated:(id)a0 deletes:(id)a1 error:(id *)a2;

@end
