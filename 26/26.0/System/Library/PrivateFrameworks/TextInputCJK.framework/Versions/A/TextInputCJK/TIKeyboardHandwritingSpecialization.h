@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (id)wordSeparator;
- (id)replacementForDoubleSpace;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsReversionUI;
- (BOOL)supportsLearning;

@end
