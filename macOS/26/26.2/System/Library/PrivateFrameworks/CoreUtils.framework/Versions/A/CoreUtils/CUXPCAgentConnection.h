@class NSObject, NSXPCConnection, CUXPCAgent;
@protocol OS_dispatch_queue;

@interface CUXPCAgentConnection : NSObject {
    CUXPCAgent *_agent;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

- (id)remoteObjectProxy;
- (void)connectionInvalidated;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
