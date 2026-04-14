@interface TLTransliterator : NSObject {
    struct unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> { struct { struct TLCompositeTransliterator *__ptr_; } ; } _compositeTransliterator;
}

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithParameters:(id)a0;
- (id)generateCandidatesForInputWord:(id)a0 candidateContextStrings:(id)a1 maxCandidatesCount:(long long)a2;
- (void)flushDynamicLearningCache;
- (id)generateCandidatesForInputWord:(id)a0 candidateContext:(id)a1 maxCandidatesCount:(long long)a2;
- (void)learnCandidate:(id)a0 candidateContext:(id)a1;
- (void)resetDynamicLearningCache;
- (void)unlearnCandidate:(id)a0 candidateContext:(id)a1;

@end
