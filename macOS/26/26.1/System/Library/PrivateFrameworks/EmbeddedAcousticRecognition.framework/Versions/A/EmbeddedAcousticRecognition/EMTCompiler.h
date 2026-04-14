@interface EMTCompiler : NSObject {
    struct shared_ptr<quasar::TranslatorCompiler> { struct TranslatorCompiler *__ptr_; struct __shared_weak_count *__cntrl_; } _translatorCompiler;
}

- (id).cxx_construct;
- (BOOL)compile;
- (void).cxx_destruct;
- (id)initWithModelURLs:(id)a0;
- (BOOL)isCompileRequired;

@end
