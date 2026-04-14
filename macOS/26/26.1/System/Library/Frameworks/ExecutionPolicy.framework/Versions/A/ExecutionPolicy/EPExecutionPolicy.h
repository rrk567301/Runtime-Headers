@class NSXPCConnection, NSXPCInterface;

@interface EPExecutionPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (BOOL)addPolicyExceptionForURL:(id)a0 error:(id *)a1;

@end
