@class NSDictionary, HMFTimer, NSNotificationCenter, NSMutableArray, NSString, HMDCameraSignificantEventServer, NSMutableSet, HMDCameraRecordingManagerDependencyFactory, HMDCameraRecordingLoadBalancer, HMFMessageDispatcher, NSObject, NSSet, HMDCameraProfile, HMDCameraRecordingSession, HMDHAPAccessory, HMDCameraRecordingSessionRetryContext, NSUUID, HMDCameraRecordingBulkSendSessionInitiator, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSettingsControl, HMDStreamDataChunkAssembler;
@protocol HMDDataStreamBulkSendSession, HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDCameraRecordingManager : HMFObject <HMDCameraRecordingSessionNotificationTriggerDelegate, HMDCameraRecordingSettingsControlDelegate, HMDDevicePreferenceDataSource, HMFLogging, HMDCameraRecordingSessionDelegate, HMDHomeMessageReceiver, HMDCameraClipManagerDelegate, HMFTimerDelegate>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain) HMDStreamDataChunkAssembler *dataChunkAssembler;
@property (readonly) NSString *logIdentifier;
@property (readonly) HMDCameraRecordingLoadBalancer *cameraLoadBalancer;
@property (readonly) NSDictionary *homePresenceByPairingIdentity;
@property BOOL didShutDown;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) HMDCameraSignificantEventServer *significantEventServer;
@property (readonly, copy) NSUUID *cameraUUID;
@property (readonly) long long bulkSendSessionReadTimeoutFactor;
@property (readonly) NSMutableArray *sessionStartRequests;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger;
@property (readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl;
@property (readonly) HMDCameraRecordingManagerDependencyFactory *dependencyFactory;
@property (readonly) HMFMessageDispatcher *msgDispatcher;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly, weak) HMDCameraProfile *camera;
@property (retain) id<HMDDataStreamBulkSendSession> currentBulkSendSession;
@property (readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator;
@property (retain) HMFTimer *readCallbackTimer;
@property (retain) HMFTimer *sessionRetryTimer;
@property (retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext;
@property (getter=isMotionActive) BOOL motionActive;
@property (retain) HMDCameraRecordingSession *currentRecordingSession;
@property (readonly) NSMutableSet *activeRecordingSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)_start;
- (void)_shutDown;
- (void)shutDown;
- (void)timerDidFire:(id)a0;
- (BOOL)supportsDeviceWithCapabilities:(id)a0;
- (id)initWithCamera:(id)a0 recordingManagementService:(id)a1 dependencyFactory:(id)a2 notificationCenter:(id)a3;
- (void)_resetRetryContextWithReason:(id)a0;
- (void)_coordinateRecordingSessionForTrigger:(unsigned long long)a0;
- (void)_clipManagerDidStartUpCloudZone;
- (void)_closeCurrentSessionsWithReason:(unsigned short)a0;
- (void)_processQueuedCameraRecordingSessionStartRequests;
- (void)_updateSessionRestoreRegistration;
- (void)handleStartRecordingSessionRequest:(id)a0;
- (void)handleCameraSettingsDidChangeNotification:(id)a0;
- (void)handleResidentDeviceUpdated:(id)a0;
- (id)bulkSendSessionOpenReasonWithError:(id *)a0;
- (void)_startRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2;
- (void)_forwardRecordingSessionForTrigger:(unsigned long long)a0 withLoadBalancerDecision:(id)a1 deviceFilter:(id /* block */)a2 sessionCoordinationLogEvent:(id)a3 retryAttemptNumber:(long long)a4;
- (void)_submitLoadBalancingEventWithDecision:(id)a0 numberOfRetries:(unsigned long long)a1;
- (void)_startRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1 reason:(id)a2 completionCallback:(id /* block */)a3;
- (void)_createRecordingSessionForTrigger:(unsigned long long)a0 homePresenceByPairingIdentity:(id)a1;
- (void)_resetCurrentRecordingSession:(id)a0;
- (void)_handleBulkSendSessionCreated:(id)a0;
- (void)_readDataForCurrentSession;
- (void)_handleDataReceived:(id)a0;
- (void)_startSessionRetryTimer;
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)a0;
- (void)notificationTrigger:(id)a0 didObserveTriggerType:(unsigned long long)a1 changeToActive:(BOOL)a2;
- (void)recordingSettingsControlDidConfigure:(id)a0;
- (void)recordingSettingsControlDidFailToConfigure:(id)a0;
- (void)session:(id)a0 didEndWithError:(id)a1;
- (void)clipManagerDidStartUpCloudZone:(id)a0;
- (void)clipManagerDidStop:(id)a0;
- (id)initWithCamera:(id)a0 recordingManagementService:(id)a1;

@end
