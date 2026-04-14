@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
}

@property BOOL printedICS;
@property int logCount;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)currentToken;
- (id)initWithCompressedData:(id)a0;
- (BOOL)consumeChar:(char)a0;
- (BOOL)consumeEOL;
- (void)consumeWhiteSpace;
- (void)consumePropName;
- (void)consumeParamName;
- (BOOL)consumeEscaped:(const char *)a0;
- (void)consumeParamValue;
- (void)consumePropValue;
- (id)nextToken;
- (int)tokenType;

@end
