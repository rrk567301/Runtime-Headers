@interface NLLMSLanguageModel : NLLanguageModel {
    struct LanguageModel { struct unique_ptr<language_modeling::LanguageModelImpl, std::default_delete<language_modeling::LanguageModelImpl>> { struct LanguageModelImpl *__ptr_; } m_impl; } _model;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sessionWithOptions:(id)a0;
- (void *)_underlyingModel;
- (BOOL)generatesPredictions;
- (id)initWithLocalization:(id)a0 options:(id)a1;

@end
