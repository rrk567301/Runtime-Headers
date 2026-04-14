@class NSSet, CHBottomUpStrokeGroupingStrategy;
@protocol CHStrokeProvider;

@interface CHSplitTextMathStep : CHGroupingPostprocessingStep {
    id /* block */ _additionalRecognitionBlock;
    id<CHStrokeProvider> _strokeProvider;
    CHBottomUpStrokeGroupingStrategy *_leftToRightBottomUpStrategy;
    CHBottomUpStrokeGroupingStrategy *_rightToLeftBottomUpStrategy;
}

@property (readonly, nonatomic) NSSet *allowedSymbolsInTextPrefix;

- (void).cxx_destruct;
- (id)initWithAdditionalRecognitionBlock:(id /* block */)a0 strokeProvider:(id)a1 locales:(id)a2;
- (id)process:(id)a0 options:(id)a1;
- (void)processSubGroupFromGroup:(id)a0 strokeIndexes:(id)a1 inputStrokeIdentifiers:(id)a2 classification:(long long)a3 result:(id)a4;

@end
