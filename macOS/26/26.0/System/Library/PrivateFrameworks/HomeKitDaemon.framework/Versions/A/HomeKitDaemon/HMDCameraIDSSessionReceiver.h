@class HMDCameraIDSSessionInviterDeviceVerifier, HMDApplicationVendorIDStore, NSString;
@protocol HMDIDSSession, HMDCameraIDSSessionReceiverDelegate;

@interface HMDCameraIDSSessionReceiver : HMDCameraIDSSessionHandler <HMDIDSSessionDelegate, HMDCameraRemoteStreamReceiverDestinationProtocol>

@property (readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (readonly, nonatomic) HMDApplicationVendorIDStore *applicationVendorIDStore;
@property (weak) id<HMDCameraIDSSessionReceiverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *remoteDestination;
@property (readonly) id<HMDIDSSession> idsSession;

+ (id)logCategory;

- (id)logIdentifier;
- (void)service:(id)a0 account:(id)a1 inviteReceivedForSession:(id)a2 fromID:(id)a3 withContext:(id)a4;
- (void).cxx_destruct;
- (void)sessionStarted:(id)a0;
- (void)sessionEnded:(id)a0 withReason:(unsigned int)a1 error:(id)a2;
- (void)_callSessionEndedWithError:(id)a0;
- (void)_callSessionSetup:(id)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 idsStreamService:(id)a2 sessionInviterDeviceVerifier:(id)a3 delegate:(id)a4 applicationVendorIDStore:(id)a5;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 sessionInviterDeviceVerifier:(id)a2 delegate:(id)a3;
- (void)setUpRemoteConnectionWithDevice:(id)a0;

@end
