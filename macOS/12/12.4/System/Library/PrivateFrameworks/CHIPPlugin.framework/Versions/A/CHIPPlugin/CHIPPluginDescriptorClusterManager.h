@interface CHIPPluginDescriptorClusterManager : HMFObject

+ (id)sharedManager;
+ (id)logCategory;

- (id)logIdentifier;
- (void)fetchHAPServicesForEndpoints:(id)a0 endpointDeviceTypes:(id)a1 device:(id)a2 nodeId:(id)a3 storage:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchDeviceTypesForEndpoints:(id)a0 device:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchEndpointsForDevice:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)_buildClustersInUseDictWithClustersInUse:(id)a0;
- (id)hapServiceDescriptionForServiceType:(id)a0 clustersInUse:(id)a1 endpoint:(id)a2 hapToCHIPClusterMapping:(id)a3;
- (void)fetchDeviceTypesForDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)a0 deviceTopology:(id)a1 accessoryInfo:(id)a2 hapToCHIPClusterMapping:(id)a3 device:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchHAPServicesForCHIPDevice:(id)a0 nodeId:(id)a1 storage:(id)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)hapServiceDescriptionsForTopology:(id)a0;

@end
