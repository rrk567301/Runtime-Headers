@interface EMTAligner : NSObject {
    struct shared_ptr<quasar::PDecAligner> { struct PDecAligner *__ptr_; struct __shared_weak_count *__cntrl_; } _aligner;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelURL:(id)a0 error:(id *)a1;
- (id)alignSourceTokens:(id)a0 targetTokens:(id)a1 sourceTag:(id)a2 targetTag:(id)a3 error:(id *)a4;
- (id)initWithModelURL:(id)a0 enableMemoryMap:(BOOL)a1 error:(id *)a2;

@end
