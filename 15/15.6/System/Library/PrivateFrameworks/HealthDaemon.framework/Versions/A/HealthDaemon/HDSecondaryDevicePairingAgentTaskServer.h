@class HDSecondaryDevicePairingRequest, NSObject;
@protocol OS_dispatch_source;

@interface HDSecondaryDevicePairingAgentTaskServer : HDStandardTaskServer <HKSecondaryDevicePairingAgentServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_source> *_timeoutSource;
    char _taskDidTimeout;
    HDSecondaryDevicePairingRequest *_currentRequest;
}

@property (nonatomic) double tinkerSharingSetupTimeout;
@property (copy) id /* block */ unitTest_timeoutTriggered;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_fetchSharingStatusForCurrentAppleIDWithOwnerEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)remote_fetchSharingStatusWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)remote_performEndToEndCloudSyncWithNRDeviceUUID:(id)a0 syncParticipantFirst:(char)a1 completion:(id /* block */)a2;
- (void)remote_requestTinkerSharingOptInWithGuardianDisplayName:(id)a0 NRDeviceUUID:(id)a1 completion:(id /* block */)a2;
- (void)remote_setupHealthSharingForSecondaryPairedDeviceWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)remote_tearDownHealthSharingWithPairedGuardianWithCompletion:(id /* block */)a0;
- (void)remote_tearDownHealthSharingWithTinkerDeviceWithNRUUID:(id)a0 completion:(id /* block */)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
