@class NSXPCConnection, NSXPCInterface;

@interface SPKernelExtensionHistory : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)kernelExtensionHistory;

@end
