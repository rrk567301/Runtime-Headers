@class NSSet;

@interface CHTextToMathResultTransformationStep : CHGroupingPostprocessingStep {
    id /* block */ _additionalMathRecognitionBlock;
    NSSet *_numericalSymbols;
}

- (void).cxx_destruct;
- (id)initWithAdditionalMathRecognitionBlock:(id /* block */)a0;
- (id)process:(id)a0 options:(id)a1;

@end
