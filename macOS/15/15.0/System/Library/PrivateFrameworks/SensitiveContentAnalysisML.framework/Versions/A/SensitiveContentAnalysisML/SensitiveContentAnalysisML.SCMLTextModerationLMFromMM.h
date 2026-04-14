@class NSString, NSError, SCMLTextModerationLMResult;

@interface SensitiveContentAnalysisML.SCMLTextModerationLMFromMM : NSObject {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (id)initOnBehalfOf:(long long)a0 modelManagerServicesUseCaseID:(id)a1 error:(id *)a2;
- (void)predictWithText:(NSString *)a0 completionHandler:(void (^)(SCMLTextModerationLMResult *, NSError *))a1;

@end
