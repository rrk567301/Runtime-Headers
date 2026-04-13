@interface CIMStrokeEngine : CIMShapeBasedEngine

- (id)keyboardLayoutName;
- (id)helpAnchorName;
- (int)mecabraInputMethodType;
- (BOOL)handleNumberKey:(unsigned short)a0;
- (unsigned long long)analysisOptions;
- (id)candidatesForInput:(id)a0;
- (BOOL)canTypeNonMappedCharacters;
- (BOOL)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (id)inputCharacterSet;
- (unsigned long long)maxLengthOfInline;
- (id)keyMappings;
- (BOOL)shouldFadeLongReadings;
- (id)wildcardCharacterSet;
- (id)getCharacterCodeForCharacter:(id)a0;
- (id)readingStringFromReading:(id)a0;

@end
