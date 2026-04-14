@class NSXPCInterface, NSArray, NSString, HMDProcessMonitor, NSDictionary, HMXPCMessageTransportConfiguration, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HMDXPCListener, HMDAppProtectionGuard;

@interface HMDXPCMessageTransport : HMFMessageTransport <HMDXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDXPCMessageTransport *defaultTransport;
@property (class, readonly) HMDXPCMessageTransport *accessorySetupTransport;

@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDXPCListener> listener;
@property (readonly) id<HMDAppProtectionGuard> appProtectionGuard;
@property (readonly) NSMutableSet *mutableConnections;
@property (readonly) NSXPCInterface *exportedInterface;
@property (readonly) NSXPCInterface *remoteObjectInterface;
@property (copy) id /* block */ clientConnectionFactory;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSDictionary *stateDump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)stop;
- (id)initWithConfiguration:(id)a0;
- (id)logIdentifier;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (id)initWithConfiguration:(id)a0 queue:(id)a1 listener:(id)a2 processMonitor:(id)a3 appProtectionGuard:(id)a4;

@end
