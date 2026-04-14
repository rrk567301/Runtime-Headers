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
- (id)initWithCSVString:(id)a0;
- (id)initWithDelimitedString:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithContentsOfCSVURL:(id)a0;
- (id)initWithContentsOfDelimitedURL:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithInputStream:(id)a0 usedEncoding:(unsigned long long *)a1 delimiter:(unsigned short)a2;
- (void)_sniffEncoding;
- (void)_loadMoreIfNecessary;
- (void)_advance;
- (unsigned short)_peekCharacter;
- (unsigned short)_peekPeekCharacter;
- (void)cancelParsing;
- (BOOL)_parseRecord;
- (BOOL)_parseNewline;
- (BOOL)_parseComment;
- (void)_parseFieldWhitespace;
- (BOOL)_parseField;
- (BOOL)_parseEscapedField;
- (BOOL)_parseUnescapedField;
- (BOOL)_parseDelimiter;
- (void)_beginDocument;
- (void)_endDocument;
- (void)_beginRecord;
- (void)_beginField;
- (void)_endField;
- (void)_beginComment;
- (void)_endComment;
- (id)initWithCSVString:(id)a0 delimiter:(unsigned short)a1;
- (id)initWithContentsOfCSVFile:(id)a0;
- (id)initWithContentsOfCSVFile:(id)a0 delimiter:(unsigned short)a1;

@end
