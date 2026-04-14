@class NSString;

@interface HTTPRedirectResponse : NSObject <HTTPResponse> {
    NSString *redirectPath;
}

- (unsigned long long)contentLength;
- (id)httpHeaders;
- (id)initWithPath:(id)a0;
- (BOOL)isDone;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)status;

@end
