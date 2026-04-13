@class NSArray, NSMutableDictionary, NSString, MRAVClusterController;

@interface MRAVConcreteRoutingDiscoverySession_APSync : MRAVConcreteRoutingDiscoverySession <MRAVClusterObserver> {
    NSArray *_availableEndpoints;
    id _virtualOutputDeviceNotificationToken;
    MRAVClusterController *_clusterController;
    BOOL _scheduledAvailableEndpointsReload;
}

@property (class, copy, nonatomic) id /* block */ externalDeviceForOutputDeviceUID;
@property (class, readonly, nonatomic) NSMutableDictionary *externalDeviceCache;

@property (readonly, nonatomic) NSArray *availableOutputDeviceGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)availableEndpoints;
- (void)clusterController:(id)a0 clusterStatusDidChange:(unsigned long long)a1;
- (void)_scheduleReload;
- (void)_onQueue_reload;
- (void)_onQueue_reloadAvailableOutputDevices;
- (id)initWithConfiguration:(id)a0 clusterController:(id)a1;
- (void)_availableEndpointsDidChangeNotification:(id)a0;
- (void)_virtualDevicesDidChangeNotification:(id)a0;
- (void)_externalDeviceConnectionStateDidChange:(id)a0;
- (void)_onQueue_reloadAvailableEndpoints;
- (void)_scheduleAvailableEndpointsReload;
- (BOOL)inferAvailableOutputDevices;
- (id)deduplicateAVODGroups:(id)a0;
- (void)_logAVODGroupsChangedFrom:(id)a0 toNewGroups:(id)a1;
- (void)setAvailableOutputDeviceGroups:(id)a0;
- (void)_onQueue_populateExternalDevice:(id)a0;
- (void)setAvailableEndpoints:(id)a0;

@end
