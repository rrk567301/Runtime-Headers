@interface FI_TPropertyQLPreviewViewExtractor : FI_IPropertyValueExtractor {
    struct vector<TString, std::allocator<TString>> { struct TString *__begin_; struct TString *__end_; struct TString *__cap_; } _nodeSuffixes;
}

- (void)flush;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0 nodes:(const void *)a1;

@end
