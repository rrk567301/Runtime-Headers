@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization

- (id)replacementForDoubleSpace;
- (BOOL)canHandleKeyHitTest;
- (id)wordSeparator;
- (id)nonstopPunctuationCharacters;
- (id)keyboardBehaviors;
- (BOOL)supportsReversionUI;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsLearning;

@end
