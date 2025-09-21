@class NSError, HMDCameraMetricsSnapshotLogEvent;

@interface HMDCameraSnapshotMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent;
@property (retain, nonatomic) NSError *error;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraAccessory:(id)a1 isLocal:(char)a2 snapshotForNotification:(char)a3;

@end
