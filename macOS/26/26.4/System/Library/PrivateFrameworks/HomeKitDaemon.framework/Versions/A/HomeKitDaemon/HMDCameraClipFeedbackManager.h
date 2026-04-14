@class NSUUID, NSString, HMDHome, NSObject;
@protocol OS_dispatch_queue, HMDCameraClipFeedbackUploader, HMDCameraClipFeedbackManagerDelegate;

@interface HMDCameraClipFeedbackManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDHome *home;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) id<HMDCameraClipFeedbackUploader> feedbackUploader;
@property (weak) id<HMDCameraClipFeedbackManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_handleSubmitClipsMessage:(id)a0;
- (void)_submitClipsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)initWithHome:(id)a0 cameraProfileUUID:(id)a1 messageTargetUUID:(id)a2 workQueue:(id)a3;
- (id)initWithHome:(id)a0 cameraProfileUUID:(id)a1 messageTargetUUID:(id)a2 workQueue:(id)a3 feedbackUploader:(id)a4;

@end
