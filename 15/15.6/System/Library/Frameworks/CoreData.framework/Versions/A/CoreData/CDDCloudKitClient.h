@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {
    char _interrupted;
    char _invalidated;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (id)initWithMachServiceName:(id)a0;
- (char)_valid;
- (void)handleMessage:(id)a0 reply:(id /* block */)a1;

@end
