@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXPowerlogService : MXService

@property (retain) NSMutableArray *powerlogDataPaths;
@property (retain) NSMutableArray *unarchivedPowerlogData;
@property (retain) NSObject<OS_os_log> *MXPowerLogServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedPowerlogService;

- (id)init;
- (void).cxx_destruct;
- (char)startService;
- (char)stopService;
- (id)getMetricsForClient:(id)a0;
- (char)metricsAvailable;
- (char)metricsSupported;
- (char)_updateService;
- (void)unarchivePowerlogData;

@end
