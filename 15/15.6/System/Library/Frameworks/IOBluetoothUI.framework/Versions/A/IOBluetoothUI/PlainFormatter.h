@class NSMutableCharacterSet;

@interface PlainFormatter : NSFormatter {
    NSMutableCharacterSet *_characterSet;
    int _maxChars;
    char _allowDigits;
    char _allowLetters;
    char _allowDashesAndUnderscores;
}

+ (id)formatterForPassKey;
+ (id)formatterForPasscode;
+ (id)formatterForSerialPortName;

- (id)init;
- (void).cxx_destruct;
- (char)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (char)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)stringForObjectValue:(id)a0;
- (void)buildCharacterSet;
- (char)isGoodString:(id)a0 intoString:(id *)a1;
- (void)setAllowLetters:(char)a0 allowDigits:(char)a1 allowUnderscoresAndDashes:(char)a2;
- (void)setMaxCharactersAllowed:(int)a0;

@end
