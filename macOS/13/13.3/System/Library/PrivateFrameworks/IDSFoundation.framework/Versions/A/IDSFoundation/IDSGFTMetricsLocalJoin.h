@interface IDSGFTMetricsLocalJoin : IDSGFTMetricsReferencePoint

@property BOOL didJoin;

- (void)firstIncomingPacketTime:(double)a0 forMKI:(id)a1;
- (void)connectQRServer;
- (void)firstOutgoingPacketTime:(double)a0 forMKI:(id)a1;
- (void)globalLinkStart;
- (void)avcReceiveMKMTime:(double)a0 forMKI:(id)a1 isGeneratedLocally:(BOOL)a2;
- (void)clientChannelConnected;
- (void)didConnectUnderlyingE2ELink;
- (void)didConnectUnderlyingRelayLink;
- (void)didCreateMKM:(id)a0;
- (void)didSendJoin;
- (void)join;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)sendAllocationRequest;
- (void)sendMKMToAVC:(id)a0 isGeneratedLocally:(BOOL)a1;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)willSendAllocbindRequest;
- (void)willSendJoin;

@end
