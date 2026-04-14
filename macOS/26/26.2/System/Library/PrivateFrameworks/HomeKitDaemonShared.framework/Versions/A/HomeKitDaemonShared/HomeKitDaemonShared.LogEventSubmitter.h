@interface HomeKitDaemonShared.LogEventSubmitter : NSObject <HMMLogEventSubmitting>

- (void)submitLogEvent:(id)a0 error:(id)a1;
- (void)submitLogEvent:(id)a0;
- (id)init;

@end
