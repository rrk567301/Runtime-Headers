@class NSMutableArray;

@interface NLTokenIDBasedLanguageModelState : NLLanguageModelState {
    NSMutableArray *_contextTokenIDArray;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)resetContext;
- (unsigned long long)contextLength;
- (id)initWithSession:(id)a0 options:(id)a1 context:(id)a2;
- (void)addContext:(id)a0;
- (id)conditionalProbabilityForToken:(id)a0;
- (void)enumeratePredictions:(unsigned long long)a0 maximumTokensPerPrediction:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)contextTokenIDArrayForContext:(id)a0;
- (id)initWithSession:(id)a0 options:(id)a1 context:(id)a2 contextTokenIDArray:(id)a3;
- (void)addContextTokenIDs:(const unsigned int *)a0 length:(unsigned long long)a1;
- (unsigned int *)contextTokenIDs;
- (id)conditionalProbabilityForTokenID:(unsigned int)a0;
- (id)conditionalProbabilitiesForTokenIDs:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
