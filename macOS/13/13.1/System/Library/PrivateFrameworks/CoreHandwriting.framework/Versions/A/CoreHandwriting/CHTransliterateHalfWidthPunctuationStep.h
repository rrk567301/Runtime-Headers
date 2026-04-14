@class NSCharacterSet;

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStepModifyingOriginalTokens

@property (nonatomic) BOOL shouldAddAlternatives;
@property (retain, nonatomic) NSCharacterSet *contextInvariantCharacterSet;
@property (retain, nonatomic) NSCharacterSet *forwardLookingCharacterSet;
@property (retain, nonatomic) NSCharacterSet *backwardLookingCharacterSet;
@property (retain, nonatomic) NSCharacterSet *widthAlternativeCharacterSet;

- (void).cxx_destruct;
- (id)process:(id)a0 options:(id)a1;
- (id)initWithShouldAddAlternatives:(BOOL)a0;

@end
