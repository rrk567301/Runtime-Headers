@interface PPSMetricMonitorHeadlessClient : NSObject

+ (BOOL)isMonitoring;
+ (void)stopMonitoring;
+ (id)_initConnection;
+ (id)monitoredProcesses;
+ (BOOL)startMonitoringProcessesWithNames:(id)a0 config:(id)a1 error:(id *)a2;
+ (BOOL)startMonitoringProcessesWithPID:(id)a0 config:(id)a1 error:(id *)a2;
+ (BOOL)startMonitoringSystemMetricsWithConfig:(id)a0 error:(id *)a1;

@end
