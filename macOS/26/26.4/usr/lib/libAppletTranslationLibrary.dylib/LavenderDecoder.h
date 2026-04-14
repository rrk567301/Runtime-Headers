@interface LavenderDecoder : IntercodeDecoder

+ (id)decodeCounters:(id)a0;
+ (id)calculateSerialNumberForLogEntry:(id)a0 withEventCode:(id)a1 withTotalJourneys:(id)a2;
+ (id)formatTransitDetailRaw:(id)a0 forProvider:(id)a1 forCity:(id)a2;
+ (id)getInternalEnRouteStatus:(id)a0;
+ (id)getTransitModality:(id)a0 forProvider:(id)a1 forCity:(id)a2;
+ (id)getUnvalidatableContracts:(id)a0;
+ (BOOL)isCountPlan:(id)a0;
+ (BOOL)isDecoderEnabled;
+ (BOOL)isPlanInitialized:(id)a0;
+ (void)stripContract:(id)a0;

- (id)decodeHistory:(id)a0 withMaxContracts:(unsigned long long)a1;
- (id)decodeContracts:(id)a0;
- (id)decodeEnvironment:(id)a0;
- (id)generateEndEventFromHCI;
- (id)getAppletStateAndHistory:(id)a0 withError:(id *)a1;
- (void)interpretTransactionEvent:(id)a0;
- (id)parseHistory:(id)a0 withContracts:(id)a1;

@end
