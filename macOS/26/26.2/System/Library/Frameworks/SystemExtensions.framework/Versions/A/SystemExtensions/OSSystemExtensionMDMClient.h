@class Protocol, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface OSSystemExtensionMDMClient : NSObject {
    Protocol *mdmClientToServerInterface;
}

@property (retain) NSXPCInterface *interface;
@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id)connectToServer;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)callMDMServiceWithRetry:(id /* block */)a0;
- (id)installMDMPayload:(id)a0 uuid:(id)a1;
- (id)removeMDMPayloadForUUID:(id)a0;

@end
