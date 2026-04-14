@class CRLanguageRecognitionContext, NLLanguageRecognizer;

@interface CRLanguageRecognitionSession : NSObject <CRTextDecodingLanguageRecognitionSession> {
    CRLanguageRecognitionContext *_latinLanguageRecognitionContext;
    NLLanguageRecognizer *_languageRecognizer;
}

- (id)init;
- (void).cxx_destruct;
- (void)completeSession;

@end
