@class NSString;

@interface IDSGFTMetricsMTUChange : IDSGFTMetricsReferencePoint <IDSGFTMetricsLinkAttributes>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLinkType:(id)a0;
- (unsigned short)_roundedMTU:(unsigned short)a0;
- (void)setChannelDataProtocolStack:(id)a0;
- (void)setIPVersion:(unsigned char)a0;
- (void)setIsLinkEngineLink:(BOOL)a0;
- (void)setIsTLEEnabled:(BOOL)a0;
- (void)setLocalRAT:(unsigned int)a0;
- (void)setMTU:(unsigned short)a0 previous:(unsigned short)a1;
- (void)setRelayProtocolStack:(id)a0;
- (void)setRemoteRAT:(unsigned int)a0;

@end
