@interface SMAttemptPeerToPeerStep : SMMigrationEngineStep

- (id)process;
- (id)initWithEngine:(id)a0;
- (BOOL)shouldAttemptSoftAP;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;

@end
