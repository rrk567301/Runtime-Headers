@interface MNTracePlayerETAUpdater : MNSessionUpdateManager

- (void)playETAUpdate:(id)a0;
- (void)startUpdateRequestsForRoutes:(id)a0 andNavigationType:(long long)a1;
- (void)resumeUpdateRequests;
- (id)_serverDisplayETAForResponseInfo:(id)a0;

@end
