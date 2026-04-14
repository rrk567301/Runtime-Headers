@class NSArray, NSSet, NSString, AVOutputDeviceDiscoverySession, NSObject, MRRateLimiter;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession <MRAVClusterObserver> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
    MRRateLimiter *_reloadRateLimiter;
}

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
- (id)availableOutputDevices;
- (BOOL)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (BOOL)onlyDiscoversBluetoothDevices;
- (void)setDiscoveryMode:(unsigned int)a0 forClientIdentifiers:(id)a1;
- (void)setOnlyDiscoversBluetoothDevices:(BOOL)a0;
- (void)_scheduleReload;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)_deviceInfoDidChange:(id)a0;
- (id)_onReloadQueue_createOutputDevicesFromAVOutputDevices:(id)a0;
- (id)_onReloadQueue_fetchOutputDevicesFromDiscoverySession:(id)a0;
- (void)_onReloadQueue_reload;
- (id)_onReloadQueue_reloadAvailableOutputDevices;
- (id)availableEndpoints;
- (void)clusterController:(id)a0 clusterTypeDidChange:(unsigned int)a1;
- (unsigned int)endpointFeatures;
- (void)setAvailableOutputDevices:(id)a0;
- (void)setRoutingContextUID:(id)a0;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (unsigned int)targetAudioSessionID;

@end
