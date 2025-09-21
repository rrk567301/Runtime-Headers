@class NSXPCListenerEndpoint, AADeviceManager, NSMutableDictionary, AudioAccessoryDevice, NSXPCConnection, AAServicesDaemon, NSObject;
@protocol OS_dispatch_queue;

@interface AASystemStateMonitor : NSObject <AAServicesXPCClientInterface, NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _isSREnabled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _resetOngoing;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AADeviceManager *connectedDiscovery;
@property (retain, nonatomic) NSMutableDictionary *devicesMap;
@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) AAServicesDaemon *internalServicesDaemon;
@property (readonly, nonatomic) BOOL direct;
@property (readonly, copy, nonatomic) AudioAccessoryDevice *activeHRMDevice;
@property (readonly) BOOL isSystemEligibleForSiriHijack;
@property (copy) id /* block */ activeHRMDeviceChangedHandler;
@property (copy) id /* block */ aaDeviceConnectionChangedHandler;
@property (copy) id /* block */ aaDeviceRouteChangedHandler;
@property (copy) id /* block */ hrmCapableDeviceRoutedStateChangedHandler;
@property (copy) id /* block */ siriHijackEligibilityUpdatedHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)_ensureXPCStarted;
- (void)_invalidateDirect;
- (void)_interrupted;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)_reportError:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_activate:(BOOL)a0;
- (BOOL)isSystemContext;
- (char)fetchHealthKitDataWriteAllowedForDevice:(id)a0;
- (void)fetchPairedHRMDevices:(id /* block */)a0;
- (void)activeHRMDeviceChanged:(id)a0 withSREnabled:(BOOL)a1;
- (void)siriHijackEligibilityUpdated:(BOOL)a0;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)_connectedDeviceDiscoveryEnsureStarted;
- (void)_connectedDeviceDiscoveryEnsureStopped;
- (void)_connectedDeviceFound:(id)a0;
- (void)_connectedDeviceLost:(id)a0;
- (id)_deviceWithIdentifier:(id)a0;
- (void)aaDeviceConnectionChanged:(BOOL)a0 withAADevice:(id)a1;
- (void)aaDeviceRouteChanged:(BOOL)a0 withAADevice:(id)a1;
- (void)showFitEducationNotificationForDevice:(id)a0;

@end
