@class HMDCameraSessionID, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMMHomeLogEvent

@property (readonly, nonatomic) HMDCameraSessionID *sessionID;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) char isLocal;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(char)a2;

@end
