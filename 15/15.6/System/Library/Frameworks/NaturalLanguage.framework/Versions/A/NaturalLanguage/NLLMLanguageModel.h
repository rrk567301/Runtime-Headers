@class NLLMTokenIDConverter;

@interface NLLMLanguageModel : NLLanguageModel {
    NLLMTokenIDConverter *_tokenIDConverter;
}

- (void).cxx_destruct;
- (id)sessionWithOptions:(id)a0;
- (char)generatesPredictions;
- (id)tokenIDConverter;

@end
