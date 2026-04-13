@class NSObject;

@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession {
    NSObject *_proxy;
}

- (void).cxx_destruct;
- (id)remoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithFakeProxy:(id)a0;

@end
