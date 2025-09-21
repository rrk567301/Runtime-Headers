@interface CHRemoveInvalidExpressionCandidatesStep : CHMathPostprocessingStep {
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct LaTeXSyntaxHelper *__ptr_; } _latexSyntaxHelper;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCodemap:(id)a0;
- (BOOL)isTranscriptionValidExpression:(id)a0 transcriptionPath:(id)a1 limitToCurrentLocale:(BOOL)a2;
- (id)process:(id)a0 options:(id)a1;

@end
