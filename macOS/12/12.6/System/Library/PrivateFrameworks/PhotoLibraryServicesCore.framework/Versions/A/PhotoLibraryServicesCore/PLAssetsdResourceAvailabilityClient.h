@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient

- (id)sendVideoRequest:(id)a0 reply:(id /* block */)a1;
- (id)sendMakeResourceAvailableRequest:(id)a0 reply:(id /* block */)a1;
- (id)sendResourceRepairRequest:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;
- (id)sendResourceRepairRequestForAsset:(id)a0 errorCodes:(id)a1 reply:(id /* block */)a2;
- (void)sendMakeResourceUnavailableRequest:(id)a0;
- (void)setSharedMemoryForCacheMetricsCollector:(id)a0;

@end
