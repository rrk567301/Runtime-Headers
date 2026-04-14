@interface IntercodeDecoder : NSObject <CalypsoSubDecoder>

+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
+ (id)calculateCommutePlanUniqueId:(id)a0 withDateTime:(id)a1 withDifferentiator:(id)a2;
+ (id)calculateCommutePlanUniqueId:(id)a0 withDifferentiator:(id)a1;
+ (id)calculateTransactionSN:(id)a0 withTimeStamp:(id)a1 withEventCode:(id)a2 withSP:(id)a3 withContractPointer:(id)a4 withDifferentiator:(id)a5;
+ (id)decodeAllCounters:(id)a0;
+ (id)decodeContractFFBitMap:(id)a0;
+ (id)decodeContractJourneyDataBitmap:(id)a0;
+ (id)decodeContractList:(id)a0;
+ (id)decodeContractRestrictionBitmap:(id)a0;
+ (id)decodeContractSaleDataBitmap:(id)a0;
+ (id)decodeContractStructure46:(id)a0;
+ (id)decodeContractStructureFF:(id)a0;
+ (id)decodeContractStructureN:(id)a0;
+ (id)decodeContractValidityBitmap:(id)a0;
+ (id)decodeCounterStructure03:(id)a0;
+ (id)decodeCounterStructure0C:(id)a0;
+ (id)decodeCounterStructureN:(id)a0;
+ (id)decodeEnvironmentBitMap:(id)a0;
+ (id)decodeEnvironmentData:(id)a0;
+ (id)decodeEnvironmentDataBitMap:(id)a0;
+ (id)decodeEventEntry:(id)a0;
+ (id)formatCommutePlanIdentifier:(id)a0;
+ (id)formatCommutePlanIdentifier:(id)a0 withTariffCode:(id)a1 withZoneList:(id)a2;
+ (id)getAbsoluteDateComponents:(id)a0 withTime:(id)a1;
+ (id)getAbsoluteDateComponentsWithDefaultMinutes:(id)a0 withTime:(id)a1 withDefaultMinutes:(id)a2;
+ (id)getAbsoluteDateComponentsWithDefaultMinutesAndTimezone:(id)a0 withTime:(id)a1 withDefaultMinutes:(id)a2 withTimezone:(id)a3;
+ (id)getAbsoluteDateComponentsWithTimezone:(id)a0 withTime:(id)a1 withTimezone:(id)a2;
+ (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
+ (id)getAppletStateAndHistory:(id)a0 withError:(id *)a1;
+ (id)getServiceProviderData:(id)a0 withError:(id *)a1;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withContext:(id)a6 withError:(id *)a7;
+ (id)getServiceProviderData:(id)a0 withPublicKey:(id)a1 withEncryptionScheme:(id)a2 withError:(id *)a3;
+ (void)interpretTransactionEvent:(id)a0;
+ (BOOL)isDateInDST:(id)a0 withTimezone:(id)a1;
+ (BOOL)isPlanInitialized:(id)a0;

- (id)generateContactEndEvent:(id)a0 withDidError:(BOOL)a1;
- (id)generateEndEventFromHCI;

@end
