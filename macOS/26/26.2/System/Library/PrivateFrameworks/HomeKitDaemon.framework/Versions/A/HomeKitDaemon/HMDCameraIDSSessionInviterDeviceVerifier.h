@class NSUUID, HMDDevice, NSString;

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject <HMFLogging>

@property (readonly) NSUUID *sessionUUID;
@property (readonly) HMDDevice *expectedInviter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)canAcceptInvitationForSessionWithUUID:(id)a0;
- (BOOL)canAcceptInvitationFromDeviceWithHandle:(id)a0;
- (id)initWithSessionUUID:(id)a0 expectedInviter:(id)a1;

@end
