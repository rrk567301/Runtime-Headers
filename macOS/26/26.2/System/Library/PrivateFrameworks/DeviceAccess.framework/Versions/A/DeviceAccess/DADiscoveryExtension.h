@class NSXPCConnection, DADiscovery, _EXExtensionIdentity, NSObject;
@protocol OS_dispatch_queue;

@interface DADiscoveryExtension : NSObject <DADiscoveryExtensionXPCProtocolHost> {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) _EXExtensionIdentity *ekExtension;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) DADiscovery *parent;

- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)reportEvent:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)activate;
- (void)_activate;
- (void)_invalidate;
- (void)reportEventToExtension:(id)a0;

@end
