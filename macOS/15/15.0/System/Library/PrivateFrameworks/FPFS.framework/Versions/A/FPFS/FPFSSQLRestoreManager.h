@class _TtC9libfssync20FPFSSQLRestoreEngine, FPRTCReportingSession, NSString;

@interface FPFSSQLRestoreManager : NSObject {
    NSString *_backupBuild;
    NSString *_restoreType;
}

@property (retain, nonatomic) _TtC9libfssync20FPFSSQLRestoreEngine *restoreEngine;
@property (readonly, nonatomic) FPRTCReportingSession *rtcReporting;
@property (readonly, nonatomic) BOOL cleanupOnSuccess;

- (void).cxx_destruct;
- (id)initWithUserURL:(id)a0;
- (id)initWithUserURL:(id)a0 fromBuild:(id)a1 restoreType:(id)a2 cleanupOnSuccess:(BOOL)a3;
- (void)restoreWithCompletionHandler:(id /* block */)a0;
- (void)reportCompletionTelemetryWithError:(id)a0 atStep:(id)a1;

@end
