@class NSXPCConnection, NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject <MXXPCClient>

@property (class, readonly) MXMetricManager *sharedManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *managerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int metricToken;
@property BOOL checkedMetrics;
@property BOOL checkedDiagnostics;
@property (retain) NSArray *pastPayloads;
@property (retain) NSArray *pastDiagnosticPayloads;
@property (retain, nonatomic) NSHashTable *subscribers;

+ (id)makeLogHandleWithCategory:(id)a0;
+ (BOOL)extendLaunchMeasurementForTaskID:(id)a0 error:(id *)a1;
+ (BOOL)finishExtendedLaunchMeasurementForTaskID:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (id)_createXPCConnection;
- (void)registrationProcessed;
- (void)deliverMetricPayload:(id)a0;
- (void)deliverDiagnosticPayload:(id)a0;
- (BOOL)_cachedPayloadAvailable;
- (void)_checkAndDeliverMetricReports;
- (void)_checkAndDeliverDiagnosticReports;
- (id)mergeDiagnosticsAtLocation:(id)a0;

@end
