@interface MRAVLightweightReconnaissanceSession : NSObject

@property (class, copy, nonatomic) id /* block */ searchEndpointsForOutputDeviceUIDImplementation;

@property (nonatomic) BOOL cachedDiscoveryEnabled;

- (void)searchEndpointsForString:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsWithPredicate:(id /* block */)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForMyGroupLeaderWithTimeout:(double)a0 reason:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)searchOutputDevices:(id)a0 reason:(id)a1 timeout:(double)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForOutputDeviceUID:(id)a0 timeout:(double)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchForOutputDevices:(id)a0 categories:(id)a1 timeout:(double)a2 details:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)searchEndpointsForGroupUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForRoutingContextUID:(id)a0 timeout:(double)a1 details:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForCompanionWithTimeout:(double)a0 reason:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)searchOutputDeviceUIDs:(id)a0 matchingPredicate:(id /* block */)a1 timeout:(double)a2 details:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (void)searchEndpointsForLeaderOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchEndpointsForRoutingContextUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchForLogicalOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (void)searchForOutputDeviceUID:(id)a0 timeout:(double)a1 reason:(id)a2 queue:(id)a3 completion:(id /* block */)a4;

@end
