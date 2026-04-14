@class HMDCameraSessionInfo, HMDAccessory;

@interface HMDCameraMetricsLogEvent : HMMHomeLogEvent

@property (readonly, nonatomic) HMDCameraSessionInfo *cameraSessionInfo;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, getter=isLocal) BOOL local;
@property (readonly, getter=isRelayed) BOOL relayed;

- (void).cxx_destruct;
- (void)_addDurationsBetweenMilestones:(id)a0 toEvent:(id)a1;
- (void)_addFirstToLastDurationFromMilestones:(id)a0 toEvent:(id)a1;
- (id)_durationBetweenMilestone1:(id)a0 andMilestone2:(id)a1 index:(id)a2;
- (id)_milestonesSortedByTimestamp;
- (id)initWithSessionInfo:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 isRelayed:(BOOL)a3;

@end
