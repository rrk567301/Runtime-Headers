@interface CIMCangjieEngine : CIMShapeBasedEngine

+ (id)cangjieToASCIIMap;
+ (id)ASCIIFromCangjie:(id)a0;

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
- (id)enumeratedCandidates;
- (id)shownInlineText;
- (unsigned long long)maximumLengthOfValidInputCodes;
- (id)punctuationListForKey:(unsigned short)a0;
- (BOOL)inlineBeginsWithWildcard;
- (BOOL)updateMarkedTextOnSelectionChange;
- (BOOL)shouldGroupWindowMovement;

@end
