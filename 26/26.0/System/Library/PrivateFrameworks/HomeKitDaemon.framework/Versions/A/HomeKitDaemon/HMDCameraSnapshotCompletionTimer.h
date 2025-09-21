@class HMDCameraSnapshotSession;

@interface HMDCameraSnapshotCompletionTimer : HMFTimer

@property (readonly, weak) HMDCameraSnapshotSession *snapshotSession;

- (void).cxx_destruct;
- (id)initWithSnapshotSession:(id)a0 timeInterval:(double)a1;

@end
