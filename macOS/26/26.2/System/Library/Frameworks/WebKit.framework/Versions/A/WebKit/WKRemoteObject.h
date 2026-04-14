@class _WKRemoteObjectRegistry, _WKRemoteObjectInterface;

@interface WKRemoteObject : NSObject {
    struct RetainPtr<_WKRemoteObjectRegistry> { _WKRemoteObjectRegistry *m_ptr; } _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> { _WKRemoteObjectInterface *m_ptr; } _interface;
}

- (BOOL)conformsToProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)forwardInvocation:(id)a0;
- (id)_initWithObjectRegistry:(id)a0 interface:(id)a1;

@end
