@class NSXPCConnection, NSXPCInterface;

@interface EPExecutionPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addPolicyExceptionForURL:(id)a0 error:(id *)a1;

@end
