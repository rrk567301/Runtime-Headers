@interface CHIPPluginDescriptorClusterManager : NSObject

+ (id)sharedManager;

- (void)fetchDeviceTypesForDevice:(id)a0 atEndpoint:(id)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchHAPServicesAtCHIPEndpoint:(id)a0 possibleHAPServices:(id)a1 hapToCHIPClusterMapping:(id)a2 device:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)fetchEndpointsForDevice:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (id)hapServiceDescriptionForDescription:(id)a0 clustersInUse:(id)a1 endpoint:(id)a2 hapToCHIPClusterMapping:(id)a3;
- (void)fetchHAPServicesForHAPCategory:(id)a0 vid:(id)a1 pid:(id)a2 device:(id)a3 callbackQueue:(id)a4 completionHandler:(id /* block */)a5;

@end
