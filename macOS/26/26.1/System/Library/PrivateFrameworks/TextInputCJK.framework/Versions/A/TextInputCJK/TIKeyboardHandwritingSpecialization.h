@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (BOOL)shouldExtendPriorWord;
- (id)replacementForDoubleSpace;
- (id)wordSeparator;
- (BOOL)supportsReversionUI;
- (id)keyboardBehaviors;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
