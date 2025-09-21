@class HMBLocalZone, HMFMessageDispatcher, NSUUID, HMDHome, NSString, NSObject, HMBCloudZone;
@protocol OS_dispatch_queue, HMDCameraClipFeedbackUploader;

@interface HMDCameraClipFeedbackManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMBCloudZone *cloudZone;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) id<HMDCameraClipFeedbackUploader> feedbackUploader;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (weak) HMDHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_uploadNextClipFromQueryResult:(id)a0;
- (void)_findAndUploadSubmittedClips;
- (void)_handleFindAndUploadSubmittedClipsMessage:(id)a0;
- (void)_handleSubmitClipsMessage:(id)a0;
- (void)_notifyPrimaryResidentThatClipsWereSubmitted;
- (id)_performCloudPull;
- (void)configureWithIsCurrentDeviceResidentCapable:(char)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (id)initWithLocalZone:(id)a0 cloudZone:(id)a1 home:(id)a2 messageDispatcher:(id)a3 cameraProfileUUID:(id)a4 messageTargetUUID:(id)a5 workQueue:(id)a6;
- (id)initWithLocalZone:(id)a0 cloudZone:(id)a1 home:(id)a2 messageDispatcher:(id)a3 cameraProfileUUID:(id)a4 messageTargetUUID:(id)a5 workQueue:(id)a6 feedbackUploader:(id)a7;
- (char)isCurrentDeviceConfirmedPrimaryResident;

@end
