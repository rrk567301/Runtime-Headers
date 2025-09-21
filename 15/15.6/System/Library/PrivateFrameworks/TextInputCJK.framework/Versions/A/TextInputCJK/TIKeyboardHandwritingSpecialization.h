@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (char)canHandleKeyHitTest;
- (id)keyboardBehaviors;
- (id)replacementForDoubleSpace;
- (char)shouldExtendPriorWord;
- (char)supportsReversionUI;
- (id)wordSeparator;
- (id)nonstopPunctuationCharacters;
- (char)supportsLearning;

@end
