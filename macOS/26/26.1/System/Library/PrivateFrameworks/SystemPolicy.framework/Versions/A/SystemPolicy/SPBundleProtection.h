@class NSXPCConnection, NSXPCInterface;

@interface SPBundleProtection : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)sendMetricFromTCCWithURL:(id)a0 withPID:(int)a1 withError:(id *)a2;

@end
