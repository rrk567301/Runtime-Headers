@class MRRateLimiter, NSArray, NSSet, NSString, AVOutputDeviceDiscoverySession, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, MRActivityTracker;

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
    id<MRActivityTracker> _discoveryTracker;
}

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *allowList;
@property (readonly, nonatomic) NSArray *denyList;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (retain, nonatomic) NSSet *lastReportedClientIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTargetAudioSessionID:(unsigned int)a0;
- (void)setRoutingContextUID:(id)a0;
- (void)_onReloadQueue_reload;
- (id)routingContextUID;
- (unsigned int)targetAudioSessionID;
- (unsigned int)endpointFeatures;
- (unsigned int)discoveryMode;
- (void)clusterController:(id)a0 clusterTypeDidChange:(unsigned int)a1;
- (id)availableOutputDevices;
- (void)setDiscoveryMode:(unsigned int)a0;
- (void)setAvailableOutputDevices:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setOnlyDiscoversBluetoothDevices:(BOOL)a0;
- (BOOL)onlyDiscoversBluetoothDevices;
- (void)setDiscoveryMode:(unsigned int)a0 forClientIdentifiers:(id)a1;
- (BOOL)devicePresenceDetected;
- (void).cxx_destruct;
- (void)_loadDefaults;
- (id)availableEndpoints;
- (id)_onReloadQueue_createOutputDevicesFromAVOutputDevices:(id)a0;
- (id)_onReloadQueue_fetchOutputDevicesFromDiscoverySession:(id)a0;
- (void)_scheduleReload;
- (id)_onReloadQueue_reloadAvailableOutputDevices;
- (void)_deviceInfoDidChange:(id)a0;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (id)initWithConfiguration:(id)a0;

@end
