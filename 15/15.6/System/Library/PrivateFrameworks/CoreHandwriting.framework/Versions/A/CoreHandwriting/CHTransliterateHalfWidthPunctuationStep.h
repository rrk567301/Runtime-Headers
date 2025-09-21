@class NSCharacterSet;

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStepModifyingOriginalTokens {
    char _shouldAddAlternatives;
    NSCharacterSet *_contextInvariantCharacterSet;
    NSCharacterSet *_forwardLookingCharacterSet;
    NSCharacterSet *_backwardLookingCharacterSet;
    NSCharacterSet *_widthAlternativeCharacterSet;
}

- (void).cxx_destruct;
- (id)initWithShouldAddAlternatives:(char)a0;
- (id)process:(id)a0 options:(id)a1;

@end
