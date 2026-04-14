@class NSXPCConnection, NSXPCInterface;

@interface SPMetrics : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)reportEvent:(id)a0 andData:(id)a1;

@end
