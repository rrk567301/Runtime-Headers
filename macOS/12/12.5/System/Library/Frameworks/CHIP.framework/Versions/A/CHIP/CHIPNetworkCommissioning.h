@interface CHIPNetworkCommissioning : CHIPCluster

@property (readonly) struct NetworkCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeMaxNetworksWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeNetworksWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeScanMaxTimeSecondsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeConnectMaxTimeSecondsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeInterfaceEnabledWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLastNetworkingStatusWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLastNetworkIDWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeLastConnectErrorValueWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)addOrUpdateThreadNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)addOrUpdateWiFiNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)reorderNetworkWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)scanNetworksWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeMaxNetworksWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeMaxNetworksWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeNetworksWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeNetworksWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeScanMaxTimeSecondsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeScanMaxTimeSecondsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeConnectMaxTimeSecondsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeConnectMaxTimeSecondsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeInterfaceEnabledWithCompletionHandler:(id /* block */)a0;
- (void)writeAttributeInterfaceEnabledWithValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeInterfaceEnabledWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeLastNetworkingStatusWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeLastNetworkingStatusWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeLastNetworkIDWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeLastNetworkIDWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeLastConnectErrorValueWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeLastConnectErrorValueWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
