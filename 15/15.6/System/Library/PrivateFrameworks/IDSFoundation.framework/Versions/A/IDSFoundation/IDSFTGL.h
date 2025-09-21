@interface IDSFTGL : IDSGlobalLink

- (char)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (char)_postProcessQUICAllocbindResponse:(id)a0 candidatePair:(id)a1;
- (void)_resetRetryCountForCandidatePair:(id)a0;
- (char)_setupNewQRLinkIfNecessary:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0 isReinitiating:(char)a1;
- (void)sendSKEData:(id)a0;
- (void)setDefaultUnderlyingLink:(char)a0;
- (void)setHasPendingAllocation:(char)a0;
- (void)setSharedSessionHasJoined:(char)a0;
- (void)startWithOptions:(id)a0;

@end
