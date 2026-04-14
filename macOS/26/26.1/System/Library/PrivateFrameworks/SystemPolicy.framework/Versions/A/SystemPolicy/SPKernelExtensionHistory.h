@class NSXPCConnection, NSXPCInterface;

@interface SPKernelExtensionHistory : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)kernelExtensionHistory;

@end
