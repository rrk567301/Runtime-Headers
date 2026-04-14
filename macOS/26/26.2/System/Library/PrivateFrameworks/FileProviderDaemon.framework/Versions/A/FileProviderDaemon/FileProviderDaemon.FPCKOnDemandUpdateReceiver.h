@class NSDictionary;

@interface FileProviderDaemon.FPCKOnDemandUpdateReceiver : NSObject <FPCKUpdateReceiving> {
    void /* unknown type, empty encoding */ backend;
    void /* unknown type, empty encoding */ persistUpdates;
    void /* unknown type, empty encoding */ report;
}

@property (nonatomic, readonly) NSDictionary *telemetryReport;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDomainBackend:(id)a0 persistUpdates:(BOOL)a1;
- (void)reingestItemIDs:(id)a0;
- (void)saveCheckpointWithReport:(id)a0;
- (void)sendDiagnosticsForItemIDs:(id)a0;
- (void)shouldPauseWithCompletion:(id /* block */)a0;

@end
