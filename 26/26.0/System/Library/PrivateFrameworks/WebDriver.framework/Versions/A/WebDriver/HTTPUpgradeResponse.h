@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (unsigned long long)contentLength;
- (unsigned long long)offset;
- (long long)status;
- (id)httpHeaders;
- (id)initWithToken:(id)a0;
- (void).cxx_destruct;

@end
