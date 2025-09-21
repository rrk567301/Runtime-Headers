@interface IMKEnclosingCharactersInputMethod : IMKAbstractInputMethod

+ (unsigned int)_closingBracketOf:(unsigned int)a0;
+ (unsigned int)_closingCharacterOf:(unsigned int)a0;
+ (unsigned int)_closingQuoteOf:(unsigned int)a0;
+ (char)_isClosingBracket:(unsigned int)a0;
+ (char)_isClosingCharacter:(unsigned int)a0;
+ (char)_isClosingQuote:(unsigned int)a0;
+ (char)_isOpeningBracket:(unsigned int)a0;
+ (char)_isOpeningCharacter:(unsigned int)a0;
+ (char)_isOpeningQuote:(unsigned int)a0;
+ (unsigned int)_openingBracketOf:(unsigned int)a0;
+ (unsigned int)_openingCharacterOf:(unsigned int)a0;
+ (unsigned int)_openingQuoteOf:(unsigned int)a0;

- (char)_closesOpenedEnclosingCharacterWith:(unsigned int)a0;
- (char)_isTypingWithinEnclosingCharacters;
- (char)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end
