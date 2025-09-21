@interface CDMFoundation.CDMCcqrAerCbROverridesProxy : SiriNLUOverrideProxy {
    void /* unknown type, empty encoding */ defaultTemplatePattern;
    void /* unknown type, empty encoding */ templatePattern;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureGroupExpression;
}

- (void).cxx_destruct;
- (char)clean;
- (char)addWithCollection:(id)a0;
- (id)getRewriteHypothesisWithOverrideUtterance:(id)a0;
- (id)initWithUseTrie:(char)a0 useMemory:(char)a1;
- (id)initWithUseTrie:(char)a0 useMemory:(char)a1 templatePattern:(id)a2;
- (id)matchWithInputs:(id)a0;

@end
