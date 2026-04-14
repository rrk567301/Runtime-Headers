@interface IDSGFTMetricsJoinCycle : IDSGFTMetricsReferencePoint {
    double _remoteActiveTime;
}

- (id)initWithFromType:(id)a0 fromUniqueID:(id)a1 anonymizer:(id)a2 template:(id)a3;
- (void)receivedAllocateResponseAtTime:(double)a0;
- (void)localDidJoin;
- (void)localDidJoinAtTime:(double)a0;
- (void)remoteDidJoin;
- (void)remoteDidBecomeActive;
- (void)receivedKMOverQR;
- (void)receivedKMOverPush;
- (void)receivedKMOverPushViaCache;
- (void)receivedKMOverPushViaCacheAtTime:(double)a0;
- (void)receivedKMOverQUIC;
- (void)receivedUnverifiedKMOverQUIC;
- (void)requestedKM;
- (void)receivedPreKeyOverPush;
- (void)receivedPreKeyOverQUIC;
- (void)decryptedBlobOverQUIC:(id)a0;
- (double)referenceTimeForTimeBase:(double)a0;

@end
