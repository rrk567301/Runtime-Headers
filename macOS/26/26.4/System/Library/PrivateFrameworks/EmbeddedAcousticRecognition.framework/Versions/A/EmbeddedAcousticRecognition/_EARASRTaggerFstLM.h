@interface _EARASRTaggerFstLM : NSObject {
    struct unique_ptr<quasar::ASRTaggerFstLM, std::default_delete<quasar::ASRTaggerFstLM>> { struct { struct ASRTaggerFstLM *__ptr_; } ; } scorer;
    struct shared_ptr<quasar::TextTokenizer> { struct TextTokenizer *__ptr_; struct __shared_weak_count *__cntrl_; } tokenizer;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(id)a0 userProfile:(id)a1;
- (id)scoreTokensIn:(id)a0;

@end
