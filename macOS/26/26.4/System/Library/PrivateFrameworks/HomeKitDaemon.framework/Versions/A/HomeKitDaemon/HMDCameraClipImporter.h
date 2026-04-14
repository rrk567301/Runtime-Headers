@class HMDCameraProfile, NSString, NSObject;
@protocol OS_dispatch_queue, HMDCameraRecordingSessionFactory;

@interface HMDCameraClipImporter : HMFObject <HMFLogging>

@property (readonly, weak) HMDCameraProfile *cameraProfile;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDCameraRecordingSessionFactory> factory;
@property (readonly) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;
- (id)importClipsWithImportData:(id)a0;

@end
