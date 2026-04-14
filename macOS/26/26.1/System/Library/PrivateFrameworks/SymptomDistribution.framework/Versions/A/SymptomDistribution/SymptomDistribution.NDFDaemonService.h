@class _TtC31SymptomNetworkDiagnosticsCommon16NDFDevicePayload, NSArray, NSString, NSError;
@protocol OS_xpc_object;

@interface SymptomDistribution.NDFDaemonService : NSObject <SymptomNetworkDiagnosticsCommon.NDFDaemonProtocol, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ endpointBrowser;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ persistenceController;
    void /* unknown type, empty encoding */ discoveryTask;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)cleanupNetworkDeviceEntriesWithCompletionHandler:(void (^)(BOOL))a0;
- (void)deliverCloudKitDevicePayload:(_TtC31SymptomNetworkDiagnosticsCommon16NDFDevicePayload *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)deliverCloudKitDevicePayloads:(NSArray *)a0 completionHandler:(void (^)(BOOL))a1;
- (void)fetchAllNetworkDeviceEntriesWithCompletionHandler:(void (^)(BOOL))a0;
- (void)fetchLatestNetworkDeviceEntriesWithCompletionHandler:(void (^)(BOOL))a0;
- (void)initializeSchemaWithCompletionHandler:(void (^)(BOOL))a0;
- (void)printDatabaseTelemetryStatsWithCompletionHandler:(void (^)(BOOL))a0;
- (void)publishNetworkDeviceEntryWithCompletionHandler:(void (^)(BOOL))a0;
- (void)startDelegatedDiscoveryFor:(NSString *)a0 cancelAfter:(double)a1 deviceType:(char)a2 completionHandler:(void (^)(id<OS_xpc_object>, NSError *))a3;

@end
