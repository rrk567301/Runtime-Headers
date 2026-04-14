@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (BOOL)canHandleKeyHitTest;
- (id)nonstopPunctuationCharacters;
- (id)replacementForDoubleSpace;
- (id)wordSeparator;
- (BOOL)supportsReversionUI;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;
- (BOOL)supportsLearning;

@end
