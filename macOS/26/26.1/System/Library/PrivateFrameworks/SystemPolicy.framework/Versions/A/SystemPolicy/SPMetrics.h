@class NSXPCConnection, NSXPCInterface;

@interface SPMetrics : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)reportEvent:(id)a0 andData:(id)a1;

@end
