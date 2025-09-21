@class CHFastPathTextSynthesizer, NSString, CHDiffusionTextSynthesizerZhJa, CHDiffusionTextSynthesizerLatin, CHDiffusionTextSynthesizerKo, CHSynthesisStyleInventory;

@interface CHMultiScriptTextSynthesizer : NSObject <CHSynthesizingText> {
    CHDiffusionTextSynthesizerLatin *_diffusionSynthesizerLatn;
    CHDiffusionTextSynthesizerZhJa *_diffusionSynthesizerZhJa;
    CHDiffusionTextSynthesizerKo *_diffusionSynthesizerKo;
    CHFastPathTextSynthesizer *_fastPathSynthesizer;
    CHSynthesisStyleInventory *_styleInventory;
    struct map<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::pair<std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext>, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing>>, std::less<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID>, std::allocator<std::pair<const CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::pair<std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext>, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing>>>>> { struct __tree<std::__value_type<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::pair<std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext>, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing>>>, std::__map_value_compare<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::__value_type<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::pair<std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext>, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing>>>, std::less<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID>>, std::allocator<std::__value_type<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::pair<std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext>, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing>>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } preprocessors;
    struct map<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing>, std::less<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID>, std::allocator<std::pair<const CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing>>>> { struct __tree<std::__value_type<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing>>, std::__map_value_compare<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::__value_type<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing>>, std::less<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID>>, std::allocator<std::__value_type<CoreHandwriting::synthesis::CHSynthesisTextSynthesizerID, std::shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing>>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } postprocessors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chunksForFeatures:(const void *)a0 metadata:(struct CHDiffusionPipelinePreprocessingExecutionMetadata { struct vector<CoreHandwriting::synthesis::CHDiffusionPipelineReplacementData, std::allocator<CoreHandwriting::synthesis::CHDiffusionPipelineReplacementData>> { struct CHDiffusionPipelineReplacementData *x0; struct CHDiffusionPipelineReplacementData *x1; struct CHDiffusionPipelineReplacementData *x2; } x0; unsigned long long x1; })a1;
+ (id)diffusionModelHashes;
+ (long long)maxNumberOfSynthesizedCharactersForSize:(struct CGSize { double x0; double x1; })a0 withDecimalSeparator:(BOOL)a1;
+ (id)rescaleAndShiftSynthesizedDrawing:(id)a0 original:(id)a1;
+ (long long)suggestionFromSynthesizerID:(int)a0;
+ (int)synthesizerIdFromSuggestion:(long long)a0;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)availableDiffusionSynthesizers;
- (long long)canPredictStyleForTranscription:(id)a0;
- (id)chunkForSynthesisString:(id)a0 allowedSynthesizers:(id)a1;
- (id)getSynthesizerFromSynthesizerId:(int)a0;
- (id)initWithStyleInventory:(id)a0;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (id)stylePredictionResultForTranscriptions:(id)a0 drawings:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)supportedCharactersForPersonalizedSynthesis;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;

@end
