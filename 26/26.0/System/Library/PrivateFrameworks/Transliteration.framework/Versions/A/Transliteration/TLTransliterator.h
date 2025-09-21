@interface TLTransliterator : NSObject {
    struct unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> { struct TLCompositeTransliterator *__ptr_; } _compositeTransliterator;
}

- (id)initWithLocale:(id)a0;
- (id)initWithParameters:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)generateCandidatesForInputWord:(id)a0 candidateContextStrings:(id)a1 maxCandidatesCount:(long long)a2;
- (void)flushDynamicLearningCache;
- (id)generateCandidatesForInputWord:(id)a0 candidateContext:(id)a1 maxCandidatesCount:(long long)a2;
- (void)learnCandidate:(id)a0 candidateContext:(id)a1;
- (void)resetDynamicLearningCache;
- (void)unlearnCandidate:(id)a0 candidateContext:(id)a1;

@end
