@class NSString;

@interface IDSGFTMetricsLink : IDSGFTMetricsReferencePoint <IDSGFTMetricsLinkAttributes>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLinkType:(id)a0;
- (void)linkConnectedWithProtocolStack:(id)a0;
- (void)allocBindRequestTimeOut;
- (void)receiveAllocbindResponse;
- (void)receiveBindingRequest;
- (void)receiveBindingResponse;
- (void)sendAllocbindRequest;
- (void)sendBindingRequest;
- (void)sendBindingResponse;
- (void)setChannelDataProtocolStack:(id)a0;
- (void)setIPVersion:(unsigned char)a0;
- (void)setIsLinkEngineLink:(BOOL)a0;
- (void)setIsTLEEnabled:(BOOL)a0;
- (void)setLocalRAT:(unsigned int)a0;
- (void)setRelayProtocolStack:(id)a0;
- (void)setRemoteRAT:(unsigned int)a0;
- (void)virtualRelayLinkConnected;

@end
