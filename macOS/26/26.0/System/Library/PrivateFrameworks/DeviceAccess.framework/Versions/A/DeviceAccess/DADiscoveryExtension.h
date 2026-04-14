@class NSXPCConnection, DADiscovery, _EXExtensionIdentity, NSObject;
@protocol OS_dispatch_queue;

@interface DADiscoveryExtension : NSObject <DADiscoveryExtensionXPCProtocolHost> {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) _EXExtensionIdentity *ekExtension;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) DADiscovery *parent;

- (void)_interrupted;
- (void)invalidate;
- (void)_invalidated;
- (void)_invalidate;
- (void)_activate;
- (id)description;
- (void)activate;
- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (void)reportEventToExtension:(id)a0;

@end
