@interface NDFCoreShim : NSObject {
    void /* unknown type, empty encoding */ ndfController;
    void /* unknown type, empty encoding */ deviceStateProcessor;
    void /* unknown type, empty encoding */ networkConfigProcessor;
    void /* unknown type, empty encoding */ networkStatusProcessor;
}

+ (id)sharedInstance;
+ (id)idsDeviceIdentifier;
+ (id)kHomeNetworkingCanReachPrimaryResident;
+ (id)kHomeNetworkingGroupUUID;
+ (id)kHomeNetworkingIsPrimaryResident;
+ (id)kHomeNetworkingNATCountV4;
+ (id)kHomeNetworkingNetSignatureV4;
+ (id)kHomeNetworkingNetSignatureV6;
+ (id)kHomeNetworkingSSIDObscured;

- (void)listNDFDeviceObjectsWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)pingEndpoints:(id)a0 reply:(id /* block */)a1;
- (void)networkRestrictsMulticastTrafficWithReply:(id /* block */)a0;
- (void)cleanupNDFDeviceRecordsWithReply:(id /* block */)a0;
- (void)sendMessage:(id)a0 toEndpoints:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)fetchNDFDeviceRecordsWithReply:(id /* block */)a0;
- (void)clientCheckInWithConnection:(id)a0;
- (void)clientHasActiveSubscription:(BOOL)a0 forConnection:(id)a1;
- (void)dnsServer:(id)a0 isResponding:(BOOL)a1;
- (void)noteBackhaulIsBroken:(BOOL)a0;
- (void)noteDNSAllOutWithServers:(id)a0;
- (void)noteDNSConfigurationWithServers:(id)a0 forWiFi:(BOOL)a1;
- (void)noteDeviceRecordUpdates:(id)a0 reply:(id /* block */)a1;
- (void)noteIPAddressAcquisitionFailed:(BOOL)a0 forInterface:(id)a1;
- (void)noteInterfaceOfInterest:(id)a0 isRemoved:(BOOL)a1;
- (void)noteWiFiIsDisassociated:(BOOL)a0;
- (void)sendArbitraryPayloadToDistributedSymptomsWithReply:(id /* block */)a0;
- (void)setupPersistentStorageWithCoordinator:(id)a0;
- (void)triggerSendPayloadToDistributedSymptomsWithInterval:(long long)a0 leeway:(long long)a1 reply:(id /* block */)a2;
- (void)updateDeviceWithStateDictionary:(id)a0 removalKeys:(id)a1;

@end
