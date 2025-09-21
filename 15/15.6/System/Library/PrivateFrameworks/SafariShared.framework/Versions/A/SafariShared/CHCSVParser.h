@class NSError, NSMutableString, NSMutableData, NSInputStream, NSCharacterSet;
@protocol CHCSVParserDelegate;

@interface CHCSVParser : NSObject {
    NSInputStream *_stream;
    unsigned long long _streamEncoding;
    NSMutableData *_stringBuffer;
    NSMutableString *_string;
    NSCharacterSet *_validFieldCharacters;
    unsigned long long _nextIndex;
    long long _fieldIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _fieldRange;
    NSMutableString *_sanitizedField;
    unsigned short _delimiter;
    NSError *_error;
    unsigned long long _currentRecord;
    char _cancelled;
}

@property (nonatomic) char stripsLeadingAndTrailingWhitespace;
@property unsigned long long totalBytesRead;
@property id<CHCSVParserDelegate> delegate;
@property (nonatomic) char sanitizesFields;
@property (nonatomic) char trimsWhitespace;
@property (nonatomic) char recognizesBackslashesAsEscapes;
@property (nonatomic) char recognizesComments;
@property (nonatomic) char recognizesLeadingEqualSign;

- (void)dealloc;
- (void).cxx_destruct;
- (void)parse;
- (char)_parseDelimiter;
- (void)_advance;
- (void)_beginComment;
- (void)_beginDocument;
- (void)_beginField;
- (void)_beginRecord;
- (void)_endComment;
- (void)_endDocument;
- (void)_endField;
- (void)_endRecord;
- (void)_error;
- (void)_loadMoreIfNecessary;
- (char)_parseComment;
- (char)_parseEscapedField;
- (char)_parseField;
- (void)_parseFieldWhitespace;
- (char)_parseNewline;
- (char)_parseRecord;
- (char)_parseUnescapedField;
- (unsigned short)_peekCharacter;
- (unsigned short)_peekPeekCharacter;
- (void)_sniffEncoding;
- (void)cancelParsing;
- (id)initWithCSVString:(id)a0;
- (id)initWithCSVString:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithContentsOfCSVFile:(id)a0;
- (id)initWithContentsOfCSVFile:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithContentsOfCSVURL:(id)a0;
- (id)initWithContentsOfDelimitedURL:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithDelimitedString:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithInputStream:(id)a0 usedEncoding:(unsigned long long *)a1 delimiter:(unsigned short)a2;

@end
