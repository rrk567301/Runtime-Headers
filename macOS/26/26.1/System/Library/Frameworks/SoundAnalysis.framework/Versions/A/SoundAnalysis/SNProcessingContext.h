@interface SNProcessingContext : NSObject {
    struct shared_ptr<SoundAnalysis::ProcessingContext> { struct ProcessingContext *__ptr_; struct __shared_weak_count *__cntrl_; } _processingContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<SoundAnalysis::ProcessingContext> { struct ProcessingContext *x0; struct __shared_weak_count *x1; })processingContext;
- (id)initWithGraph:(id)a0 sharedProcessingGraph:(id)a1 error:(id *)a2;

@end
