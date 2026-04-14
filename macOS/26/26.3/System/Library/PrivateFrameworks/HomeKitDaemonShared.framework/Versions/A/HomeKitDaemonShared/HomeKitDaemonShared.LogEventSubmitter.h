@interface HomeKitDaemonShared.LogEventSubmitter : NSObject <HMMLogEventSubmitting>

- (void)submitLogEvent:(id)a0;
- (id)init;
- (void)submitLogEvent:(id)a0 error:(id)a1;

@end
