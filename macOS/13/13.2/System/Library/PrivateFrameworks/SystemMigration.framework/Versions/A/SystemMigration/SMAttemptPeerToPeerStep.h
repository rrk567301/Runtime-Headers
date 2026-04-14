@interface SMAttemptPeerToPeerStep : SMMigrationEngineStep

- (id)process;
- (id)initWithEngine:(id)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (BOOL)shouldAttemptSoftAP;

@end
