@interface CHDiffusionTextSynthesizerKo : CHDiffusionTextSynthesizerBase {
    struct unique_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineKo, std::default_delete<CoreHandwriting::synthesis::CHDiffusionPipelineKo>> { struct CHDiffusionPipelineKo *__ptr_; } _pipeline;
}

+ (id)diffusionModelHashes;

- (BOOL)isLoaded;
- (id)init;
- (id).cxx_construct;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext> { struct CHDiffusionPipelineContext *x0; struct __shared_weak_count *x1; })context;
- (void).cxx_destruct;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing> { struct CHDiffusionPipelinePreprocessing *x0; struct __shared_weak_count *x1; })preprocessor;
- (long long)canPredictStyleForTranscription:(id)a0;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing> { struct CHDiffusionPipelinePostprocessing *x0; struct __shared_weak_count *x1; })postprocessor;
- (id)runPipeline:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 mode:(int)a3;
- (id)runStyleEmbedding:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharactersForPersonalizedSynthesis;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;
- (BOOL)useSegmentationForRefine;

@end
