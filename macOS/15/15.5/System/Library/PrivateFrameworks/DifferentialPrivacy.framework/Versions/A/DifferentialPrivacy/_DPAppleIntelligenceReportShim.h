@interface _DPAppleIntelligenceReportShim : NSObject

+ (void)sendLogWithKey:(id)a0 dimension:(unsigned int)a1 taskExpiration:(unsigned long long)a2 minBatchSize:(unsigned int)a3 targetCentralEpsilon:(double)a4 targetCentralDelta:(double)a5 localEpsilon:(double)a6 privateAccessToken:(BOOL)a7 ohttp:(BOOL)a8;

- (id)init;

@end
