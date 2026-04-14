@class PRLexicon, NSString, NLTokenIDConverter, NLLanguageModel, NLLMLanguageModelSession;

@interface PRWordLanguageModel : NSObject {
    NSString *_localization;
    NSString *_appIdentifier;
    NLLanguageModel *_model;
    NLLMLanguageModelSession *_session;
    NLTokenIDConverter *_converter;
    PRLexicon *_lexicon;
}

+ (void)performMaintenance;
+ (void)setLogLevel:(long long)a0;
+ (id)languageModelWithLocalization:(id)a0 appIdentifier:(id)a1 lexicon:(id)a2;

- (void)dealloc;
- (id)description;
- (void)reset;
- (id)localization;
- (id)appIdentifier;
- (void)flushDynamicData;
- (BOOL)getConditionalProbabilityForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2 probability:(double *)a3;
- (unsigned int)tokenIDForString:(id)a0;
- (id)stringForTokenID:(unsigned int)a0;
- (void)applyExponentialDecay;
- (void)pruneToSize:(unsigned long long)a0;
- (void)recordWithDifferentialPrivacy:(id)a0;
- (BOOL)addTokenForString:(id)a0 tokenID:(unsigned int *)a1;
- (BOOL)getFirstDynamicTokenID:(unsigned int *)a0 lastDynamicTokenID:(unsigned int *)a1;
- (float)usageCountForTokenID:(unsigned int)a0;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithLocalization:(id)a0 appIdentifier:(id)a1 lexicon:(id)a2;
- (BOOL)getUnigramProbabilityForString:(id)a0 probability:(double *)a1;
- (id)_descriptionForTokenSequence:(const unsigned int *)a0 length:(unsigned long long)a1;
- (BOOL)tokenSequenceIsBlocklisted:(const unsigned int *)a0 length:(unsigned long long)a1;
- (void)enumerateCompletionsForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumerateCompletionEntriesForPrefix:(id)a0 maxCompletions:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (void)enumeratePredictionsForContext:(const unsigned int *)a0 length:(unsigned long long)a1 maxPredictions:(unsigned long long)a2 maxTokensPerPrediction:(unsigned long long)a3 withBlock:(id /* block */)a4;
- (BOOL)shouldAdaptToTokenSequence:(const unsigned int *)a0 length:(unsigned long long)a1;
- (void)incrementUsageCountForTokenID:(unsigned int)a0 context:(const unsigned int *)a1 length:(unsigned long long)a2;

@end
