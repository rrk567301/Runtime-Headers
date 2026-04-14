@class NSXPCConnection, NSXPCInterface;

@interface EPExecutionPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)addPolicyExceptionForURL:(id)a0 error:(id *)a1;

@end
