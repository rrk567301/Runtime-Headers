@class RTDefaultsManager, RTPlatform, NSMutableArray;

@interface RTDiagnostics : RTService {
    RTDefaultsManager *_defaultsManager;
    RTPlatform *_platform;
    NSMutableArray *_diagnosticProviders;
}

+ (id)createDiagnosticsURLWithError:(id *)a0;
+ (id)stringFromDateWithFormat;
+ (BOOL)createArchiveSourceURL:(id)a0 destinationURL:(id)a1 error:(id *)a2;
+ (BOOL)fileNameEligibleForCollection:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchPathToDiagnosticFilesWithHandler:(id /* block */)a0;
- (id)initWithDefaultsManager:(id)a0 platform:(id)a1;
- (void)addDiagnosticProvider:(id)a0;
- (void)logProcessDiagnosticInformation;
- (void)logDiagnosticStateWithReason:(id)a0;
- (void)fetchPathToBackupWithHandler:(id /* block */)a0;
- (double)footprint;
- (id)_collectDiagnosticFilesWithError:(id *)a0;
- (void)_fetchPathToDiagnosticFilesWithHandler:(id /* block */)a0;
- (id)_collectBackupWithError:(id *)a0;
- (void)_fetchPathToBackupWithHandler:(id /* block */)a0;

@end
