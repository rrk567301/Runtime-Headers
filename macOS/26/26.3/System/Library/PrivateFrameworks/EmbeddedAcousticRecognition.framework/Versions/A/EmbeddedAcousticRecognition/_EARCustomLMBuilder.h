@interface _EARCustomLMBuilder : NSObject {
    struct unique_ptr<quasar::CustomLMBuilder, std::default_delete<quasar::CustomLMBuilder>> { struct { struct CustomLMBuilder *__ptr_; } ; } _customLMBuilder;
    struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { struct { struct TextTokenizer *__ptr_; } ; } _tokenizer;
}

+ (void)initialize;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)getFstGrammar:(id)a0 overrideFolder:(id)a1 weight:(float)a2 errorOut:(id *)a3;

@end
