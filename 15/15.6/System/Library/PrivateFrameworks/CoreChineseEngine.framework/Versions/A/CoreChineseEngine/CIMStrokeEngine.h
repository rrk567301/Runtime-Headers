@interface CIMStrokeEngine : CIMShapeBasedEngine

- (id)helpAnchorName;
- (id)keyboardLayoutName;
- (int)mecabraInputMethodType;
- (char)handleNumberKey:(unsigned short)a0;
- (unsigned long long)analysisOptions;
- (char)canTypeNonMappedCharacters;
- (id)candidatesForInput:(id)a0;
- (id)getCharacterCodeForCharacter:(id)a0;
- (char)handlePunctuationAndSymbolsAndUppercaseLetters:(unsigned short)a0;
- (id)inputCharacterSet;
- (id)keyMappings;
- (unsigned long long)maxLengthOfInline;
- (id)readingStringFromReading:(id)a0;
- (char)shouldFadeLongReadings;
- (id)wildcardCharacterSet;

@end
