@class MPAVEndpointRoute, MRAVOutputDevice, NSString, MRAVEndpoint, MRAVRoutingDiscoverySessionConfiguration, NSArray, NSObject, MRAVRoutingDiscoverySession, MPMRAVOutputContextWrapper;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_discoverySessionQueue;
    char _attemptedToInitializeAppOutputContext;
    id _companionCallbackToken;
    char _didFindCompanion;
    id _callbackToken;
    char _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    char _shouldSourceOutputDevicesFromAVODDS;
    char _didReceiveDiscoveryResults;
    unsigned int _targetSessionID;
    long long _discoveryMode;
}

@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *companionDiscoverySession;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) char didReceiveDiscoveryResults;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (retain, nonatomic) MRAVOutputDevice *predictedDevice;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) char supportsMultipleSelection;
@property (nonatomic) char detachesRoutesToGroup;
@property (nonatomic) char supportsQueueHandoff;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (retain, nonatomic) NSString *initiator;

+ (id)_globalAudioSessionLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)setDiscoveryMode:(long long)a0;
- (char)devicePresenceDetected;
- (long long)discoveryMode;
- (unsigned int)targetSessionID;
- (void)setTargetSessionID:(unsigned int)a0;
- (id)_stateDumpObject;
- (id)_detachableDevicesInOutputDevices:(id)a0;
- (void)_endpointsDidChangeNotification:(id)a0;
- (void)_generateDiscoverySession;
- (id)_initWithEndpointRoute:(id)a0;
- (char)_isRemovingPredictedDevice:(id)a0;
- (void)_onDiscoverySessionQueue_generateCompanionDiscoverySession;
- (void)_onDiscoverySessionQueue_generateDiscoverySession;
- (id)_outputDeviceRouteWithUID:(id)a0;
- (void)_outputDevicesDidChange:(id)a0;
- (void)_outputDevicesDidChangeNotification:(id)a0;
- (void)_personalRoutesDidChange;
- (void)_resetPredictedOutputDevice;
- (void)_routeStatusDidChangeNotification:(id)a0;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(char)a0;
- (char)_shouldAddPredictedDeviceToOuputDevices:(id)a0;
- (char)_shouldDetachOutputDevicesToGroup:(id)a0;
- (void)addRouteToGroup:(id)a0 completion:(id /* block */)a1;
- (void)addRoutesToGroup:(id)a0 completion:(id /* block */)a1;
- (void)createGroupFromOutputDevices:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)getRoutesForCategory:(id)a0;
- (id)initWithEndpointRoute:(id)a0;
- (id)outputDevicesForRoutes:(id)a0;
- (void)removeRouteFromGroup:(id)a0 completion:(id /* block */)a1;
- (void)removeRoutesFromGroup:(id)a0 completion:(id /* block */)a1;
- (char)routeIsLeaderOfEndpoint:(id)a0;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;

@end
