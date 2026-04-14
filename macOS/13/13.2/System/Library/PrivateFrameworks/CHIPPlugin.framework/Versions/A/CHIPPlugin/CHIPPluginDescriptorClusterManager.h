@interface CHIPPluginDescriptorClusterManager : HMFObject

+ (id)sharedManager;
+ (id)logCategory;

- (id)logIdentifier;
- (id)getBridgeEndpointsDeviceTypes:(id)a0 endpointDeviceTypes:(id)a1;
- (void)fetchHAPServicesForCHIPDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchHAPCategoryForCHIPDevice:(id)a0 nodeId:(id)a1 server:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassName:(id)a3 completionHandler:(id /* block */)a4;
- (void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)a0 device:(id)a1 callbackQueue:(id)a2 clusterClassToQueryForFeatureMap:(id)a3 hapServicesToCheckForFeatureMap:(id)a4 deviceTopology:(id)a5 bridgeAggregateNodeEndpoint:(id)a6 lastError:(id)a7 completionHandler:(id /* block */)a8;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)a0 deviceTopology:(id)a1 accessoryInfo:(id)a2 hapToCHIPClusterMappingArray:(id)a3 device:(id)a4 isABridge:(BOOL)a5 bridgeAggregateNodeEndpoint:(id)a6 isAComposedDevice:(BOOL)a7 callbackQueue:(id)a8 completionHandler:(id /* block */)a9;
- (void)_removeDisabledCharacteristicsFromServiceDescription:(id)a0 endpoint:(id)a1 topology:(id)a2;
- (id)hapServiceDescriptionsForTopology:(id)a0 namesDictionary:(id)a1;
- (id)_buildClustersInUseDictWithClustersInUse:(id)a0;
- (id)hapServiceDescriptionForServiceType:(id)a0 clustersInUse:(id)a1 endpoint:(id)a2 name:(id)a3 hapToCHIPClusterMappingArray:(id)a4 clusterClassToQueryForFeatureMap:(id)a5 hapServicesToCheckForFeatureMap:(id)a6;
- (void)fetchDeviceTypesForEndpoints:(id)a0 device:(id)a1 endpointDeviceTypes:(id)a2 lastError:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchHAPServicesForEndpoints:(id)a0 endpointDeviceTypes:(id)a1 device:(id)a2 nodeId:(id)a3 isABridge:(BOOL)a4 bridgeAggregateNodeEndpoint:(id)a5 server:(id)a6 topology:(id)a7 hapAccessoryInfo:(id)a8 callbackQueue:(id)a9 completionHandler:(id /* block */)a10;
- (void)fetchEndpointsForDevice:(id)a0 endpointID:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchDeviceTypesForDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)endpointForClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)runBlockForAllEndpointsWithClusterID:(id)a0 device:(id)a1 callbackQueue:(id)a2 block:(id /* block */)a3;
- (void)_queryEndpointsForClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_runBlockForAllEndpointsWithClusterID:(id)a0 endpoints:(id)a1 device:(id)a2 callbackQueue:(id)a3 finishedRunningAllBlocksPromise:(id)a4 block:(id /* block */)a5;

@end
