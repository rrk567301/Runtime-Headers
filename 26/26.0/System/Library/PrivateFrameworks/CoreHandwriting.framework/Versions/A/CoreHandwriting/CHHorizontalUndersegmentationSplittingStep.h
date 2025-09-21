@interface CHHorizontalUndersegmentationSplittingStep : CHGroupingPostprocessingStep {
    id /* block */ _additionalRecognitionBlock;
}

- (void).cxx_destruct;
- (id)initWithAdditionalRecognitionBlock:(id /* block */)a0;
- (id)process:(id)a0 options:(id)a1;

@end
