@class HMDHomeManager, HMISystemResourceUsageMonitor, NSMutableDictionary, HMFPreferences, NSString;

@interface HMDCameraRecordingLoadBalancer : HMFObject <HMFLogging, HMISystemResourceUsageMonitorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) HMDHomeManager *homeManager;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property (readonly) NSMutableDictionary *recordingSessionSummariesByCameraUUIDString;
@property (readonly) NSMutableDictionary *readyToRecordByCameraUUIDString;
@property (readonly) NSMutableDictionary *pendingDecisionsByCameraUUIDByDeviceUUID;
@property (readonly) NSMutableDictionary *lastDecisionByCameraUUID;
@property unsigned long long numberOfActiveRecordingSessions;
@property unsigned long long maxNumberOfAnalyzers;
@property (retain, nonatomic) HMFPreferences *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)handleResidentMeshInitialized:(id)a0;
- (void)start;
- (void)handleProcessedDecision:(id)a0;
- (void)_updateReadyToRecordMetric;
- (void)handleRecordingSessionForwardingFailureForDecision:(id)a0;
- (void)removeDataForCameraWithUUID:(id)a0;
- (id)makeLoadBalancingDecisionForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (id)_makeLoadBalancingDecisionForCamera:(id)a0 deviceFilter:(id /* block */)a1;
- (void)handleRecordingSessionForwardingSuccessForDecision:(id)a0;
- (id)initWithHomeManager:(id)a0 resourceUsageMonitor:(id)a1;
- (void)setReadyToRecord:(BOOL)a0 forCameraWithUUID:(id)a1;
- (void)recordingDidStartForCameraWithUUID:(id)a0;
- (void)recordingDidEndForCameraWithUUID:(id)a0;
- (id)_loadBalancingDescriptionFromSortedNodes:(id)a0 limit:(unsigned long long)a1;
- (id)_formattedDescriptionForNode:(id)a0;
- (void)systemResourceUsageDidUpdate:(long long)a0 maxNumberOfAnalyzers:(unsigned long long)a1 maxAnalysisFPS:(float)a2;
- (BOOL)isReadyToRecordForCameraWithUUID:(id)a0;
- (void).cxx_destruct;

@end
