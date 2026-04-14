@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (unsigned long long)contentLength;
- (id)initWithToken:(id)a0;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (long long)status;
- (void).cxx_destruct;
- (id)httpHeaders;
- (unsigned long long)offset;

@end
