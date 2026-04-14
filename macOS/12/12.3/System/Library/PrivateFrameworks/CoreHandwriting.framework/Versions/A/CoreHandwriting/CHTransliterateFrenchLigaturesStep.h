@class CVNLPDecodingLanguageModel;

@interface CHTransliterateFrenchLigaturesStep : CHPostprocessingStep

@property (retain, nonatomic) CVNLPDecodingLanguageModel *characterLM;
@property (nonatomic) const struct _LXLexicon { } *staticLexicon;

- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithCharacterLM:(id)a0 staticLexicon:(struct _LXLexicon { } *)a1;
- (id)handleFrenchLigaturesInToken:(id)a0;

@end
