@interface SMAnalyticsManager : NSObject

+ (id)sharedManager;

- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)traceQuarantinedPath:(id)a0;
- (void)traceMigrationResults:(id)a0;
- (void)traceODTokenIssuingSuccess:(BOOL)a0 afterRetries:(unsigned long long)a1;
- (void)traceBetaReEnrollmentStatus:(unsigned long long)a0;
- (void)traceMigrationCompleted:(id)a0;

@end
