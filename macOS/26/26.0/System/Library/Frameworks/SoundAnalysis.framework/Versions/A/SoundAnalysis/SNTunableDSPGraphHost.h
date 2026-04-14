@interface SNTunableDSPGraphHost : NSObject {
    struct unique_ptr<AUProcessingBlock_DSPGraph, std::default_delete<AUProcessingBlock_DSPGraph>> { struct AUProcessingBlock_DSPGraph *__ptr_; } _tuningHost;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 error:(id *)a1;

@end
