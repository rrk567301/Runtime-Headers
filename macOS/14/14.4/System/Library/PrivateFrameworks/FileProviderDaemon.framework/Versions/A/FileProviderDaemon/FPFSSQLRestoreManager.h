@class _TtC9libfssync20FPFSSQLRestoreEngine, FPRTCReportingSession;

@interface FPFSSQLRestoreManager : NSObject

@property (retain, nonatomic) _TtC9libfssync20FPFSSQLRestoreEngine *restoreEngine;
@property (readonly, nonatomic) FPRTCReportingSession *rtcReporting;
@property (readonly, nonatomic) BOOL cleanupOnSuccess;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0;
- (id)initWithUserURL:(id)a0 cleanupOnSuccess:(BOOL)a1;
- (void)reportCompletionTelemetryWithError:(id)a0 atStep:(id)a1;
- (void)restoreWithCompletionHandler:(id /* block */)a0;

@end
