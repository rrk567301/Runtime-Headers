@interface EMTCompiler : NSObject {
    struct shared_ptr<quasar::TranslatorCompiler> { struct TranslatorCompiler *__ptr_; struct __shared_weak_count *__cntrl_; } _translatorCompiler;
}

- (BOOL)compile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithModelURLs:(id)a0;
- (BOOL)isCompileRequired;

@end
