@interface SNLPEmbedder : NSObject {
    struct unique_ptr<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct __compressed_pair<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator *, std::default_delete<nlv4_inference_orchestrator::orchestration::EmbedderOrchestrator>> { struct EmbedderOrchestrator *__value_; } __ptr_; } _cppOrchestrator;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)warmup;
- (id)initFromSourceVocabPath:(id)a0 bertModelPath:(id)a1 bertConfigPath:(id)a2 reformulatorPath:(id)a3;
- (id)getEmbeddingsBySentence:(id)a0;
- (id)getEmbeddings:(id)a0;

@end
