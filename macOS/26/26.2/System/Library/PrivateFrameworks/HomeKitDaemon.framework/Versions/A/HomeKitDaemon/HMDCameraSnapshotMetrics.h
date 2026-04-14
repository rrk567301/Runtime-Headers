@class NSError, HMDCameraMetricsSnapshotLogEvent;

@interface HMDCameraSnapshotMetrics : HMFObject

@property (readonly, nonatomic) HMDCameraMetricsSnapshotLogEvent *cameraSnapshotMetricsLogEvent;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionInfo:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 isRelayed:(BOOL)a3 snapshotForNotification:(BOOL)a4;

@end
