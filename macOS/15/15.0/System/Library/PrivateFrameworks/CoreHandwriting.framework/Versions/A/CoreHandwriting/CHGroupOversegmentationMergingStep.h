@class CHMathPostProcessingManager;

@interface CHGroupOversegmentationMergingStep : CHGroupingPostprocessingStep {
    CHMathPostProcessingManager *_unitConversionPostProcessor;
}

- (id)init;
- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;

@end
