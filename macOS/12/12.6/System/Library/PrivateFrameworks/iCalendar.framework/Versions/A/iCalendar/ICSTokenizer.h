@class NSData;

@interface ICSTokenizer : NSObject {
    NSData *_data;
    const char *_datastring;
    unsigned long long _length;
    unsigned long long _cursor;
    char *_token;
    int _tokenType;
    int _expectedNextTokenType;
}

@property BOOL printedICS;
@property int logCount;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (char *)currentToken;
- (char *)nextToken;
- (int)tokenType;
- (BOOL)consumeFolding;
- (BOOL)consumeEOL;
- (void)consumeWhiteSpace;
- (BOOL)consumeEscaped:(const char *)a0;
- (void)consumePropName;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropValue;

@end
