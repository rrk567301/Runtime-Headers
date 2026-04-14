@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
