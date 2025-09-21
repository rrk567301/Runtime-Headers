@class NSMutableArray, NSMutableDictionary, CSPowerlogDBReader, CSProcessManager, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface CSMitigationManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain, nonatomic) CSProcessManager *processManager;
@property (retain) CSPowerlogDBReader *powerlogDBReader;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *penaltyBoxTimer;
@property (nonatomic) long long penaltyBoxTimerRunning;
@property (nonatomic) int penaltyBoxPolicy;
@property int trialsMitigationsEnabled;
@property (retain, nonatomic) NSMutableArray *affectedProcesses;
@property (nonatomic) BOOL penaltyBoxEnabled;
@property (retain, nonatomic) NSMutableDictionary *penaltyBoxProcesses;

+ (id)sharedInstance;

- (void)resetState;
- (id)_init;
- (void)dayChangedNotificationReceived:(id)a0;
- (void)registerForDayChangedNotification;
- (void).cxx_destruct;
- (void)midnightRoutine;
- (void)checkForTrials;
- (BOOL)checkKnownViolationByProcess:(id)a0 withStartTime:(double)a1 withEndTime:(double)a2;
- (void)checkOverridesForProcess:(id)a0 penaltyBoxDuration:(long long *)a1 cpuThreshold:(long long *)a2 timeWindow:(long long *)a3;
- (void)checkPenaltyBoxProcessesExpiration;
- (BOOL)checkPenaltyBoxProcessesLifecycle:(id)a0 withMitigationReason:(unsigned char)a1;
- (void)clearTargetProcessState;
- (unsigned char)decideMitigation:(id)a0 withCoalitionName:(id)a1 withReason:(unsigned char *)a2;
- (void)forceCPUViolationForProcess:(id)a0 withHandler:(id /* block */)a1;
- (void)forceMitigation:(id)a0 forProcess:(id)a1 withPercentage:(id)a2 withSeconds:(id)a3 withPenaltyBoxDuration:(id)a4 withHandler:(id /* block */)a5;
- (void)generateIPSFileForProcess:(id)a0;
- (void)getMitigationTypeString:(char *)a0 withStringSize:(unsigned long long)a1 withMitigationType:(long long)a2 withPenaltyBoxEndTime:(unsigned long long)a3;
- (id)getProcessPathForPID:(int)a0;
- (void)handleCPUDetectionViolation:(id)a0 coalitionID:(unsigned long long)a1 pid:(unsigned long long)a2 endTime:(struct mach_timespec { unsigned int x0; int x1; })a3 observedValue:(long long)a4 observationWindow:(long long)a5 limitValue:(long long)a6 limitWindow:(long long)a7 fatal:(BOOL)a8;
- (void)handleDetectionViolation:(unsigned char)a0 forCSProcess:(id)a1 coalitionID:(unsigned long long)a2 coalitionName:(id)a3 pid:(unsigned long long)a4 startTime:(double)a5 endTime:(double)a6 forcedMitigation:(unsigned char)a7 withMitigationDecisionType:(unsigned char *)a8 withMitigationDecisionReason:(unsigned char *)a9 withError:(id *)a10;
- (void)handleDetectorViolation:(id)a0;
- (void)handleProcessStart:(id)a0 withMitigationReason:(unsigned char)a1;
- (int)killProcess:(id)a0 pid:(unsigned long long)a1 coalitionID:(unsigned long long)a2 issueType:(unsigned char)a3 withMitigationDecisionType:(unsigned char *)a4 withMitigationDecisionReason:(unsigned char *)a5 withError:(id *)a6;
- (void)logCPUViolationToPowerLog:(id)a0 pid:(unsigned long long)a1 coalitionName:(id)a2 endTime:(struct mach_timespec { unsigned int x0; int x1; })a3 observedValue:(long long)a4 observationWindow:(long long)a5 limitValue:(long long)a6 limitWindow:(long long)a7 fatal:(BOOL)a8 mitigationType:(long long)a9 mitigationReason:(long long)a10 withError:(id)a11;
- (void)logCPUViolationToPowerLogWithPayload:(id)a0;
- (void)logMitigationAsSignpost:(id)a0 withPid:(unsigned long long)a1 withIssueType:(unsigned char)a2 withMitigationType:(unsigned char)a3 withReason:(unsigned char)a4 withPenaltyBoxEndTime:(unsigned long long)a5;
- (void)logMitigationToPowerLogForProcess:(id)a0 withPid:(int)a1 withCoalitionID:(unsigned long long)a2 withIssueType:(unsigned char)a3 withMitigationType:(unsigned char)a4 withReason:(unsigned char)a5;
- (void)logPenaltyBoxListAsSignposts;
- (long long)penaltyBoxDurationMinsForProcess:(id)a0;
- (BOOL)policyMitigationsEnabled;
- (int)putIntoPenaltyBoxForCSProcess:(id)a0 coalitionID:(unsigned long long)a1 withMitigationDecisionType:(unsigned char *)a2 withMitigationDecisionReason:(unsigned char *)a3 withError:(id *)a4;
- (void)removeAllProcessesFromPenaltyBox;
- (int)removeProcessFromPenaltyBox:(id)a0 forReason:(unsigned char)a1;

@end
