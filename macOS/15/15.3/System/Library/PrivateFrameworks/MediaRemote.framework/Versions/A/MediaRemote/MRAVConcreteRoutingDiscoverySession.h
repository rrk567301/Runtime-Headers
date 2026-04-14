@class NSArray, NSSet, AVOutputDeviceDiscoverySession, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    AVOutputDeviceDiscoverySession *_avDiscoverySession;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    unsigned int _targetAudioSessionID;
    unsigned int _clientProvidedTargetAudioSessionID;
    NSString *_routingContextUID;
    NSArray *_availableOutputDevices;
}

@property (retain, nonatomic) NSArray *availableEndpoints;
@property (retain, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSArray *virtualOutputDevices;
@property (retain, nonatomic) NSSet *lastReportedClientIdentifiers;

- (id)debugDescription;
- (id)description;
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
- (void)_onQueue_reload;
- (void)_scheduleReload;
- (void)_availableOutputDevicesDidChangeNotification:(id)a0;
- (void)_deviceInfoDidChange:(id)a0;
- (id)_onQueue_reloadAvailableOutputDevices;
- (void)_scheduleAvailableOutputDevicesReload;
- (id)availableEndpoints;
- (unsigned int)endpointFeatures;
- (void)setAvailableOutputDevices:(id)a0;
- (void)setRoutingContextUID:(id)a0;
- (void)setTargetAudioSessionID:(unsigned int)a0;
- (unsigned int)targetAudioSessionID;

@end
