@interface CHIPOperationalCredentials : CHIPCluster

@property (readonly) struct OperationalCredentialsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct DeviceProxy *mDevice; unsigned short mEndpoint; struct Optional<unsigned short> { BOOL mHasValue; union Value { unsigned short mData; } mValue; } mGroupId; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mTimeout; } cppCluster;

+ (void)readAttributeServerGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClientGeneratedCommandListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeAttributeListWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeNOCsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeFabricsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeSupportedFabricsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCommissionedFabricsWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeTrustedRootCertificatesWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
+ (void)readAttributeCurrentFabricIndexWithAttributeCache:(id)a0 endpoint:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)getCluster;
- (void)readAttributeServerGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeServerGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeClientGeneratedCommandListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClientGeneratedCommandListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)addNOCWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)addTrustedRootCertificateWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)attestationRequestWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)CSRRequestWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)certificateChainRequestWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeFabricWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTrustedRootCertificateWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFabricLabelWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateNOCWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)readAttributeNOCsWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeNOCsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeFabricsWithParams:(id)a0 completionHandler:(id /* block */)a1;
- (void)subscribeAttributeFabricsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeSupportedFabricsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeSupportedFabricsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeCommissionedFabricsWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCommissionedFabricsWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeTrustedRootCertificatesWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeTrustedRootCertificatesWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;
- (void)readAttributeCurrentFabricIndexWithCompletionHandler:(id /* block */)a0;
- (void)subscribeAttributeCurrentFabricIndexWithMinInterval:(id)a0 maxInterval:(id)a1 params:(id)a2 subscriptionEstablished:(id /* block */)a3 reportHandler:(id /* block */)a4;

@end
