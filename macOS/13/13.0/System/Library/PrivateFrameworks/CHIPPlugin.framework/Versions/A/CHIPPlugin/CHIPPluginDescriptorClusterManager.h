@interface CHIPPluginDescriptorClusterManager : HMFObject

+ (id)sharedManager;
+ (id)logCategory;

- (id)logIdentifier;
- (id)getBridgeEndpointsDeviceTypes:(id)a0 endpointDeviceTypes:(id)a1;
- (void)fetchHAPServicesForCHIPDevice:(id)a0 nodeId:(id)a1 storage:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassToQueryForFeatureMap:(id)a3 hapServicesToCheckForFeatureMap:(id)a4 deviceTopology:(id)a5 lastError:(id)a6 completionHandler:(id /* block */)a7;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)a0 deviceTopology:(id)a1 accessoryInfo:(id)a2 hapToCHIPClusterMappingArray:(id)a3 device:(id)a4 isABridge:(BOOL)a5 callbackQueue:(id)a6 completionHandler:(id /* block */)a7;
- (void)_removeDisabledCharacteristicsFromServiceDescription:(id)a0 endpoint:(id)a1 topology:(id)a2;
- (id)hapServiceDescriptionsForTopology:(id)a0;
- (id)_buildClustersInUseDictWithClustersInUse:(id)a0;
- (id)hapServiceDescriptionForServiceType:(id)a0 clustersInUse:(id)a1 endpoint:(id)a2 hapToCHIPClusterMappingArray:(id)a3 clusterClassToQueryForFeatureMap:(id)a4 hapServicesToCheckForFeatureMap:(id)a5;
- (void)fetchDeviceTypesForEndpoints:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 lastError:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchHAPServicesForEndpoints:(id)a0 endpointDeviceTypes:(id)a1 device:(id)a2 nodeId:(id)a3 isABridge:(BOOL)a4 storage:(id)a5 topology:(id)a6 hapAccessoryInfo:(id)a7 lastError:(id)a8 callbackQueue:(id)a9 completionHandler:(id /* block */)a10;
- (void)fetchEndpointsForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchDeviceTypesForDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)endpointForClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_queryEndpointsForClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;

@end
