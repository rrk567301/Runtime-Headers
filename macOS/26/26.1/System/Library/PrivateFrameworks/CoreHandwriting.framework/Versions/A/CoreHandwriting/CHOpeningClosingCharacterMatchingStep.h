@class NSCharacterSet;

@interface CHOpeningClosingCharacterMatchingStep : CHPostprocessingStepModifyingOriginalTokens {
    NSCharacterSet *_openingBracketCharacters;
    NSCharacterSet *_closingBracketCharacters;
    NSCharacterSet *_openingQuoteCharacters;
    NSCharacterSet *_closingQuoteCharacters;
    NSCharacterSet *_symmetricQuoteCharacters;
}

- (void).cxx_destruct;
- (id)init;
- (id)process:(id)a0 options:(id)a1;

@end
