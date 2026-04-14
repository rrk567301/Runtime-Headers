@interface CHDiffusionTextSynthesizerLatin : CHDiffusionTextSynthesizerBase {
    struct unique_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineLatin, std::default_delete<CoreHandwriting::synthesis::CHDiffusionPipelineLatin>> { struct { struct CHDiffusionPipelineLatin *__ptr_; } ; } _pipeline;
}

+ (id)diffusionModelHashes;

- (BOOL)isLoaded;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext> { struct CHDiffusionPipelineContext *x0; struct __shared_weak_count *x1; })context;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing> { struct CHDiffusionPipelinePreprocessing *x0; struct __shared_weak_count *x1; })preprocessor;
- (long long)canPredictStyleForTranscription:(id)a0;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing> { struct CHDiffusionPipelinePostprocessing *x0; struct __shared_weak_count *x1; })postprocessor;
- (id)runPipeline:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 mode:(int)a3;
- (id)runStyleEmbedding:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharactersForPersonalizedSynthesis;
- (BOOL)useSegmentationForRefine;

@end
