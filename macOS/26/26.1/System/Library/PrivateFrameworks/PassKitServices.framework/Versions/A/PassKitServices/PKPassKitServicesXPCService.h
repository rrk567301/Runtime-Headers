@class NSXPCConnection;

@interface PKPassKitServicesXPCService : NSObject {
    NSXPCConnection *_connection;
}

- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_invalidate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_createConnection;
- (id)init;
- (void)imageDataForRecurringPaymentMemo:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)imageDataForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)snapshotDataForPassUniqueIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
