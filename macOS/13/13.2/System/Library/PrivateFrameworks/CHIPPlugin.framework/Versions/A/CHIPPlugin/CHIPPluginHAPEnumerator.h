@interface CHIPPluginHAPEnumerator : HMFObject

+ (id)logCategory;

- (id)enumerateServicesFromServices:(id)a0 serviceDescriptionsDictionary:(id)a1 topology:(id)a2 nodeID:(id)a3 primaryAccessory:(id)a4 legacyInstanceIDAssignment:(BOOL)a5;
- (id)enumerateBridgedAccessoriesFromAccessories:(id)a0 serviceDescriptionsDictionary:(id)a1 namesDictionary:(id)a2 topology:(id)a3 server:(id)a4 legacyInstanceIDAssignment:(BOOL)a5;
- (void)_createHAPServicesFromServiceDescriptions:(id)a0 topology:(id)a1 nodeID:(id)a2 services:(out id)a3 startingServiceInstanceID:(inout long long *)a4 primaryAccessory:(id)a5;
- (id)_createBridgedHAPAccessoryWithServer:(id)a0 services:(id)a1 instanceId:(id)a2 endpointID:(id)a3;

@end
