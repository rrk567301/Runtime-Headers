@class NSString;

@interface TIMathSymbolPunctuationController : NSObject {
    unsigned long long _state;
    long long _location;
    unsigned short _replacementCharacter;
}

@property (copy, nonatomic) NSString *decimalSeparator;
@property (nonatomic) char replaceAfterNumerals;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) char converted;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setInputString:(id)a0;
- (id)mathSymbolPunctuationedStringForInputString:(id)a0;
- (char)updateInputString:(id)a0;

@end
