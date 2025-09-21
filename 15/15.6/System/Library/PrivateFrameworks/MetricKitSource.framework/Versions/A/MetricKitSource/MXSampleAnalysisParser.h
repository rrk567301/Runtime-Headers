@interface MXSampleAnalysisParser : NSObject

+ (id)getCallStackForReport:(id)a0 withType:(long long)a1;
+ (id)constructPayloadWithReport:(id)a0 withType:(long long)a1;
+ (id)parseCallTree:(id)a0 isAttributedThread:(char)a1;
+ (id)parseCallTreeFrame:(id)a0 withDepth:(unsigned long long)a1;
+ (void)sendDiagnosticReport:(id)a0 forType:(long long)a1 forSourceID:(long long)a2;
+ (void)sendDiagnosticReport:(id)a0 forType:(long long)a1 forSourceID:(long long)a2 options:(id)a3;

@end
