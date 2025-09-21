@class HMDCameraRecordingAnalysisNode, NSUUID, NSDate, HMDDevice;

@interface HMDCameraRecordingLoadBalancerDecision : HMFObject

@property (readonly, copy) NSUUID *cameraUUID;
@property (readonly) long long numberOfAvailableDevices;
@property (readonly) long long totalNumberOfJobSlots;
@property (readonly) long long remainingNumberOfJobSlots;
@property (readonly) HMDCameraRecordingAnalysisNode *analysisNode;
@property (readonly, copy) NSUUID *deviceUUID;
@property (readonly, copy) NSDate *decisionDate;
@property (readonly) HMDDevice *deviceWithSessionToHandOff;
@property (readonly, getter=isExpired) BOOL expired;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCameraUUID:(id)a0 numberOfAvailableDevices:(long long)a1 totalNumberOfJobSlots:(long long)a2 remainingNumberOfJobSlots:(long long)a3 analysisNode:(id)a4 decisionDate:(id)a5 deviceWithSessionToHandOff:(id)a6;

@end
