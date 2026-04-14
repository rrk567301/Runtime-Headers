@class NSString;

@interface HTTPUpgradeResponse : NSObject <HTTPResponse> {
    NSString *token;
}

- (id)initWithToken:(id)a0;
- (long long)status;
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)a0;
- (id)httpHeaders;
- (unsigned long long)contentLength;
- (void).cxx_destruct;
- (unsigned long long)offset;

@end
