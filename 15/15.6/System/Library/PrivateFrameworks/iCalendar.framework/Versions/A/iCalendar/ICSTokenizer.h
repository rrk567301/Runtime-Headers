@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject {
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
}

@property char printedICS;
@property int logCount;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)currentToken;
- (char)consumeEscaped:(const char *)a0;
- (void)consumePropName;
- (char)consumeChar:(char)a0;
- (char)consumeEOL;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropValue;
- (void)consumeWhiteSpace;
- (id)initWithCompressedData:(id)a0;
- (id)nextToken;
- (int)tokenType;

@end
