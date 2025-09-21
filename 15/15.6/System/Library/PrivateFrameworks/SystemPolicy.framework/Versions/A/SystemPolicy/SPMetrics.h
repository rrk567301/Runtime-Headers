@class NSXPCConnection, NSXPCInterface;

@interface SPMetrics : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)reportEvent:(id)a0 andData:(id)a1;

@end
