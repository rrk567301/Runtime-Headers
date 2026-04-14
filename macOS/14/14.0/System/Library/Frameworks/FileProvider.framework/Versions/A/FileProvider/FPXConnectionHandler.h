@class FPXExtensionContext;

@interface FPXConnectionHandler : _EXExtension <_EXConnectionHandler> {
    FPXExtensionContext *_currentContext;
}

- (void).cxx_destruct;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (Class)delegateClass;
- (void)invalidateCurrentContext;
- (id)makeNewContext;
- (BOOL)shouldAcceptConnection:(id)a0;

@end
