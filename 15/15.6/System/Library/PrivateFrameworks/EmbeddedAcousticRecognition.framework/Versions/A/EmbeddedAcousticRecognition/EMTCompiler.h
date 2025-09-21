@interface EMTCompiler : NSObject {
    struct shared_ptr<quasar::TranslatorCompiler> { struct TranslatorCompiler *__ptr_; struct __shared_weak_count *__cntrl_; } _translatorCompiler;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)compile;
- (id)initWithModelURLs:(id)a0;
- (char)isCompileRequired;

@end
