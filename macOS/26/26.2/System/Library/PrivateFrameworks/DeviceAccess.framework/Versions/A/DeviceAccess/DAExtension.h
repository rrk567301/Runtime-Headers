@class NSObject, NSString, _EXExtensionProcess, NSXPCConnection, _EXHostConfiguration, DADevice, _EXExtensionIdentity;
@protocol OS_dispatch_queue;

@interface DAExtension : NSObject <DAExtensionXPCProtocolHost> {
    BOOL _activateCalled;
    NSString *_bundleID;
    BOOL _clientInvalidated;
    DADevice *_device;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _EXExtensionProcess *_ekExtensionProcess;
    _EXHostConfiguration *_ekHostConfiguration;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned long long _invalidateReason;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) _EXExtensionIdentity *ekExtension;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long transportType;
@property (readonly, nonatomic) long long type;
@property (nonatomic) int pid;

- (void)invalidateWithReason:(unsigned long long)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (id)descriptionWithLevel:(int)a0;
- (void)reportEvent:(id)a0;
- (void)_activated;
- (void).cxx_destruct;
- (id)description;
- (void)activate;
- (void)_invalidate;
- (void)_activateDirect;
- (void)_reportEventType:(long long)a0;
- (id)initWithCoordinator:(id)a0 ekExtension:(id)a1 type:(long long)a2 transportType:(long long)a3;
- (void)reportEventToExtension:(id)a0;

@end
