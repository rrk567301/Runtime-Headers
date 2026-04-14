@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (id)httpHeaders;
- (void)setOffset:(unsigned long long)a0;
- (BOOL)isDone;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (long long)status;

@end
