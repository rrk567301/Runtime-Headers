@class NSMutableDictionary, NSSet, NSString, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, PPSMetricMonitorServiceDelegate;

@interface PPSMetricMonitorService : NSObject <PPSMetricMonitorServiceInterface, PPSMetricMonitorServiceHeadlessInterface, NSXPCListenerDelegate>

@property (retain) NSMutableDictionary *clients;
@property BOOL hasHeadlessClient;
@property unsigned long long previousMct;
@property unsigned long long networkingTrackPreviousMct;
@property unsigned long long previousGPUMct;
@property double updateInterval;
@property (retain) NSObject<OS_dispatch_queue> *metricQueryQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *headlessUpdateTimer;
@property (retain) NSDate *lastQueryDate;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *headlessTimeoutTimer;
@property (retain, nonatomic) NSMutableArray *sleepWakeHistory;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *processPollingRepeatingTimer;
@property (retain) NSMutableDictionary *headlessClientTrackedProcesses;
@property (retain) NSSet *postAccountingProcessesScreenState;
@property (retain) NSSet *postAccountingAudio;
@property (retain) NSDate *monitoredStartTime;
@property (weak, nonatomic) id<PPSMetricMonitorServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startXPCListener;
- (id)init;
- (void).cxx_destruct;
- (id)fullProcessNameForPid:(int)a0;
- (id)_findProcesses:(id)a0;
- (void)_addProcessesNeededForAccounting:(id)a0;
- (BOOL)_canStartMonitoringForClient:(id)a0 withError:(id *)a1;
- (void)_cancelHeadlessTimeoutTimer;
- (void)_cancelProcessPollingTimer;
- (void)_cancelQueryTimer;
- (id)_checkIfProcessesAreAlive:(id)a0;
- (void)_collectMetricsAndUpdateHeadlessClient;
- (void)_collectMetricsWithTimeout:(int)a0;
- (void)_collectMetricsWithTimeout:(int)a0 andUpdateClient:(id)a1;
- (void)_emitPowerSignpostWithMetric:(id)a0 value:(id)a1;
- (void)_emitPowerSignpostWithMetric:(id)a0 value:(id)a1 pid:(id)a2;
- (void)_handleConnectionEndedWithClient:(id)a0;
- (BOOL)_hasEntitlements:(id)a0;
- (BOOL)_isProcessAlive:(int)a0;
- (void)_pollForProcessNames:(id)a0;
- (void)_sendMetricMonitorTimeoutNotification;
- (BOOL)_shouldAcceptNewConnection:(id)a0;
- (BOOL)_shouldAcceptheadlessClientConnection:(id)a0;
- (void)_startHeadlessTimeoutTimer;
- (void)_startProcessPollingTimer:(id)a0;
- (void)collectMetricsOnDemand:(id /* block */)a0;
- (void)emitPowerMetrics:(id)a0 ofClient:(id)a1;
- (void)emitTracingToolPowerMetrics:(id)a0 ofClient:(id)a1;
- (void)finishMonitoringAndSendMetrics;
- (void)headlessClientMonitoredProcesses:(id /* block */)a0;
- (void)isMonitoringForHeadlessWithCompletion:(id /* block */)a0;
- (void)setHeadlessQueryTimer:(double)a0;
- (void)setUpWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)startHeadlessUpdateTimer:(double)a0;
- (void)startMonitoringPids:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (void)startMonitoringProcessWithName:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessWithPID:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessesWithName:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringProcessesWithNames:(id)a0 withPIDs:(id)a1 completion:(id /* block */)a2;
- (void)startMonitoringProcessesWithPID:(id)a0 completion:(id /* block */)a1;
- (void)startMonitoringSystemMetricsWithCompletion:(id /* block */)a0;
- (void)stopMonitoringHeadlessClient;

@end
