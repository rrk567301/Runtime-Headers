@class NSXPCConnection, NSXPCInterface;

@interface SPMetrics : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)reportEvent:(id)a0 andData:(id)a1;

@end
