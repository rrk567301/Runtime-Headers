@class NSMutableData, NSArray;

@interface CNVCardLexer : NSObject {
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned long long _peekedPoint;
    unsigned long long _cursor;
    BOOL _unicode;
    long long _errorCount;
    NSArray *_activeTokenSets;
}

+ (id)singleByteTokens;
+ (id)utf16Tokens;
+ (id)returnDelimiterData;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)cursor;
- (long long)errorCount;
- (id)os_log;
- (id)nextBase64Data;
- (BOOL)atEOF;
- (id)tokenSetForLength:(long long)a0;
- (int)nextTokenPeekSingle:(BOOL)a0 length:(long long)a1;
- (int)nextTokenPeekUnicode:(BOOL)a0 length:(long long)a1;
- (int)peekAtNextToken;
- (int)readNextToken;
- (int)nextTokenPeek:(BOOL)a0;
- (int)nextTokenPeek:(BOOL)a0 length:(long long)a1;
- (id)nextQuotedPrintableData;
- (id)nextEscapedCharacter;
- (id)nextSingleByteStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 maximumValueLength:(unsigned long long)a4;
- (void)skipToStopTokens:(int)a0;
- (void)appendDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toData:(id)a1;
- (void)appendNextQuotedPrintableDataToData:(id)a0;
- (void)appendNextEscapedCharacterToData:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })emptyRangeStartingAtCursor;
- (id)stringByRoundingData:(id)a0 toNextWholeCharacterUsingEncoding:(unsigned long long)a1 prefixLength:(unsigned long long)a2 suffixLength:(unsigned long long)a3 maximumValueLength:(unsigned long long)a4;
- (id)clipAtGraphemeClusters:(id)a0 maximumValueLength:(unsigned long long)a1 addEllipsisIfClipped:(BOOL)a2;
- (id)unicodeStringByRoundingData:(id)a0 toNextWholeCharacterUsingEncoding:(unsigned long long)a1 prefixLength:(unsigned long long)a2 suffixLength:(unsigned long long)a3 maximumValueLength:(unsigned long long)a4;
- (id)stringFromData:(id)a0 encoding:(unsigned long long)a1 prefixLength:(unsigned long long)a2 suffixLength:(unsigned long long)a3;
- (id)trimData:(id)a0 withPrefixLength:(unsigned long long)a1 suffixLength:(unsigned long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeWithLength:(unsigned long long)a0 lTrim:(unsigned long long)a1 rTrim:(unsigned long long)a2;
- (id)stringFromSubData:(id)a0 encoding:(unsigned long long)a1;
- (id)nextQuotedStringValueInEncoding:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })expandRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 untilNextByteIs:(id)a1;
- (id)nextUnicodeStringStopTokens:(int)a0 quotedPrintable:(BOOL)a1 trim:(BOOL)a2 maximumValueLength:(unsigned long long)a3;
- (void)unicodeSkipToStopTokens:(int)a0;
- (BOOL)_applyNextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 maximumValueLength:(unsigned long long)a4 intoString:(id)a5;
- (id)nextStringInEncoding:(unsigned long long)a0 quotedPrintable:(BOOL)a1 stopTokens:(int)a2 trim:(BOOL)a3 maximumValueLength:(unsigned long long)a4;
- (int)tokenAtCursor;
- (unsigned short)charAtPosition:(unsigned long long)a0 withOffset:(long long)a1;
- (id)stringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 encoding:(unsigned long long)a1;
- (id)dataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)nextArraySeperatedByToken:(int)a0 stoppingAt:(int)a1 inEncoding:(unsigned long long)a2 maximumValueLength:(unsigned long long)a3;
- (int)tokenAtCursorIgnoringLineFolding;
- (id)nextUnicodeBase64Line:(BOOL *)a0;
- (id)nextSingleByteBase64Line:(BOOL *)a0;
- (id)nextBase64Line:(BOOL *)a0;
- (void)advanceToPeekPoint;
- (long long)advanceToUnicodeString;
- (long long)advanceToSingleByteString;
- (long long)advanceToString;
- (BOOL)advanceToToken:(int)a0 throughTypes:(long long)a1;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOL;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOL;
- (BOOL)advancedPastToken:(int)a0;

@end
