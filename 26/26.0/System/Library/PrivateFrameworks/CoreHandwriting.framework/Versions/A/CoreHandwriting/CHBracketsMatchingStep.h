@class NSSet;

@interface CHBracketsMatchingStep : CHMathPostprocessingStep {
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct LaTeXSyntaxHelper *__ptr_; } latexHelper;
    NSSet *_bracketSymbols;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCodemap:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
