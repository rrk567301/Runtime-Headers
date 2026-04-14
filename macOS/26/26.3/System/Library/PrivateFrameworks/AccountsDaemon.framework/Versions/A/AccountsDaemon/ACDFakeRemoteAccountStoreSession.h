@class NSObject;

@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession {
    NSObject *_proxy;
}

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (id)initWithFakeProxy:(id)a0;

@end
