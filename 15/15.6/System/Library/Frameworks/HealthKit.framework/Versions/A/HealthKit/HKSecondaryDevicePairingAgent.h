@class NSString, HKHealthStore, HKTaskServerProxyProvider, NSUUID;

@interface HKSecondaryDevicePairingAgent : NSObject <_HKXPCExportable> {
    HKHealthStore *_healthStore;
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)performEndToEndCloudSyncWithNRDeviceUUID:(id)a0 syncParticipantFirst:(char)a1 completion:(id /* block */)a2;
- (void)requestTinkerSharingOptInWithGuardianDisplayName:(id)a0 NRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)a0 completion:(id /* block */)a1;

@end
