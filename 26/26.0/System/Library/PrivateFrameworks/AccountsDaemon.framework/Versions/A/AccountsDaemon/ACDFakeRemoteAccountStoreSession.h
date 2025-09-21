@class NSObject;

@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession {
    NSObject *_proxy;
}

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)initWithFakeProxy:(id)a0;
- (void).cxx_destruct;

@end
