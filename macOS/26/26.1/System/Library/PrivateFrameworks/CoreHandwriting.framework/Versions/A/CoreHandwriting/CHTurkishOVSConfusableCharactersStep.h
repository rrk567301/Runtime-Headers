@class CHStringOVSChecker;

@interface CHTurkishOVSConfusableCharactersStep : CHPostprocessingStepModifyingOriginalTokens {
    CHStringOVSChecker *_ovsStringChecker;
    struct _LXLexicon { } *_staticLexicon;
    struct _LXLexicon { } *_customLexicon;
}

- (void).cxx_destruct;
- (id)initWithOVSStringChecker:(id)a0 staticLexicon:(struct _LXLexicon { } *)a1 customLexicon:(struct _LXLexicon { } *)a2;
- (id)process:(id)a0 options:(id)a1;

@end
