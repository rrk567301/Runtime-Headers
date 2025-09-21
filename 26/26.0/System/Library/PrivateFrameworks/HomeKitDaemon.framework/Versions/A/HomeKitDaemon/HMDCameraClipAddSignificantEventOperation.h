@class HMDCameraRecordingSessionSignificantEvent;

@interface HMDCameraClipAddSignificantEventOperation : HMDCameraClipAddModelsOperation

@property (readonly, copy) HMDCameraRecordingSessionSignificantEvent *significantEvent;

+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 dataSource:(id)a3;
- (id)modelsToAdd;
- (void)updateMirrorOutputModel:(id)a0;

@end
