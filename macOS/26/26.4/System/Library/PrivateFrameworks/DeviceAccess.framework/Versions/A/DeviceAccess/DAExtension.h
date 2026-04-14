@class NSXPCConnection, NSString, _EXExtensionProcess, NSMutableDictionary, NSObject, _EXHostConfiguration, _EXExtensionIdentity, RBSProcessMonitor, DADevice;
@protocol OS_dispatch_queue;

@interface DAExtension : NSObject <DAExtensionXPCProtocolHost> {
    BOOL _activateCalled;
    NSString *_bundleID;
    NSMutableDictionary *_capabilitesMap;
    unsigned long long _capabilityFlags;
    BOOL _clientInvalidated;
    DADevice *_device;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _extensionFlags;
    _EXHostConfiguration *_extensionConfiguration;
    _EXExtensionProcess *_extensionProcess;
    BOOL _invalidateCalled;
    unsigned long long _invalidateReason;
    RBSProcessMonitor *_processMonitor;
    NSXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) NSString *bluetoothRestorationID;
@property BOOL invalidateDone;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long enrolledFlags;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long processState;

- (void)_suspend;
- (void)resume;
- (void)_activated;
- (void)activate;
- (void)reportEvent:(id)a0;
- (void)_invalidate;
- (id)descriptionWithLevel:(int)a0;
- (void)suspend;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (void)launch;
- (id)description;
- (void)invalidateWithReason:(unsigned long long)a0;
- (void)_activateDirect;
- (void)_capabilitiesEnsureStartedWithFlags:(unsigned long long)a0 error:(id *)a1;
- (void)_capabilitiesEnsureStoppedWithFlags:(unsigned long long)a0 error:(id *)a1;
- (void)_extensionEnsureStartedWithError:(id *)a0;
- (void)_handleCapabilityInterrupted:(id)a0;
- (void)_handleCapabilityInvalidated:(id)a0;
- (void)_handleProcessStateUpdate:(id)a0 process:(id)a1;
- (void)_invalidateCapabilities;
- (void)_invalidated:(unsigned long long)a0;
- (void)_removeCapabilityWithFlag:(unsigned long long)a0;
- (void)_reportEvent:(id)a0;
- (void)_reportEventType:(long long)a0;
- (void)_sandboxExtensionIssueMach;
- (void)_startExtension:(id)a0;
- (void)_startProcessMonitor:(int)a0;
- (void)_updateWithError:(id *)a0;
- (id)capabilitiesForFlags:(unsigned long long)a0;
- (id)capabilityWithSessionID:(id)a0;
- (id)initWithDevice:(id)a0 identity:(id)a1 type:(long long)a2;
- (void)launchCapabilitiesWithFlags:(unsigned long long)a0;
- (void)reportEventToExtension:(id)a0;
- (void)resumeCapabilitiesWithFlags:(unsigned long long)a0;
- (void)suspendCapabilitiesWithFlags:(unsigned long long)a0;

@end
