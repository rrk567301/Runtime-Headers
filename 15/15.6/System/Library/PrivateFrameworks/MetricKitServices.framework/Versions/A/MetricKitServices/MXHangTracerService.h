@class NSMutableArray, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface MXHangTracerService : MXService

@property (retain) NSMutableArray *hangTracerDataPaths;
@property (retain) NSMutableArray *unarchivedHangTracerData;
@property (retain) NSObject<OS_os_log> *MXHangTracerServiceLogHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;

+ (id)sharedHangTracerService;

- (id)init;
- (void).cxx_destruct;
- (char)startService;
- (char)stopService;
- (id)getDiagnosticsForClient:(id)a0 dateString:(id)a1;
- (char)_updateService;
- (char)diagnosticsAvailable;
- (char)diagnosticsSupported;
- (void)unarchiveHangTracerDataForDateString:(id)a0;

@end
