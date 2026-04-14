@interface SMAttemptPeerToPeerStep : SMMigrationEngineStep

- (id)process;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (BOOL)shouldAttemptSoftAP;

@end
