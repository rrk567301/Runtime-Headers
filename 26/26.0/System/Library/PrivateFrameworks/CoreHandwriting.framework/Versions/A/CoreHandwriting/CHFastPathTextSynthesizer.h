@class NSString;

@interface CHFastPathTextSynthesizer : NSObject <CHSynthesizingText> {
    struct CHFastPathCharacterInventory { struct vector<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterHolder>>> { void *__begin_; void *__end_; void *__cap_; } _holders; struct vector<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>, std::allocator<std::shared_ptr<CoreHandwriting::synthesis::fast_path::CHAbstractFastPathCharacterInventoryExtension>>> { void *__begin_; void *__end_; void *__cap_; } _extensions; } _inventory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelineContext> { struct CHDiffusionPipelineContext *x0; struct __shared_weak_count *x1; })context;
- (void).cxx_destruct;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePreprocessing> { struct CHDiffusionPipelinePreprocessing *x0; struct __shared_weak_count *x1; })preprocessor;
- (id)generateDrawingForText:(id)a0 options:(id)a1;
- (id)initWithStyleInventory:(id)a0;
- (id)initWithoutPersonalizedStyleInventory;
- (struct shared_ptr<CoreHandwriting::synthesis::CHDiffusionPipelinePostprocessing> { struct CHDiffusionPipelinePostprocessing *x0; struct __shared_weak_count *x1; })postprocessor;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (BOOL)shouldUsePersonalization;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)supportedCharacters;
- (id)supportedCharactersUsingDefaultStyleOnly:(BOOL)a0;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;

@end
