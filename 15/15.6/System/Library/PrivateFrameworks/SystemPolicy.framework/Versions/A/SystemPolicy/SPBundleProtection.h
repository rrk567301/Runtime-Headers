@class NSXPCConnection, NSXPCInterface;

@interface SPBundleProtection : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)sendMetricFromTCCWithURL:(id)a0 withPID:(int)a1 withError:(id *)a2;

@end
