@class NSNumber;

@interface HMDCameraRecordingAnalysisNodeMetrics : HMFObject

@property (readonly, copy, nonatomic) NSNumber *maxNumberOfAnalyzers;
@property (readonly, copy, nonatomic) NSNumber *maxAnalysisFPS;
@property (readonly, nonatomic) long long remainingNumberOfAnalyzers;
@property (readonly, nonatomic, getter=hasActiveSessionWithCamera) BOOL activeSessionWithCamera;
@property (readonly, nonatomic, getter=hasPendingSessionWithCamera) BOOL pendingSessionWithCamera;
@property (readonly, nonatomic, getter=isDemotedForThisCamera) BOOL demotedForThisCamera;
@property (readonly, nonatomic) unsigned long long demotionCount;
@property (readonly, nonatomic) long long systemResourceUsageLevel;
@property (readonly, nonatomic) unsigned long long numberOfActiveRecordingSessions;
@property (readonly, nonatomic) unsigned long long numberOfPendingRecordingSessions;
@property (readonly, nonatomic, getter=isResourceConstrained) BOOL resourceConstrained;
@property (readonly, nonatomic, getter=isHomePodGeneration2InOdeon) BOOL homePodGeneration2InOdeon;
@property (readonly, nonatomic, getter=isReadyToRecord) BOOL readyToRecord;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)_estimatedJobSlotsForResidentDevice:(id)a0 systemResourceUsageLevel:(long long)a1;
- (BOOL)_isDeviceHomePodGeneration2InOdeonConfiguration:(id)a0;
- (id)initWithResidentDevice:(id)a0 cameraProfile:(id)a1 pendingDecisionsByCameraUUID:(id)a2 errorResultTrackerByCameraUUID:(id)a3 metrics:(id)a4;

@end
