@interface SpringwaterDecoder : IntercodeDecoder

+ (id)SelectRemoteTicketingCmd;
+ (id)calculateCommutePlanUniqueId:(id)a0 withExpiry:(id)a1;
+ (id)calculateTransactionSN:(id)a0 withTimeStamp:(id)a1 withEventCode:(id)a2 withSP:(id)a3 withContractPointer:(id)a4 withDifferentiator:(id)a5;
+ (id)commutePlanWithIdAndExpiry:(id)a0 withExpiry:(id)a1 withUniqueId:(id)a2;
+ (id)formatCommutePlanIdentifier:(id)a0 withTariffCode:(id)a1 withZoneList:(id)a2;
+ (id)formatTransitDetailRaw:(id)a0;
+ (id)getCardIdFromSelectResponse:(id)a0;
+ (id)getInternalEnRouteStatus:(id)a0;
+ (id)getTransitModality:(id)a0;
+ (id)getUnvalidatableContracts:(id)a0;
+ (id)readAndDecodeEnvironment:(id)a0 sfi:(unsigned char)a1 error:(id *)a2;
+ (id)readAndDecodeHistory:(id)a0 sfi:(unsigned char)a1 count:(unsigned char)a2 error:(id *)a3;
+ (id)readPartnerRecords:(id)a0 sfi:(unsigned char)a1 count:(unsigned char)a2 error:(id *)a3;
+ (id)readRecord:(id)a0 sfi:(unsigned char)a1 index:(unsigned char)a2 recLength:(unsigned char)a3 error:(id *)a4;
+ (void)stripContract:(id)a0;

- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
- (id)generateEndEventFromHCI;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withError:(id *)a1;
- (void)interpretTransactionEvent:(id)a0;
- (id)parseHistory:(id)a0 withContracts:(id)a1;
- (id)readAndDecodeContractList:(id)a0 sfi:(unsigned char)a1 error:(id *)a2;
- (id)readAndDecodeContracts:(id)a0 sfi:(unsigned char)a1 count:(unsigned char)a2 error:(id *)a3;
- (id)readAndDecodeCounter:(id)a0 sfi:(unsigned char)a1 recNum:(unsigned char)a2 counterStructure:(unsigned char)a3 error:(id *)a4;

@end
