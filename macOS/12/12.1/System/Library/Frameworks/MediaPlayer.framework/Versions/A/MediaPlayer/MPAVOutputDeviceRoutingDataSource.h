@class AVRoutingSessionManager, MPAVEndpointRoute, MRAVOutputDevice, NSString, MRAVEndpoint, MRAVRoutingDiscoverySessionConfiguration, NSArray, NSObject, MRAVRoutingDiscoverySession, MPMRAVOutputContextWrapper;
@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_discoverySessionQueue;
    BOOL _attemptedToInitializeAppOutputContext;
    id _companionCallbackToken;
    BOOL _didFindCompanion;
    id _callbackToken;
    BOOL _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    BOOL _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
    BOOL _didFinishLoading;
    unsigned int _targetSessionID;
    long long _discoveryMode;
}

@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *companionDiscoverySession;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (nonatomic) BOOL didFinishLoading;
@property (readonly, nonatomic) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (retain, nonatomic) MRAVOutputDevice *predictedDevice;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) BOOL supportsMultipleSelection;
@property (nonatomic) BOOL detachesRoutesToGroup;
@property (nonatomic) BOOL supportsQueueHandoff;
@property (copy, nonatomic) NSString *presentingAppBundleID;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) BOOL supportsRoutePrediction;

+ (id)_globalAudioSessionLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (long long)discoveryMode;
- (BOOL)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)a0;
- (id)_stateDumpObject;
- (id)getRoutesForCategory:(id)a0;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)_routeStatusDidChangeNotification:(id)a0;
- (void)setTargetSessionID:(unsigned int)a0;
- (void)setPickedRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (unsigned int)targetSessionID;
- (id)initWithEndpointRoute:(id)a0;
- (id)_initWithEndpointRoute:(id)a0;
- (id)routingSessionManager;
- (void)createGroupFromOutputDevices:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)addRouteToGroup:(id)a0 completion:(id /* block */)a1;
- (void)addRoutesToGroup:(id)a0 completion:(id /* block */)a1;
- (void)removeRouteFromGroup:(id)a0 completion:(id /* block */)a1;
- (void)removeRoutesFromGroup:(id)a0 completion:(id /* block */)a1;
- (void)_endpointsDidChangeNotification:(id)a0;
- (void)_outputDevicesDidChangeNotification:(id)a0;
- (id)outputDevicesForRoutes:(id)a0;
- (id)_detachableDevicesInOutputDevices:(id)a0;
- (BOOL)_shouldDetachOutputDevicesToGroup:(id)a0;
- (BOOL)_shouldAddPredictedDeviceToOuputDevices:(id)a0;
- (BOOL)_isRemovingPredictedDevice:(id)a0;
- (void)_personalRoutesDidChange;
- (void)_outputDevicesDidChange:(id)a0;
- (id)_outputDeviceRouteWithUID:(id)a0;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(BOOL)a0;
- (void)_generateDiscoverySession;
- (void)_resetPredictedOutputDevice;

@end
