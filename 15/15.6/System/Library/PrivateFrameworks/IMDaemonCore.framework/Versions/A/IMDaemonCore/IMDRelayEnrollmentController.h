@class NSArray, NSString, NSMutableDictionary, IMDService;
@protocol IMDRelayEnrollmentControllerServiceDelegate, IMDRelayEnrollmentControllerDispatchDelegate;

@interface IMDRelayEnrollmentController : NSObject <IMDRelayPushHandlerListener>

@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *pendingCodesToDevicesForApproval;
@property (readonly, nonatomic) id<IMDRelayEnrollmentControllerServiceDelegate> serviceDelegate;
@property (readonly, nonatomic) id<IMDRelayEnrollmentControllerDispatchDelegate> dispatchDelegate;
@property (readonly, nonatomic) char hasBeenRemoteApproved;

- (void)dealloc;
- (void).cxx_destruct;
- (void)enrollDeviceInSMSRelay:(id)a0;
- (void)enrollSelfDeviceInSMSRelay;
- (void)unEnrollDeviceInSMSRelay:(id)a0;
- (char)sendApprovalDisplayPinToDevice:(id)a0;
- (void)_addDeviceToChallengedSMSRelay:(id)a0;
- (void)_removeDeviceHasMICForSMSRelay:(id)a0;
- (void)_addDefaultPairedDeviceToAllowedSMSRelayList;
- (void)_addDeviceToAllowedSMSRelay:(id)a0 shouldSendApproval:(char)a1;
- (void)_addDeviceToIgnoredSMSRelay:(id)a0;
- (void)_addHSA2PairedDevicesToAllowedSMSRelayList;
- (id)_allowedDevicesforSMSRelay;
- (id)_allowedIDSDevicesforSMSRelay;
- (void)_approveSelfForSMSRelay;
- (char)_areiMessageAndiCloudAccountTheSame:(id)a0;
- (id)_bestAccountWithAlias:(id)a0;
- (id)_challengedDevicesforSMSRelay;
- (id)_challengedIDSDevicesforSMSRelay;
- (char)_deviceAllowedToDisableRelay:(id)a0;
- (void)_enableSMSRelayForDevice:(id)a0;
- (id)_ignoredDevicesforSMSRelay;
- (id)_ignoredIDSDevicesforSMSRelay;
- (char)_isDeviceATrustedHSA2Device:(id)a0;
- (void)_micEnabledStateDidChange:(id)a0;
- (void)_migrateSMSRelayForMICIfNeeded;
- (void)_noteDeviceHasMICForSMSRelay:(id)a0;
- (void)_removeDeviceFromAllowedSMSRelay:(id)a0;
- (void)_removeDeviceFromChallengedSMSRelay:(id)a0;
- (void)_removeDeviceFromIgnoredSMSRelay:(id)a0;
- (void)_sendPinCodeToDeviceAndPromptForResponse:(id)a0;
- (void)_shouldAutoEnableDevicesforSMSRelay:(id /* block */)a0;
- (void)handler:(id)a0 incomingDisplayPinCode:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 storageContext:(id)a7;
- (void)handler:(id)a0 incomingEnrollMeRequest:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 storageContext:(id)a7;
- (void)handler:(id)a0 incomingResponseForApproval:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 storageContext:(id)a7;
- (id)initWithServiceDelegate:(id)a0 dispatchDelegate:(id)a1;
- (unsigned long long)randomSixDigitCode;
- (void)sendApprovalEnrollMe;
- (void)sendApprovalResponseToDevice:(id)a0 enteredCorrectly:(char)a1 wasCancelled:(char)a2;
- (void)sendUnApproveToDevice:(id)a0 extraKeys:(id)a1;
- (void)setHasBeenRemoteApproved:(char)a0;

@end
