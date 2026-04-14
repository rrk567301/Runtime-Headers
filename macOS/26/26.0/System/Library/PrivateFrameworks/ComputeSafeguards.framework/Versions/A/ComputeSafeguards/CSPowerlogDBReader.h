@class PLSQLiteConnection, NSObject;
@protocol OS_os_log;

@interface CSPowerlogDBReader : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *logger;
@property (retain) PLSQLiteConnection *conn;

+ (id)sharedInstance;

- (void)closeConnection;
- (id)_init;
- (void)openConnection;
- (void).cxx_destruct;
- (id)getAPWakeIntervalListWithStartDate:(id)a0 andEndDate:(id)a1;
- (id)getCPUBasedIntervalListMapWithStartDate:(id)a0 andEndDate:(id)a1 andAllowListCoalitions:(id)a2 andDenyListCoalitions:(id)a3 andDaemonOnly:(BOOL)a4 andMetricType:(int)a5;
- (id)getCPUEnergyIntervalListMapWithStartDate:(id)a0 andEndDate:(id)a1 andAllowListCoalitions:(id)a2 andDenyListCoalitions:(id)a3 andDaemonOnly:(BOOL)a4;
- (id)getCPUPercentageIntervalListMapWithStartDate:(id)a0 andEndDate:(id)a1 andAllowListCoalitions:(id)a2 andDenyListCoalitions:(id)a3 andDaemonOnly:(BOOL)a4;
- (id)getDeviceBootTime;
- (id)getMonotonicTime:(id)a0;
- (id)getPowerExceptionsRecordsWithStartDate:(id)a0 andEndDate:(id)a1;
- (id)getProcessesForCoalitionID:(int)a0 withStartDate:(id)a1 andEndDate:(id)a2 andDeviceBootDate:(id)a3;
- (id)getProcessesForCoalitionID:(int)a0 withStartDate:(id)a1 andEndDate:(id)a2 andDeviceBootDate:(id)a3 andCPURatio:(double)a4;
- (id)getSystemTime:(id)a0;
- (id)getTotalBatteryDrainWithStartDate:(id)a0 andEndDate:(id)a1;
- (double)getTotalCPUTimeWithStartDate:(id)a0 andEndDate:(id)a1;
- (id)getUnpluggedIntervalListWithStartDate:(id)a0 andEndDate:(id)a1;
- (id)performPowerlogQuery:(id)a0;

@end
