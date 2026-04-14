@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (unsigned long long)contentLength;
- (id)httpHeaders;
- (BOOL)isDone;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)status;
- (id)initWithToken:(id)a0;

@end
