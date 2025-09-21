@class NSXPCConnection, NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject <MXXPCClient>

@property (class, readonly) MXMetricManager *sharedManager;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue;
@property (retain, nonatomic) NSObject<OS_os_log> *managerLogHandle;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int metricToken;
@property char checkedMetrics;
@property char checkedDiagnostics;
@property (retain) NSArray *pastPayloads;
@property (retain) NSArray *pastDiagnosticPayloads;
@property (retain, nonatomic) NSHashTable *subscribers;

+ (char)extendLaunchMeasurementForTaskID:(id)a0 error:(id *)a1;
+ (char)finishExtendedLaunchMeasurementForTaskID:(id)a0 error:(id *)a1;
+ (id)makeLogHandleWithCategory:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (id)_createXPCConnection;
- (char)_cachedPayloadAvailable;
- (void)_checkAndDeliverDiagnosticReports;
- (void)_checkAndDeliverMetricReports;
- (void)deliverDiagnosticPayload:(id)a0;
- (void)deliverMetricPayload:(id)a0;
- (id)mergeDiagnosticsAtLocation:(id)a0;
- (void)registrationProcessed;

@end
