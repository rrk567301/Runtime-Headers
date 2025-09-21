@interface IDSNonFTGL : IDSGlobalLink

- (void)_handleNewRATChange;
- (void)_handleNoRemotePacket;
- (void)_handleRemapping:(id)a0 errorCode:(unsigned short)a1 reconnectQUIC:(char)a2;
- (char)_isBetterCandidatePair:(id)a0 newCandidatePair:(id)a1;
- (id)_nextConnectedCandidatePair;
- (void)_notifyCandidatePairConnected:(id)a0;
- (void)_notifyCandidatePairDisconnected:(id)a0 withReason:(unsigned char)a1;
- (void)_notifyDefaultUnderlyingLinkChanged:(id)a0 error:(long long)a1;
- (char)_processRemovedLocalAddressList:(id)a0;
- (void)_selectBetterDefaultCandidatePair:(id)a0;
- (void)_selectDefaultCandidatePair;
- (void)_setDefaultCandidatePairForNonFT;
- (void)_setFirstDefaultCandidatePair:(id)a0;
- (char)_setupNewQRLinkIfNecessary:(id)a0;
- (void)_startHB:(id)a0;
- (void)currentCellularSignalStrength:(int *)a0 signalStrength:(int *)a1 signalGrade:(int *)a2;
- (void)disconnectWithCompletionHandler:(id /* block */)a0 isReinitiating:(char)a1;
- (void)dropIPPackets:(char)a0 payloadArray:(id)a1;
- (void)setPacketNotificationFilter:(char)a0 uniqueTag:(unsigned int)a1 isEnabled:(char)a2;
- (void)setSharedSessionHasJoined:(char)a0;
- (void)startWithOptions:(id)a0;
- (void)stopKeepAlive:(id)a0;
- (void)updateProtocolQualityOfService:(char)a0 isGood:(char)a1;

@end
