@class NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface SafeguardsManagingClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property BOOL interrupted;
@property BOOL featureEnabled;
@property (retain) NSObject<OS_os_log> *logger;

- (id)init;
- (void).cxx_destruct;
- (id)getDefaults:(id *)a0;
- (id)getPenaltyList:(id *)a0;
- (BOOL)clearMitigationRecordsWithError:(id *)a0;
- (BOOL)clearTargetProcessWithError:(id *)a0;
- (BOOL)forceCPUViolationForProcess:(id)a0 error:(id *)a1;
- (BOOL)forceDetectionWithStartTime:(id)a0 endTime:(id)a1 error:(id *)a2;
- (BOOL)forceDetectorViolationForProcess:(id)a0 error:(id *)a1;
- (BOOL)forceMidnightRoutine:(id *)a0;
- (BOOL)forceMitigation:(id)a0 forProcess:(id)a1 withPercentage:(id)a2 withSeconds:(id)a3 withPenaltyBoxDuration:(id)a4 error:(id *)a5;
- (id)getActiveScenarios:(id *)a0;
- (BOOL)getCpuPercentageTriggerForWindowEndDate:(id)a0 windowStartDate:(id)a1 crossedThreshold:(BOOL *)a2 score:(double *)a3 error:(id *)a4;
- (id)getInfoForProcess:(id)a0 error:(id *)a1;
- (id)getMaxRelaunchPollingInterval:(id *)a0;
- (id)getMitigationPolicy:(id *)a0;
- (id)getMonitoredList:(id *)a0;
- (id)getPollingInterval:(id *)a0;
- (id)getProcessesAffectedByScenarioMapWithError:(id *)a0;
- (id)getRelaunchPollingInterval:(id *)a0;
- (id)getRestrictionsForProcess:(id)a0 forScenario:(id)a1 withError:(id *)a2;
- (id)getScenarioRefreshInterval:(id *)a0;
- (id)getScenarios:(id *)a0;
- (id)getTargetProcess:(id *)a0;
- (id)getTargetProcessMitigationRecords:(id *)a0;
- (id)getTriggerInterval:(id *)a0;
- (void)reportScheduledIntensiveWorkByProcesses:(id)a0;
- (BOOL)resetRuleParameters:(id)a0 error:(id *)a1;
- (BOOL)sendCoalitionEntries:(id)a0 error:(id *)a1;
- (BOOL)setContextForIdentifier:(id)a0 withState:(id)a1 error:(id *)a2;
- (BOOL)setDefaultsWithMaxFatalCount:(id)a0 withMaxNonFatal:(id)a1 withEnableMitigations:(id)a2 withEnablePenaltyBox:(id)a3 withPercentage:(id)a4 withSeconds:(id)a5 withPenaltyBoxDuration:(id)a6 withMitigationsPluggedIn:(id)a7 withMitigateXPCServices:(id)a8 error:(id *)a9;
- (BOOL)setInfoForProcess:(id)a0 withFatalCount:(id)a1 withNonFatalCount:(id)a2 withExitCount:(id)a3 withPenaltyCount:(id)a4 withPolicyMask:(id)a5 error:(id *)a6;
- (BOOL)setMaxRelaunchPollingInterval:(id)a0 error:(id *)a1;
- (BOOL)setPollingInterval:(id)a0 error:(id *)a1;
- (BOOL)setRelaunchPollingInterval:(id)a0 error:(id *)a1;
- (BOOL)setRestrictionsByProcessPerScenario:(id)a0 error:(id *)a1;
- (BOOL)setRuleParameters:(id)a0 withWindowSize:(id)a1 withStepSize:(id)a2 withMaxLookback:(id)a3 withDaemonOnly:(id)a4 error:(id *)a5;
- (BOOL)setScenarioRefreshInterval:(id)a0 error:(id *)a1;
- (BOOL)setTargetProcessMitigationRecords:(id)a0 withError:(id *)a1;
- (BOOL)setTargetProcessTo:(id)a0 withPercentage:(id)a1 withSeconds:(id)a2 withPenaltyBoxDuration:(id)a3 error:(id *)a4;
- (BOOL)setTriggerInterval:(id)a0 error:(id *)a1;

@end
