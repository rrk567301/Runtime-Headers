@class NSXPCInterface, NSXPCConnection;

@interface GDCComputeService : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_serverInterface;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (char)stopWithError:(id *)a0;
- (void)locked_establishConnection;
- (char)clearViewWithName:(id)a0 fullRebuild:(char)a1 error:(id *)a2;
- (char)truncateViewWithName:(id)a0 fullRebuild:(char)a1 error:(id *)a2;
- (id)updateGroupWithName:(id)a0 namesAndRequests:(id)a1 error:(id *)a2;
- (id)updateViewWithName:(id)a0 viewUpdateSourceRequests:(id)a1 error:(id *)a2;

@end
