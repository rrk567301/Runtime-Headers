@interface FI_TPropertyQLPreviewViewExtractor : FI_IPropertyValueExtractor {
    struct vector<TString, std::allocator<TString>> { struct TString *__begin_; struct TString *__end_; struct { struct TString *__cap_; } ; } _nodeSuffixes;
}

- (void)flush;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)extractValueFromNodes:(const void *)a0;
- (BOOL)isApplicableToNodes:(const void *)a0;
- (BOOL)needsUpdateForProperty:(unsigned int)a0 nodes:(const void *)a1;

@end
