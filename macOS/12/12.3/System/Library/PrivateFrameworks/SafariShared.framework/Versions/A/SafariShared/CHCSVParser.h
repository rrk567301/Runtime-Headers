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
    BOOL _cancelled;
}

@property (nonatomic) BOOL stripsLeadingAndTrailingWhitespace;
@property unsigned long long totalBytesRead;
@property id<CHCSVParserDelegate> delegate;
@property (nonatomic) BOOL sanitizesFields;
@property (nonatomic) BOOL trimsWhitespace;
@property (nonatomic) BOOL recognizesBackslashesAsEscapes;
@property (nonatomic) BOOL recognizesComments;
@property (nonatomic) BOOL recognizesLeadingEqualSign;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_error;
- (void)parse;
- (void)_endRecord;
- (id)initWithDelimitedString:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithInputStream:(id)a0 usedEncoding:(unsigned long long *)a1 delimiter:(unsigned short)a2;
- (id)initWithContentsOfDelimitedURL:(id)a0 delimiter:(unsigned short)a1;
- (void)_sniffEncoding;
- (void)_loadMoreIfNecessary;
- (void)_beginDocument;
- (BOOL)_parseRecord;
- (void)_endDocument;
- (unsigned short)_peekCharacter;
- (BOOL)_parseComment;
- (void)_beginRecord;
- (BOOL)_parseField;
- (BOOL)_parseDelimiter;
- (BOOL)_parseNewline;
- (unsigned short)_peekPeekCharacter;
- (void)_advance;
- (void)_beginComment;
- (void)_endComment;
- (void)_beginField;
- (void)_parseFieldWhitespace;
- (BOOL)_parseEscapedField;
- (BOOL)_parseUnescapedField;
- (void)_endField;
- (id)initWithCSVString:(id)a0;
- (id)initWithContentsOfCSVURL:(id)a0;
- (void)cancelParsing;
- (id)initWithCSVString:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithContentsOfCSVFile:(id)a0;
- (id)initWithContentsOfCSVFile:(id)a0 delimiter:(unsigned short)a1;

@end
