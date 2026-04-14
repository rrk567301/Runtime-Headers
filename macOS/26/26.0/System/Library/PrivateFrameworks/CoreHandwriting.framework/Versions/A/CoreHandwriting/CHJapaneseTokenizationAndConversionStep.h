@class CHMecabraWrapper, CHStringOVSChecker;

@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep {
    BOOL _promoteKanaConversion;
    CHMecabraWrapper *_mecabraWrapper;
    struct __MecabraContext { } *_mecabraContextRef;
    struct ObjectRef<void *> { void *mCFObject; } _wordLanguageModel;
    CHStringOVSChecker *_ovsStringChecker;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithMecabra:(id)a0 wordLanguageModel:(void *)a1 ovsStringChecker:(id)a2 promoteKanaConversion:(BOOL)a3;
- (id)process:(id)a0 options:(id)a1;

@end
