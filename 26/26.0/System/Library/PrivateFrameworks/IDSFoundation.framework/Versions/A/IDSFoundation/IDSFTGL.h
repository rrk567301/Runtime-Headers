@class NSMutableDictionary;

@interface IDSFTGL : IDSGlobalLink {
    NSMutableDictionary *_linkEnginesByRemotePushToken;
}

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (void)_didCreateSession:(id)a0;
- (BOOL)_postProcessQUICAllocbindResponse:(id)a0 candidatePair:(id)a1;
- (void)_resetRetryCountForCandidatePair:(id)a0;
- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (void)_willUpdateLinksForSession:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0 isReinitiating:(BOOL)a1;
- (id)linkEngineForSessionInfo:(id)a0;
- (void)sendSKEData:(id)a0;
- (void)setDefaultUnderlyingLink:(char)a0;
- (void)setHasPendingAllocation:(BOOL)a0;
- (void)setSharedSessionHasJoined:(BOOL)a0;
- (void)startWithOptions:(id)a0;

@end
