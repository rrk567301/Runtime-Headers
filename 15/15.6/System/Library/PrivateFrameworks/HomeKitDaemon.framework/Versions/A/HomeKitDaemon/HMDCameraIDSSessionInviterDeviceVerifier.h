@class NSString, HMDDevice;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject <HMFLogging>

@property (readonly) NSString *sessionID;
@property (readonly) HMDDevice *expectedInviter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (char)canAcceptInvitationForSessionWithIdentifier:(id)a0;
- (char)canAcceptInvitationFromDeviceWithHandle:(id)a0;
- (id)initWithSessionID:(id)a0 expectedInviter:(id)a1;

@end
