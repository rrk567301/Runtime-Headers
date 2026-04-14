@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXSpaceAttributionService : MXService

@property (retain) NSMutableArray *spaceAttributionDataPaths;
@property (retain) NSMutableArray *unarchivedSpaceAttributionData;
@property (retain) NSObject<OS_os_log> *MXSpaceAttributionServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedSpaceAttributionService;

- (BOOL)stopService;
- (void).cxx_destruct;
- (id)init;
- (BOOL)startService;
- (id)getMetricsForClient:(id)a0;
- (BOOL)metricsAvailable;
- (BOOL)metricsSupported;
- (BOOL)_updateService;
- (void)unarchiveSpaceAttributionData;

@end
