@class NSXPCConnection;

@interface PKPassKitServicesXPCService : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_createConnection;
- (void)_invalidate;
- (void)imageDataForRecurringPaymentMemo:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)imageDataForTransaction:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)snapshotDataForPassUniqueIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
