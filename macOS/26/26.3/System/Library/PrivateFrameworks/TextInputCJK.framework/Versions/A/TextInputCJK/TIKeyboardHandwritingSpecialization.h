@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)replacementForDoubleSpace;
- (BOOL)canHandleKeyHitTest;
- (id)wordSeparator;
- (BOOL)supportsReversionUI;
- (id)keyboardBehaviors;
- (BOOL)shouldExtendPriorWord;
- (id)nonstopPunctuationCharacters;
- (BOOL)supportsLearning;

@end
