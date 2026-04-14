@interface CHIPOnboardingPayloadParser : NSObject

+ (id)setupPayloadForManualCodeOnboardingPayload:(id)a0 error:(id *)a1;
+ (id)setupPayloadForQRCodeOnboardingPayload:(id)a0 error:(id *)a1;
+ (id)setupPayloadForOnboardingPayload:(id)a0 ofType:(unsigned long long)a1 error:(id *)a2;

@end
