@class NSCharacterSet;

@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStep

@property (nonatomic) BOOL shouldAddAlternatives;
@property (retain, nonatomic) NSCharacterSet *contextInvariantCharacterSet;
@property (retain, nonatomic) NSCharacterSet *forwardLookingCharacterSet;
@property (retain, nonatomic) NSCharacterSet *backwardLookingCharacterSet;
@property (retain, nonatomic) NSCharacterSet *widthAlternativeCharacterSet;

- (void)dealloc;
- (id)process:(id)a0;
- (id)initShouldAddAlternatives:(BOOL)a0;

@end
