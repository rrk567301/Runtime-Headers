@class NSSet, NSDictionary;

@interface CHTextToMathResultTransformationStep : CHGroupingPostprocessingStep {
    id /* block */ _additionalRecognitionBlock;
    NSSet *_numericalSymbols;
    NSDictionary *_textToMathTransliterations;
}

- (void).cxx_destruct;
- (id)initWithAdditionalRecognitionBlock:(id /* block */)a0;
- (id)process:(id)a0 options:(id)a1;

@end
