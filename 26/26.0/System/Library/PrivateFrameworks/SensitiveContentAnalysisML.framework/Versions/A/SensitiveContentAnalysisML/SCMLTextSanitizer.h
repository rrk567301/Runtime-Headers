@class NSMutableArray, NSLocale;

@interface SCMLTextSanitizer : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    unsigned int _mode;
    unsigned int _granularity;
    unsigned long long _backends;
    BOOL _throwInAdapterAsyncHandler;
    struct unique_ptr<scml::MultiwordGazetteer, std::default_delete<scml::MultiwordGazetteer>> { struct MultiwordGazetteer *__ptr_; } _personsGazetteer;
    struct unique_ptr<scml::MultiwordGazetteer, std::default_delete<scml::MultiwordGazetteer>> { struct MultiwordGazetteer *__ptr_; } _visualGenerationIgnoreGazetteer;
    struct unique_ptr<scml::(anonymous namespace)::RuleBasedTextSanitizer, std::default_delete<scml::(anonymous namespace)::RuleBasedTextSanitizer>> { struct RuleBasedTextSanitizer *__ptr_; } _rulesBasedSanitizer;
    NSMutableArray *_llmBackends;
}

@property (readonly, nonatomic) NSLocale *locale;

+ (unsigned int)violationCategoryForAdapterLabel:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)sanitizeRequestAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (void)sanitizeTextAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sanitizeRequestAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (void)doLLMBackend:(id)a0 withText:(id)a1 isChildPresent:(BOOL)a2 withResponder:(void *)a3;

@end
