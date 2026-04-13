@interface CalledByClient : NSObject <ClientCallsAuxiliary>

- (void)forApp:(struct { unsigned int x0[8]; })a0 retrievePreviewEndpoint:(id /* block */)a1;
- (void)hostApp:(struct { unsigned int x0[8]; })a0 description:(id /* block */)a1;
- (id)hostAppDescription:(struct { unsigned int x0[8]; })a0;
- (void)windowForContextID:(unsigned int)a0 fromViewService:(int)a1 reply:(id /* block */)a2;
- (void)requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)addFreeWindow:(struct { struct { unsigned int x0[8]; } x0; struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned long long x3; } x1; })a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)_requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)hostAppStartingWith:(id)a0 endpoint:(id)a1 reply:(id /* block */)a2;
- (BOOL)hostAppStartingWith:(id)a0 endpoint:(id)a1;
- (BOOL)trustedToPreviewArbitraryApps;
- (id)endpointForHostApp:(id)a0;
- (id)hostAppConnectionForListenerEndpoint:(id)a0;
- (BOOL)trustedToAddFreeWindowToArbitraryHostApp;
- (void)_addFreeWindow:(const struct { struct { unsigned int x0[8]; } x0; struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned long long x3; } x1; } *)a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (BOOL)viewService:(int)a0 hasHostApp:(int)a1;

@end
