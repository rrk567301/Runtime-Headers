@class NSString;

@interface CNVCardActivityAlertScanner : NSObject {
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)a0;
+ (id)scanAlertValueFromString:(id)a0;
+ (BOOL)characterIsStringValueCharacter:(unsigned short)a0;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)atEnd;
- (unsigned long long)position;
- (unsigned short)nextCharacter;
- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (id)scanStringValue;
- (id)scanUnquotedStringValue;
- (id)scanQuotedStringValue;
- (BOOL)scanPastKeyValueSeparator;
- (BOOL)scanPastItemDelimiter;
- (unsigned short)scanCharacter;
- (unsigned short)scanCharacterWithEscaping:(BOOL)a0;
- (BOOL)scanPastCharacter:(unsigned short)a0;
- (void)scanPastWhitespace;
- (unsigned short)nextUnescapedCharacter;

@end
