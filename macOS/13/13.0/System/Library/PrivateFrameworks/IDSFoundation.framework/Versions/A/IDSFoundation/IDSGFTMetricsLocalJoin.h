@interface IDSGFTMetricsLocalJoin : IDSGFTMetricsReferencePoint

@property BOOL didJoin;

- (void)willSendJoin;
- (void)didSendJoin;
- (void)join;
- (void)sendAllocationRequest;
- (void)connectQRServer;
- (void)globalLinkStart;
- (void)willSendAllocbindRequest;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)clientChannelConnected;
- (void)didConnectUnderlyingRelayLink;
- (void)didConnectUnderlyingE2ELink;
- (void)didCreateMKM:(id)a0;
- (void)sendMKMToAVC:(id)a0 isGeneratedLocally:(BOOL)a1;
- (void)firstIncomingPacketTime:(double)a0 forMKI:(id)a1;
- (void)firstOutgoingPacketTime:(double)a0 forMKI:(id)a1;
- (void)avcReceiveMKMTime:(double)a0 forMKI:(id)a1 isGeneratedLocally:(BOOL)a2;

@end
