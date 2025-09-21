@class NSNumber;

@interface HMDCameraRecordingAnalysisNodeMetrics : HMFObject

@property (readonly, copy, nonatomic) NSNumber *maxNumberOfAnalyzers;
@property (readonly, copy, nonatomic) NSNumber *maxAnalysisFPS;
@property (readonly, nonatomic) long long remainingNumberOfAnalyzers;
@property (readonly, nonatomic, getter=hasActiveSessionWithCamera) BOOL activeSessionWithCamera;
@property (readonly, nonatomic, getter=hasPendingSessionWithCamera) BOOL pendingSessionWithCamera;
@property (readonly, nonatomic) long long systemResourceUsageLevel;
@property (readonly, nonatomic) unsigned long long numberOfActiveRecordingSessions;
@property (readonly, nonatomic) unsigned long long numberOfPendingRecordingSessions;
@property (readonly, nonatomic, getter=isResourceConstrained) BOOL resourceConstrained;
@property (readonly, nonatomic, getter=isB620InOdeon) BOOL b620InOdeon;
@property (readonly, nonatomic, getter=isReadyToRecord) BOOL readyToRecord;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (unsigned long long)_estimatedJobSlotsForResidentDevice:(id)a0 systemResourceUsageLevel:(long long)a1;
- (BOOL)_isDeviceB620InOdeonConfiguration:(id)a0;
- (id)initWithResidentDevice:(id)a0 cameraProfile:(id)a1 pendingDecisionsByCameraUUID:(id)a2 metrics:(id)a3;

@end
