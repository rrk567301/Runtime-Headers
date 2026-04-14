@class CHMathPostProcessingManager, CHBottomUpStrokeGroupingStrategy;
@protocol CHStrokeProvider;

@interface CHGroupOversegmentationMergingStep : CHGroupingPostprocessingStep {
    CHMathPostProcessingManager *_unitConversionPostProcessor;
    CHMathPostProcessingManager *_variableAssignmentPostProcessor;
    id /* block */ _additionalRecognitionBlock;
    id<CHStrokeProvider> _strokeProvider;
    CHBottomUpStrokeGroupingStrategy *_leftToRightBottomUpStrategy;
    CHBottomUpStrokeGroupingStrategy *_rightToLeftBottomUpStrategy;
}

- (void).cxx_destruct;
- (id)initWithAdditionalRecognitionBlock:(id /* block */)a0 strokeProvider:(id)a1 locales:(id)a2;
- (id)process:(id)a0 options:(id)a1;

@end
