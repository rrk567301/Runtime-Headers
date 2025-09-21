@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (void).cxx_destruct;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (long long)status;
- (id)initWithToken:(id)a0;
- (id)httpHeaders;
- (char)isDone;
- (unsigned long long)contentLength;

@end
