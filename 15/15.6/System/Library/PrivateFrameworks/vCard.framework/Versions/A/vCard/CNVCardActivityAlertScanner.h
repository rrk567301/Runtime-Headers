@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)a0;
+ (char)characterIsStringValueCharacter:(unsigned short)a0;
+ (id)scanAlertValueFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (unsigned long long)position;
- (id)scanStringValue;
- (char)atEnd;
- (unsigned short)nextCharacter;
- (unsigned short)nextUnescapedCharacter;
- (id)scanAlertValue;
- (unsigned short)scanCharacter;
- (unsigned short)scanCharacterWithEscaping:(char)a0;
- (id)scanKeyValuePair;
- (char)scanPastCharacter:(unsigned short)a0;
- (char)scanPastItemDelimiter;
- (char)scanPastKeyValueSeparator;
- (void)scanPastWhitespace;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;

@end
