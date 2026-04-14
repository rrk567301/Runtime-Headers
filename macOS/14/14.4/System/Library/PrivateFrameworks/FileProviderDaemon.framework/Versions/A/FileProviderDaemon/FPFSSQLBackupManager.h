@class _TtC9libfssync19FPFSSQLBackupEngine, FPRTCReportingSession;

@interface FPFSSQLBackupManager : NSObject

@property (retain, nonatomic) _TtC9libfssync19FPFSSQLBackupEngine *backupEngine;
@property (readonly, nonatomic) FPRTCReportingSession *rtcReporting;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0 outputUserURL:(id)a1;
- (void)backUpWithCompletionHandler:(id /* block */)a0;
- (void)reportCompletionTelemetryWithError:(id)a0;

@end
