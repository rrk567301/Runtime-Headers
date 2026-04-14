@interface NLNLPLanguageModelState : NLLanguageModelState {
    struct CoreLanguageModelWithState { } *_modelState;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)resetContext;
- (id)initWithSession:(id)a0 options:(id)a1 context:(id)a2 modelState:(void *)a3;
- (id)conditionalProbabilityForToken:(id)a0;
- (id)conditionalProbabilityForString:(id)a0;
- (void)addContext:(id)a0;
- (id)conditionalProbabilitiesForStrings:(id)a0;
- (void)enumeratePredictions:(unsigned long long)a0 maximumTokensPerPrediction:(unsigned long long)a1 withBlock:(id /* block */)a2;

@end
