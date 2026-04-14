@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)replacementForDoubleSpace;
- (id)wordSeparator;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
