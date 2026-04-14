@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;

@end
