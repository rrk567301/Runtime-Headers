@class HMFPreferences;
@protocol HMMLogEventSubmitting;

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject

@property (readonly) HMFPreferences *preferences;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;

- (id)createSessionNotificationTrigger:(id)a0 workQueue:(id)a1;
- (id)createSettingsControl:(id)a0 accessory:(id)a1 managementService:(id)a2;
- (id)createBulkSendSessionInitiatorWithWorkQueue:(id)a0 accessory:(id)a1;
- (id)createFeaturesDataSource;
- (id)createSignificantEventServerWithWorkQueue:(id)a0 camera:(id)a1;
- (id)createRecordingSessionWithWorkQueue:(id)a0 camera:(id)a1 hapAccessory:(id)a2 home:(id)a3 configuredFragmentDuration:(double)a4 timelineManager:(id)a5 significantEventServer:(id)a6 homePresenceByPairingIdentity:(id)a7;
- (id)createTimerWithTimeInterval:(double)a0;
- (id)createRecordingSessionRetryContextWithWorkQueue:(id)a0 homePresenceByPairingIdentity:(id)a1;

@end
