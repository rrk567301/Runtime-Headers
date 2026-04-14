@class NSArray, NSMutableArray, NSData;

@interface IDSGFTGL : IDSGlobalLink {
    NSArray *_remoteCandidatePairs;
    NSMutableArray *_virtualCandidatePairs;
    BOOL _allowE2E;
    unsigned int _keyMaterialDataCounter;
    NSData *_keyMaterialData;
    id /* block */ _keyMaterialSentHandler;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)startWithOptions:(id)a0;
- (void)disconnectWithCompletionHandler:(id /* block */)a0;
- (BOOL)_setupNewQRLinkIfNecessary:(id)a0;
- (BOOL)_postProcessAllocbindResponse:(id)a0 candidatePair:(id)a1 candidatePairToken:(id)a2;
- (void)setDefaultUnderlyingLink:(char)a0;
- (BOOL)_postProcessQUICAllocbindResponse:(id)a0 candidatePair:(id)a1;
- (void)_discardCandidatePairsWithOption:(BOOL)a0;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)a0 error:(long long)a1;
- (long long)_getQRAllocateType;
- (void)manageDesignatedDestinations:(id)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 withType:(unsigned short)a3 sessionStateCounter:(unsigned int)a4;
- (void)removeParticipantIDs:(id)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 sessionStateCounter:(unsigned int)a3;
- (void)_destroyVirtualRelayLinksForCandidatePair:(id)a0;
- (void)updateURIToParticipantIDs:(id)a0 relaySessionID:(id)a1 sessionInfo:(id)a2;
- (void)_sendConnectionDataWithRemovedAddressList:(id)a0;
- (BOOL)_processRemovedLocalAddressList:(id)a0;
- (void)sendKeyMaterialMessageData:(id)a0 relayGroupID:(id)a1 destinationURIs:(id)a2 completionHandler:(id /* block */)a3;
- (void)setTimeBase:(id)a0;
- (void)setParticipantType:(unsigned short)a0 relayGroupID:(id)a1 relaySessionID:(id)a2 sessionStateCounter:(unsigned int)a3;
- (void)_enableE2E;
- (void)_sendRelayInterfaceInfo:(id)a0;
- (void)receiveJoinNotificationFromAParticipant;
- (void)setIsUPlusOneSession:(BOOL)a0;
- (void)enableUPlusOneSessionForTransition:(BOOL)a0;
- (void)_processCommandRelayInterfaceInfo:(id)a0 candidatePairToken:(id)a1;
- (void)_discardKeyMaterialMessage:(long long)a0;
- (id)_findVirtualCandidatePair:(id)a0;
- (void)_setupVirtualCandidatePairs:(id)a0 remoteCandidatePair:(id)a1;
- (void)_processReceivedRemoteCandidatePairs:(id)a0;
- (void)_disableE2E;

@end
