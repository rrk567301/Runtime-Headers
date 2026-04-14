@class NSArray, NSSet, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_source;

@interface CSProcessManager : NSObject

@property (retain) NSObject<OS_os_log> *logger;
@property (retain) NSDictionary *processPoliciesDict;
@property (retain) NSSet *band95ProcessesSet;
@property (retain) NSSet *band80ProcessesSet;
@property (retain) NSMutableDictionary *allProcessesMap;
@property (retain) NSMutableDictionary *processNameIdentiferByName;
@property (retain) NSMutableSet *observers;
@property int monitorFilterBitMap;
@property (retain) NSObject<OS_dispatch_source> *pollingTimer;
@property BOOL pollingTimerActive;
@property float PIDPollingInterval;
@property float savedPIDPollingInterval;
@property (retain) NSObject<OS_dispatch_source> *relaunchPollingTimer;
@property BOOL relaunchPollingTimerActive;
@property float relaunchPollingIntervalS;
@property float relaunchPollingIntervalStartS;
@property float relaunchPollingIntervalMaxS;
@property float savedRelaunchPollingIntervalStartS;
@property (retain) NSMutableSet *relaunchPollingUUIDs;
@property (retain) NSMutableDictionary *currentPIDList;
@property (retain) NSMutableArray *powerlogRecords;
@property (retain) NSMutableArray *powerlogRecordsUUIDs;
@property (retain) NSArray *targetProcessRecords;
@property unsigned char pollPIDsCount;

+ (int)coalitionIDForPid:(int)a0 coalitionID:(unsigned long long *)a1;
+ (id)sharedInstanceWithEnrolledProcesses:(id)a0 andProcessPolicies:(id)a1 andBand95:(id)a2 andBand80:(id)a3;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)processForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)fullProcessNameForPid:(int)a0;
- (id)_initWithEnrolledProcesses:(id)a0 andProcessPolicies:(id)a1 andBand95:(id)a2 andBand80:(id)a3;
- (void)applyRecordsForProcess:(id)a0;
- (void)clearAllCounters;
- (void)clearMitigationRecords;
- (void)clearTargetProcessState;
- (int)discoverPidForProcessName:(id)a0 withError:(id *)a1;
- (BOOL)fillPIDDictionary:(id)a0;
- (id)getMaxRelaunchPollingInterval;
- (id)getMonitoredList;
- (unsigned char)getPollPIDsCount;
- (id)getPollingInterval;
- (id)getProcessForPID:(int)a0;
- (id)getProcessForProcessName:(id)a0;
- (id)getProcessForUUID:(id)a0;
- (id)getRelaunchPollingInterval;
- (id)getTargetProcessMitigationRecords;
- (id)identiferForName:(id)a0;
- (void)importMitigationRecords;
- (void)initRelaunchPollingTimer;
- (BOOL)isAppleXPCServiceWithRBS:(id)a0 andPID:(int)a1;
- (BOOL)isXPCServiceExempt:(id)a0 withIssueType:(unsigned char)a1;
- (void)modifyMaxRelaunchPollingInterval:(id)a0;
- (void)modifyPollingInterval:(id)a0;
- (void)modifyRelaunchPollingInterval:(id)a0;
- (BOOL)modifyTargetProcessMitigationRecords:(id)a0;
- (void)notifyObserversOfNewInstances:(id)a0;
- (void)pollPIDs;
- (void)pollPenaltyBoxProcessRelaunch;
- (id)processNameForIdentifier:(id)a0;
- (void)recordTerminationForPID:(int)a0;
- (void)registerForPenaltyBoxRelaunchPolling:(id)a0;
- (void)schedulePIDPolling;
- (void)unregisterAllForPenaltyBoxRelaunchPolling;
- (void)unregisterForPenaltyBoxRelaunchPolling:(id)a0;

@end
