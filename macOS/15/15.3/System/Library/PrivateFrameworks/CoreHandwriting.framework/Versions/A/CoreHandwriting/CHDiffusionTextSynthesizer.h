@class NSString;

@interface CHDiffusionTextSynthesizer : NSObject <CHSynthesizingText> {
    struct unique_ptr<CoreHandwriting::synthesis::CHDiffusionPipeline, std::default_delete<CoreHandwriting::synthesis::CHDiffusionPipeline>> { struct __compressed_pair<CoreHandwriting::synthesis::CHDiffusionPipeline *, std::default_delete<CoreHandwriting::synthesis::CHDiffusionPipeline>> { struct CHDiffusionPipeline *__value_; } __ptr_; } _pipeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelHash;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isLoaded;
- (id)alignAlphaShapes:(id)a0 original:(id)a1 allowAnisotropicScaling:(BOOL)a2;
- (BOOL)canPredictStyleForTranscription:(id)a0;
- (id)refineDrawing:(id)a0 transcription:(id)a1 options:(id)a2 shouldCancel:(id /* block */)a3 error:(id *)a4;
- (id)replaceDrawing:(id)a0 originalTranscription:(id)a1 replacementTranscription:(id)a2 options:(id)a3 shouldCancel:(id /* block */)a4 error:(id *)a5;
- (id)rescaleAndShiftSynthesizedDrawing:(id)a0 original:(id)a1;
- (BOOL)shouldAlignAlphaShapesForOriginalString:(id)a0 replacementString:(id)a1;
- (id)stylePredictionResultForTranscription:(id)a0 drawing:(id)a1 shouldCancel:(id /* block */)a2;
- (id)supportedCharacterIndexesForString:(id)a0 options:(id)a1;
- (id)supportedCharactersForPersonalizedSynthesis;
- (id)synthesizeDrawingForString:(id)a0 options:(id)a1 shouldCancel:(id /* block */)a2 error:(id *)a3;

@end
