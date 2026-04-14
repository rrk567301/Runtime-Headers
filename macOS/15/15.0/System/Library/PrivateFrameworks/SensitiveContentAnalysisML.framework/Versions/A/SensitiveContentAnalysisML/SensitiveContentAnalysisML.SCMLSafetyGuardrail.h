@class NSString, NSError, _TtC26SensitiveContentAnalysisML25SCMLSafetyGuardrailResult;

@interface SensitiveContentAnalysisML.SCMLSafetyGuardrail : NSObject {
    void /* unknown type, empty encoding */ tokenGen;
    void /* unknown type, empty encoding */ systemPrompt;
    void /* unknown type, empty encoding */ lowerCasePrompt;
    void /* unknown type, empty encoding */ underscoreReplacement;
    void /* unknown type, empty encoding */ maxChunkSize;
    void /* unknown type, empty encoding */ chunkOverlap;
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) NSString *bundleID;

+ (id)normalizeText:(id)a0 locale:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBackend:(unsigned long long)a0 onBehalfOf:(long long)a1 modelManagerServicesUseCaseID:(id)a2 lowerCasePrompt:(BOOL)a3 error:(id *)a4;
- (void)predictWithText:(NSString *)a0 completionHandler:(void (^)(_TtC26SensitiveContentAnalysisML25SCMLSafetyGuardrailResult *, NSError *))a1;

@end
