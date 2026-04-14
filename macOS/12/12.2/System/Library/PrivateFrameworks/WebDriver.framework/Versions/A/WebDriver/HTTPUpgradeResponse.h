@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (void).cxx_destruct;
- (unsigned long long)offset;
- (long long)status;
- (void)setOffset:(unsigned long long)a0;
- (id)initWithToken:(id)a0;
- (id)httpHeaders;
- (BOOL)isDone;
- (unsigned long long)contentLength;

@end
