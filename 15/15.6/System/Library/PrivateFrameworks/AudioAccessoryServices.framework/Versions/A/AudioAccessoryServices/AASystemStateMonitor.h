@class NSXPCListenerEndpoint, AADeviceManager, NSMutableDictionary, NSXPCConnection, AAServicesDaemon, NSObject;
@protocol OS_dispatch_queue;

@interface AASystemStateMonitor : NSObject <NSSecureCoding> {
    char _activateCalled;
    id /* block */ _activateCompletion;
    char _invalidateCalled;
    char _invalidateDone;
    char _resetOngoing;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) AADeviceManager *connectedDiscovery;
@property (retain, nonatomic) NSMutableDictionary *devicesMap;
@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) AAServicesDaemon *internalServicesDaemon;
@property (readonly, nonatomic) char direct;
@property (copy) id /* block */ HRMCapableDeviceChangedHandler;
@property (readonly) char isHRMCapableDevicePresent;
@property (copy) id /* block */ aaDeviceConnectionChangedHandler;
@property (copy) id /* block */ aaDeviceRouteChangedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (void)_invalidateDirect;
- (char)isSystemContext;
- (void)_activate:(char)a0;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(char)a1;
- (void)_connectedDeviceDiscoveryEnsureStarted;
- (void)_connectedDeviceDiscoveryEnsureStopped;
- (void)_connectedDeviceFound:(id)a0;
- (void)_connectedDeviceLost:(id)a0;
- (void)aaDeviceConnectionChanged:(char)a0 withAADevice:(id)a1;
- (void)aaDeviceRouteChanged:(char)a0 withAADevice:(id)a1;

@end
