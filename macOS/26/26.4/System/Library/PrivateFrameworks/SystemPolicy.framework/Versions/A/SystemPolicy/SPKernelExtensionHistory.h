@class NSXPCConnection, NSXPCInterface;

@interface SPKernelExtensionHistory : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)kernelExtensionHistory;

@end
