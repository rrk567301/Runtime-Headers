@class NSXPCConnection, NSXPCInterface;

@interface SPBundleProtection : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)sendMetricFromTCCWithURL:(id)a0 withPID:(int)a1 withError:(id *)a2;

@end
