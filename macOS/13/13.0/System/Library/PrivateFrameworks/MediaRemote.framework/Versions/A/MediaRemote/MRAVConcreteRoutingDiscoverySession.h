@class MRCompanionConnectionController, NSArray, NSSet, NSString, AVOutputDeviceDiscoverySession, NSObject, MRAVRoutingDiscoverySession;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    MRAVRoutingDiscoverySession *_companionDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    BOOL _hasRegisteredForExpanseMonitoring;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    int _airplayActiveNotificationToken;
    BOOL _isLocalDeviceBeingAirplayedTo;
    MRCompanionConnectionController *_companionController;
    MRAVRoutingDiscoverySession *_externalDiscoverySession;
    id _externalDiscoverySessionToken;
}

@property (class, retain, nonatomic) NSArray *daemonVirtualDevices;

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (retain, nonatomic) NSSet *lastReportedClientIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)a0;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (void)setDiscoveryMode:(unsigned int)a0 forClientIdentifiers:(id)a1;
- (id)availableOutputDevices;
- (void)setRoutingContextUID:(id)a0;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (unsigned int)targetAudioSessionID;
- (void)_deviceInfoDidChange:(id)a0;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)controller:(id)a0 didDiscoverCompanion:(id)a1;
- (void)controllerDidUndiscoverCompanion:(id)a0;
- (BOOL)_shouldUseStandaloneDiscovery;
- (void)_setupStandaloneDiscovery;
- (void)_setupProxiedDiscoveryWithDestinationEndpoint:(id)a0;
- (void)setAvailableOutputDevices:(id)a0;
- (void)_onQueue_reload;
- (id)_onQueue_reloadAvailableOutputDevices;
- (void)_scheduleReload;
- (void)_scheduleAvailableOutputDevicesReload;

@end
