@class DADevice, NSString, _EXExtensionProcess, NSXPCConnection, _EXHostConfiguration, _EXExtensionIdentity, NSObject;
@protocol OS_dispatch_queue;

@interface DAExtension : NSObject <DAExtensionXPCProtocolHost> {
    BOOL _activateCalled;
    NSString *_bundleID;
    BOOL _clientInvalidated;
    DADevice *_device;
    _EXExtensionProcess *_extensionProcess;
    _EXHostConfiguration *_extensionConfiguration;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned long long _invalidateReason;
    NSXPCConnection *_xpcConnection;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int pid;

- (void)invalidate;
- (void)invalidateWithReason:(unsigned long long)a0;
- (void)_activated;
- (id)description;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)reportEvent:(id)a0;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)a0;
- (void)activate;
- (void)_invalidate;
- (void)_activateDirect;
- (void)_reportEventType:(long long)a0;
- (id)initWithDevice:(id)a0 identity:(id)a1 type:(long long)a2;
- (void)reportEventToExtension:(id)a0;

@end
