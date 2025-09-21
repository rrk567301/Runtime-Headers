@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)xpcConnection;
- (id)init;
- (void).cxx_destruct;
- (void)closeService;
- (void)handleConnectionError:(BOOL)a0;
- (struct AudioComponentVector { void *x0; void *x1; void *x2; BOOL x3; })initialScan:(id)a0;
- (void)rescan:(id)a0 added:(void *)a1 removed:(void *)a2;

@end
