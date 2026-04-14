@class NSXPCConnection, NSXPCInterface;

@interface SPBundleProtection : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)sendMetricFromTCCWithURL:(id)a0 withPID:(int)a1 withError:(id *)a2;

@end
