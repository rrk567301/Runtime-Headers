@class NSUUID, NSString, DADevice, NSXPCConnection, NSObject, _EXExtensionIdentity, _EXCapabilityEndpoint, _EXCapabilityHostSession;
@protocol OS_dispatch_queue;

@interface DAExtensionCapability : NSObject <CUXPCCodable, DAExtensionXPCProtocolHost> {
    BOOL _activateCalled;
    NSString *_bundleID;
    BOOL _clientInvalidated;
    DADevice *_device;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _EXExtensionIdentity *_extensionIdentity;
    _EXCapabilityHostSession *_extensionSession;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned long long _invalidateReason;
    NSUUID *_sessionUUID;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) _EXCapabilityEndpoint *endpoint;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) int pid;
@property (readonly, nonatomic) unsigned long long capabilityFlag;
@property (readonly, nonatomic) NSString *capabilityID;
@property (readonly, nonatomic) NSString *identifier;

- (void)encodeWithXPCObject:(id)a0;
- (void)_activated;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)activate;
- (void)reportEvent:(id)a0;
- (void)_invalidate;
- (id)descriptionWithLevel:(int)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (void)invalidateWithReason:(unsigned long long)a0;
- (void)_activateDirect;
- (void)_reportEvent:(id)a0;
- (void)_sandboxExtensionIssueMach:(id)a0;
- (void)_startCapability:(id)a0;
- (id)initWithIdentity:(id)a0 device:(id)a1 capabilityID:(id)a2;
- (void)reportEventToExtension:(id)a0;

@end
