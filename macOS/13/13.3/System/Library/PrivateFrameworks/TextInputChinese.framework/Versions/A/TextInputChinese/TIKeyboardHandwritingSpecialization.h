@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (BOOL)shouldExtendPriorWord;
- (id)wordSeparator;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
