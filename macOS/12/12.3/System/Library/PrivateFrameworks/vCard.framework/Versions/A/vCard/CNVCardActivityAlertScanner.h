@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)a0;
+ (BOOL)characterIsStringValueCharacter:(unsigned short)a0;
+ (id)scanAlertValueFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)atEnd;
- (unsigned long long)position;
- (unsigned short)nextCharacter;
- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (BOOL)scanPastItemDelimiter;
- (id)scanStringValue;
- (BOOL)scanPastKeyValueSeparator;
- (unsigned short)nextUnescapedCharacter;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;
- (unsigned short)scanCharacter;
- (BOOL)scanPastCharacter:(unsigned short)a0;
- (unsigned short)scanCharacterWithEscaping:(BOOL)a0;
- (void)scanPastWhitespace;

@end
