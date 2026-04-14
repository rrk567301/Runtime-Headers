@interface NSRemoteViewHostAppExportedObject : NSObject <AuxiliaryCallsClient>

- (void)requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)addFreeWindow:(struct { struct { unsigned int x0[8]; } x0; struct { unsigned char x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned long long x3; } x1; })a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (int)_requestUserInteractionWithPatience:(double)a0 options:(unsigned long long)a1 sender:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a2 reply:(id /* block */)a3;
- (void)retrievePreviewEndpoint:(id /* block */)a0;

@end
