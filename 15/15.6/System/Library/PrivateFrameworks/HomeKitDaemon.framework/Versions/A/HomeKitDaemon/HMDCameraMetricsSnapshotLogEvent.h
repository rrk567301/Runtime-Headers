@class NSNumber;

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent

@property (readonly, nonatomic) char snapshotForNotification;
@property (retain, nonatomic) NSNumber *referenceTimestamp;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(char)a2 snapshotForNotification:(char)a3;

@end
