@class CHStringOVSChecker;

@interface CHSemanticTokenizerStep : CHPostprocessingStep

@property (nonatomic) void *wordLanguageModel;
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker;

- (void)dealloc;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithWordLanguageModel:(void *)a0 ovsStringChecker:(id)a1;
- (void)_updateTokenInappropriateFlag:(id)a0;

@end
