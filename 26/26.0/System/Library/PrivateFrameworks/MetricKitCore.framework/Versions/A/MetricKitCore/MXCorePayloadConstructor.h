@interface MXCorePayloadConstructor : NSObject

+ (id)buildDiagnosticPayloadForClient:(id)a0 fromClientDiagnosticsDictionary:(id)a1 withDateString:(id)a2;
+ (id)buildMetricPayloadForClient:(id)a0 fromClientMetricsDictionary:(id)a1;
+ (id)buildSampleDiagnosticPayloadForClient:(id)a0 withDateString:(id)a1;
+ (id)buildSamplePayloadForClient:(id)a0 withDateString:(id)a1;
+ (id)constructPayloadWithServiceString:(id)a0 withSourceData:(id)a1 withDateString:(id)a2 forClient:(id)a3;
+ (id)updatePayload:(id)a0 withServiceString:(id)a1 withSourceData:(id)a2 withDateString:(id)a3 forClient:(id)a4;

@end
