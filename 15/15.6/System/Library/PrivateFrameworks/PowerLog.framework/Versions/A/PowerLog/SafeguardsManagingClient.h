@class NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface SafeguardsManagingClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property char interrupted;
@property char featureEnabled;
@property (retain) NSObject<OS_os_log> *logger;

- (id)init;
- (void).cxx_destruct;
- (char)forceMitigation:(id)a0 forProcess:(id)a1 error:(id *)a2;
- (id)getActiveScenarios:(id *)a0;
- (id)getCountsForProcess:(id)a0 error:(id *)a1;
- (id)getPollingInterval:(id *)a0;
- (id)getProcessesAffectedByScenarioMapWithError:(id *)a0;
- (id)getRestrictionsForProcess:(id)a0 forScenario:(id)a1 withError:(id *)a2;
- (id)getScenarioRefreshInterval:(id *)a0;
- (id)getScenarios:(id *)a0;
- (id)getTargetProcess:(id *)a0;
- (void)reportScheduledIntensiveWorkByProcesses:(id)a0;
- (char)setPollingInterval:(id)a0 error:(id *)a1;
- (char)setProcessCountsFor:(id)a0 withFatalCount:(id)a1 withNonFatalCount:(id)a2 withExitCount:(id)a3 error:(id *)a4;
- (char)setRestrictionsByProcessPerScenario:(id)a0 error:(id *)a1;
- (char)setScenarioRefreshInterval:(id)a0 error:(id *)a1;
- (char)setTargetProcessTo:(id)a0 withPercentage:(id)a1 withSeconds:(id)a2 withLimit:(id)a3 error:(id *)a4;

@end
