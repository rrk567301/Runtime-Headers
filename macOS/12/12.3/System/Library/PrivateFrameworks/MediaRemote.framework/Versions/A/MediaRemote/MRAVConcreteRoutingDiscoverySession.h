@class MRCompanionConnectionController, NSArray, MRAVOutputDevice, NSString, AVOutputDeviceDiscoverySession, NSObject, MRAVRoutingDiscoverySession;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRCompanionConnectionControllerDelegate, MRExpanseManagerObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    MRAVRoutingDiscoverySession *_idsDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    BOOL _hasClientProvidedTargetAudioSessionID;
    BOOL _hasRegisteredForExpanseMonitoring;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    BOOL _scheduledAvailableOutputDevicesReload;
    MRCompanionConnectionController *_companionController;
    MRAVRoutingDiscoverySession *_companionDiscoverySession;
}

@property (class, retain, nonatomic) NSArray *daemonVirtualDevices;

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (retain, nonatomic) NSArray *unclusteredOutputDevices;
@property (retain, nonatomic) MRAVOutputDevice *unclusteredLocalOutputDevice;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)routingContextUID;
- (unsigned int)discoveryMode;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(unsigned int)a0;
- (id)availableOutputDevices;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;
- (unsigned int)targetAudioSessionID;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (void)setRoutingContextUID:(id)a0;
- (void)controllerDidUndiscoverCompanion:(id)a0;
- (void)controller:(id)a0 didDiscoverCompanion:(id)a1;
- (void)_scheduleReload;
- (void)_deviceInfoDidChange:(id)a0;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)_onQueue_reload;
- (void)_scheduleAvailableOutputDevicesReload;
- (void)_onQueue_reloadAvailableOutputDevices;
- (id)_onQueue_reloadAvailableOutputDevicesFromDiscovery:(id)a0;
- (void)setAvailableOutputDevices:(id)a0;
- (BOOL)shouldUseDeviceInfoForLocalDevice;
- (BOOL)_shouldCreateClusterOutputDevices;

@end
