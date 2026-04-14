@interface CIMCangjieEngine : CIMShapeBasedEngine

+ (id)ASCIIFromCangjie:(id)a0;
+ (id)cangjieToASCIIMap;

- (void)updateSettings;
- (id)keyboardLayoutName;
- (id)helpAnchorName;
- (int)mecabraInputMethodType;
- (unsigned long long)analysisOptions;
- (BOOL)shouldOptimizeLayoutForFixedSize;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (id)inputCharacterSet;
- (unsigned long long)maxLengthOfInline;
- (id)wildcardCharacterSet;
- (id)getCharacterCodeForCharacter:(id)a0;
- (unsigned long long)maximumLengthOfValidInputCodes;
- (id)enumeratedCandidates;
- (id)shownInlineText;
- (id)punctuationListForKey:(unsigned short)a0;
- (BOOL)inlineBeginsWithWildcard;
- (BOOL)updateMarkedTextOnSelectionChange;
- (BOOL)shouldGroupWindowMovement;

@end
