@class _HMContext, NSUUID;

@interface HMAccessoryWiFiController : NSObject

@property (retain) _HMContext *context;
@property (readonly, copy) NSUUID *messageTargetUUID;

- (void).cxx_destruct;
- (void)scanAvailableNetworksWithCompletion:(id /* block */)a0;
- (void)queryWiFiNetworkWithCompletion:(id /* block */)a0;
- (void)_associateToNetworkWithSSID:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)_queryCurrentWiFiNetworkWithCompletion:(id /* block */)a0;
- (void)_scanAvailableNetworksWithCompletion:(id /* block */)a0;
- (void)associateToNetworkWithSSID:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccessory:(id)a0;
- (id)initWithContext:(id)a0 messageTargetUUID:(id)a1;
- (void)joinNetworkWithSSID:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)queryCurrentWiFiNetworkWithCompletion:(id /* block */)a0;
- (void)scanNetworksWithCompletion:(id /* block */)a0;

@end
